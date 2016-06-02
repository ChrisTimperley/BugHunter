#!/usr/bin/python
import multiprocessing
import sys
import json
import urlparse
import requests
from lxml import html

#http://git.php.net/?p=pecl/numbers/bitset.git;a=commit;h=a8ab53f89bebd604806729f1ede3aa49a279ff39
def analyse_git(bug, url):
    parsed = urlparse.urlparse(url).query
    parsed = urlparse.parse_qs(parsed)
    
    if not 'h' in parsed:
        return bug

    # find the git repo and commit sha identifier
    repo = str(parsed['p'][0])
    commit = str(parsed['h'][0])

    # find details about the commit
    try:
        r = requests.get('https://git.php.net', params={'p': repo, 'h': commit, 'a': 'commit'})
    except:
        print "Failed HTTP request for bug: %s" % bug['id']
        return bug

    doc = html.fromstring(r.content)

    # has the commit been lost?
    files = doc.xpath("//table[@class='diff_tree']/tr/td[1]/a/text()")
    if not files:
        return bug

    body = doc.xpath("//div[@class='page_body']/text()")[0]
    body = str(body.replace(u'\xa0', u' ')).strip()
    parent_commit = doc.xpath("//table[@class='object_header']/tr[7]/td[2]/a/text()")[0]

    # augment the bug data
    bug['vcs'] = {
        'type': 'git',
        'repository': repo,
        'commit': commit,
        'parent': parent_commit,
        'body': body
    }
    bug['files'] = files
    return bug

def analyse(bug):
    print "analysing %s" % bug['id']
    if len(bug['commits']) == 1 and bug['commits'][0].startswith('http://git.php.net'):
        return analyse_git(bug, bug['commits'][0])
    return bug

def process(in_file, out_file):
    with open(in_file, 'r') as f:
        bugs = json.load(f)

    pool = multiprocessing.Pool()
    #analysed = map(analyse, bugs.values())
    analysed = pool.map(analyse, bugs.values())
    analysed = {bug['id']: bug for bug in analysed}
    print "analysed %d bugs" % len(analysed)

    with open(out_file, 'w') as f:
        json.dump(analysed, f, indent=2, sort_keys=True)

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print "ERROR: expected name of input and output files"
    else:
        process(sys.argv[1], sys.argv[2])

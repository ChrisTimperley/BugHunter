#!/usr/bin/python
import sys
import json
import urlparse
import requests
from lxml import html

#http://git.php.net/?p=pecl/numbers/bitset.git;a=commit;h=a8ab53f89bebd604806729f1ede3aa49a279ff39
def analyse_git(url):
    parsed = urlparse.urlparse(url).query
    parsed = urlparse.parse_qs(parsed)
    
    if not 'h' in parsed:
        return None

    repo = str(parsed['p'][0])
    commit = str(parsed['h'][0])

    # find details about the commit
    r = requests.get('https://git.php.net', params={'p': repo, 'h': commit, 'a': 'commit'})
    doc = html.fromstring(r.content)
    
    parent_commit = doc.xpath("//table[@class='object_header']/tr[7]/td[2]/a/text()")[0]
    msg = doc.xpath("//div[@class='page_body']/text()")[0]
    msg = str(msg.replace(u'\xa0', u' ')).strip()

    # 
    print (repo, commit, parent_commit, msg)

# 
def analyse(in_file, out_file):
    with open(in_file, 'r') as f:
        bugs = json.load(f)
    for bug in bugs.values():
        if len(bug['commits']) == 1 and bug['commits'][0].startswith('http://git.php.net'):
            analyse_git(bug['commits'][0])

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print "ERROR: expected name of input and output files"
    else:
        analyse(sys.argv[1], sys.argv[2])

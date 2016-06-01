#!/usr/bin/python
import sys
import multiprocessing
import json
import requests
import os.path
from lxml import html

def read_field(doc, field):
  query = field + '/text()'
  res = doc.xpath(query)
  return (res[0] if len(res) == 1 else "")

# Extracts information about a bug with a given ID from bugs.php.net, returned
# in the form of a dictionary object, ready for merging into a JSON document.
# Returns None if there is no bug with the given id
#
# Note: id must be greater than zero
def fetch_bug(id):
    id_s = format(id, '07')
    print "fetching bug: %d" % id_s
    file_path = './bug-%d.json' % id_s

    # Have we already downloaded this bug to disk?
    if os.path.isfile(file_path):
        with open(file_path, 'r') as f:
            return json.load(f)

    r = requests.get('https://bugs.php.net/bug.php', params={'id': id})
    doc = html.fromstring(r.content)

    # Does the bug exist?
    if doc.xpath('//div[@class="errors"]/ul/li'):
        return None

    # Find all SVN/Git commits
    commits = doc.xpath('//div[@class="comment type_svn"]/pre[1]/a/@href')
    commits = filter(lambda c: not c.startswith('bug.php'), commits)
    commits = list(set(commits))

    try:
        jsn = {
            'id':           id_s,
            'summary':      read_field(doc, '//td[@id="summary"]'),
            'status':       read_field(doc, '//tr[@id="categorization"]/td[1]'),
            'package':      read_field(doc, '//tr[@id="categorization"]/td[2]/a'),
            'submitted':    read_field(doc, '//tr[@id="submission"]/td[1]'),
            'modified':     read_field(doc, '//tr[@id="submission"]/td[2]'),
            'submitter':    read_field(doc, '//tr[@id="submitter"]/td[1]'),
            'assigned':     read_field(doc, '//tr[@id="submitter"]/td[2]/a'),
            'version':      read_field(doc, '//tr[@id="situation"]/td[1]'),
            'os':           read_field(doc, '//tr[@id="situation"]/td[2]'),
            'private':      read_field(doc, '//tr[@id="private"]/td[1]'),
            'cve':          read_field(doc, '//tr[@id="private"]/td[2]'),
            'commits':      commits,
            'note':         read_field(doc, '//pre[@class="note"]')
        }
    except:
        print "Unexpected error when reading bug: %d" % id_s
        raise

    # Save to disk
    try:
        with open(file_path, 'w') as f:
            json.dump(jsn, f, indent=2)
    except:
        print "Unexpected error when writing bug report to file: %d" % id_s
        raise

    return jsn

# Keeps fetching PHP bugs until it runs out of them, then it writes a summary
# of them to bugs.json.
def fetch_bugs(lim):
    pool = multiprocessing.Pool()
    doc = {}
    for bug in pool.map(fetch_bug, range(1, lim + 1)):
        if bug is None:
            continue
        doc[bug['id']] = bug
    with open('bugs.json', 'w') as f:
        json.dump(doc, f, indent=2, sort_keys=True)
    return doc

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print "ERROR: expected ID of most recently reported bug"
    else:
        fetch_bugs(int(sys.argv[1]))

#!/usr/bin/python
import requests
from lxml import html

def read_field(doc, field):
  query = field + '/text()'
  res = doc.xpath(query)
  return (res[0] if len(res) == 1 else "")

# Extracts information about a bug with a given ID from bugs.php.net
def process_bug(id):
    r = requests.get('https://bugs.php.net/bug.php', params={'id': id})
    doc = html.fromstring(r.content)

    # Collate meta-data and bug report into a JSON doc
    jsn = {
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
        'note':         doc.xpath('//pre[@class="note"]/text()')[0]
    }

    # Find all SVN/Git commits
    commits = doc.xpath('//div[@class="comment type_svn"]/pre[1]/a/@href')
    commits = filter(lambda c: not c.startswith('bug.php'), commits)
    print commits

#
process_bug(63740)

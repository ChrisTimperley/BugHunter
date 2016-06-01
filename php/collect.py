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

    summary         = read_field(doc, '//td[@id="summary"]')
    status          = read_field(doc, '//tr[@id="categorization"]/td[1]')
    package         = read_field(doc, '//tr[@id="categorization"]/td[2]/a')
    submitted       = read_field(doc, '//tr[@id="submission"]/td[1]')
    modified        = read_field(doc, '//tr[@id="submission"]/td[2]')
    submitted_by    = read_field(doc, '//tr[@id="submitter"]/td[1]')
    assigned_to     = read_field(doc, '//tr[@id="submitter"]/td[2]/a')
    version         = read_field(doc, '//tr[@id="situation"]/td[1]')
    os              = read_field(doc, '//tr[@id="situation"]/td[2]')
    private         = read_field(doc, '//tr[@id="private"]/td[1]')
    cve             = read_field(doc, '//tr[@id="private"]/td[2]')
    note            = doc.xpath('//pre[@class="note"]/text()')[0]

    print "ID: %d" % id
    print "Summary: %s" % summary
    print "Submitted: %s" % submitted
    print "Modified: %s" % modified
    print "Status: %s" % status
    print "Package: %s" % package
    print "Version: %s" % version
    print "OS: %s" % os
    print "Private: %s" % private
    print "CVE: %s" % cve
    print "\n\n%s" % note

#
process_bug(63740)

#!/usr/bin/python
import requests
from lxml import html

# Extracts information about a bug with a given ID from bugs.php.net
def process_bug(id):
    r = requests.get('https://bugs.php.net/bug.php', params={'id': id})
    doc = html.fromstring(r.content)

    summary = doc.xpath('//td[@id="summary"]/text()')[0]
    status = doc.xpath('//tr[@id="categorization"]/td[1]/text()')[0]
    package = doc.xpath('//tr[@id="categorization"]/td[2]/a/text()')[0]

    print "ID: %d" % id
    print "Summary: %s" % summary
    print "Status: %s" % status
    print "Package: %s" % package

#
process_bug(63740)

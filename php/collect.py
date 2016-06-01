#!/usr/bin/python
import requests
from lxml import html

# Extracts information about a bug with a given ID from bugs.php.net
def process_bug(id):
    r = requests.get('https://bugs.php.net/bug.php', params={'id': id})
    doc = html.fromstring(r.content)
    print "processed %d" % id

#
process_bug(63740)

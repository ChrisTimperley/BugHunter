#!/usr/bin/python
#
# Needs modifying to work with OAuth and to cache (post-processed) requests to
# disk, in order to avoid exceeding GitHub's API rate limit.
#
import requests

# The easiest way to find bug fixes for PHP is to use GitHub's API
# https://developer.github.com/v3/issues/
params = { 'state': 'closed' }
r = requests.get('https://api.github.com/repos/php/php-src/issues', params=params)

# Build a list of issue IDs
def fetch_issues():
    pg = 0
    while True:
        pg += 1
        print "Fetching page: %d" % pg
        r = requests.get('https://api.github.com/repos/php/php-src/issues', params={
                'state': 'closed', 'page': pg})
        response = r.json()
        if not response:
            break

fetch_issues()

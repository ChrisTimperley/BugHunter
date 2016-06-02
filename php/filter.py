#!/usr/bin/python
import sys
import json

IGNORED_PACKAGES = ['Compile Failure', 'Feature/Change Request',
    'Installation problem', 'Documentation problem']

def keep_bug(bug):
    if bug['status'] != 'Closed':
        return False
    if len(bug['commits']) != 1:
        return False
    if not (bug['commits'][0].startswith('http://git.php.net') or bug['commits'][0].startswith('http://svn.php.net')):
        return False
    if bug['package'] in IGNORED_PACKAGES:
        return False
    return True

def filter_bugs(in_file, out_file):
    with open(in_file, 'r') as f:
        bugs = json.load(f)
    filtered = {}
    for (id, bug) in bugs.iteritems():
        if keep_bug(bug):
            filtered[id] = bug
    print "filtered to %d bugs" % len(filtered)
    with open(out_file, 'w') as f:
        json.dump(filtered, f, indent=2, sort_keys=True)

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print "ERROR: expected names of input and output bug manifests"
    else:
        filter_bugs(sys.argv[1], sys.argv[2])

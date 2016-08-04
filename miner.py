#!/usr/bin/python
import sys
import git
import json

# Any commit containing a bug marker will be treated as a bug fix, unless the
# commit also contains an anti-marker
BUG_MARKERS = ['fixed', 'bug']
BUG_ANTI_MARKERS = ['compile', 'compilation', 'debug', 'merge', 'revert']

class Fix(object):
    def __init__(self, commit):
        self.__commit = commit
        self.__stats = None
        self.__files = None

    def identifier(self):
        return str(self.__commit)
    def message(self):
        return self.__commit.message.strip()
    def email(self):
        return self.__commit.committer.email
    def name(self):
        return self.__commit.committer.name
    def date(self):
        return self.__commit.committed_date

    def stats(self):
        if not self.__stats:
            self.__stats = self.__commit.stats
        return self.__stats
    def files(self):
        if not self.__files:
            self.__files = self.stats().files.keys()
        return self.__files

    # Determines whether this object is indeed a fix
    def is_fix(self):
        msg = self.message().lower()
        return  any(s in msg for s in BUG_MARKERS) and \
                (not (any (s in msg for s in BUG_ANTI_MARKERS))) and \
                any(f.endswith('.c') for f in self.files())

    #
    def get_files(self):
        x

    def to_json(self):
        return {
            'id': self.identifier(),
            'message': self.message(),
            'committer': {
                'email': self.email(),
                'name': self.name()
            },
            'date': self.date(),
            'files': self.files()
        }

def fixes_to_json_file(fixes, fn):
    with open(fn, 'w') as f:
        json.dump(map(Fix.to_json, fixes), f, indent=2)

# Supply the path to the repository via the command line
repoPath = sys.argv[1]

# Model the repository using GitCmdObjectDB as it gives better performance
# than GitDB when dealing with large quantities of smaller files.
repo = git.Repo(repoPath, odbt=git.GitCmdObjectDB)

# Find the list of all suitable commits
print "extracting commits from repository..."
fixes = map(Fix, repo.iter_commits())
print "filtering fixes from list of commits..."
fixes = filter(Fix.is_fix, fixes)
print "found %d fixes" % len(fixes)
print "writing fix information to JSON file..."
fixes_to_json_file(fixes, "fixes.json")

#!/usr/bin/python
import json
import sys
import git
import os
import os.path

# Any commit containing a bug marker will be treated as a bug fix, unless the
# commit also contains an anti-marker
BUG_MARKERS = ['fixed', 'bug']
BUG_ANTI_MARKERS = ['compile', 'compilation', 'debug', 'merge', 'revert']

# Used to store information about a mined bug fix
class Fix(object):
    def __init__(self, commit, jsn=None):
        self.__commit = commit
        self.__files = None

        if commit:
            self.__identifier = str(commit)
            self.__message = commit.message.strip()
            self.__email = commit.committer.email
            self.__name = commit.committer.name
            self.__date = commit.committed_date
            self.__files = None
        elif json:
            self.__identifier = jsn['id']
            self.__message = jsn['message']
            self.__email = jsn['email']
            self.__name = jsn['name']
            self.__date = jsn['date']
            self.__files = jsn['files']

    @staticmethod
    def from_json(jsn):
        return Fix(None, jsn=jsn)

    def identifier(self):
        return self.__identifier
    def message(self):
        return self.__message
    def email(self):
        return self.__email
    def name(self):
        return self.__name
    def date(self):
        return self.__date
    def files(self):
        if self.__files is None:
            self.__files = self.__commit.stats.files.keys()
        return self.__files

    # Determines whether this object is indeed a fix
    def is_fix(self):
        msg = self.message().lower()
        return  any(s in msg for s in BUG_MARKERS) and \
                (not (any (s in msg for s in BUG_ANTI_MARKERS))) and \
                any(f.endswith('.c') for f in self.files())

    # Returns a JSON description of this fix, in the form of a Dict
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

# Used to hold all the fixes for a particular repository
class FixDB(object):

    # Model the repository using GitCmdObjectDB as it gives better performance
    # than GitDB when dealing with large quantities of smaller files.
    def __init__(self, repoPath):
        self.__name = os.path.basename(repoPath)
        self.__repo = git.Repo(repoPath, odbt=git.GitCmdObjectDB)

        # Load the fixes from the JSON index file for this repo, if one exists
        if os.path.isfile(self.indexFileName()):
            self.from_json()
        # Otherwise, generate the index file from scratch and save it to disk
        else:
            self.build()

    def repository(self):
        return self.__repo

    # Returns the name of the index file for this project
    def indexFileName(self):
        return "database/%s/database.json" % self.__name

    # Builds the contents of this fix database from scratch, then saves to disk
    def build(self):
        print "Building fix database from scratch..."
        print "Extracting commits from repository..."
        commits = map(Fix, self.repository().iter_commits())
        print "Filtering fixes from list of commits..."
        self.__fixes = filter(Fix.is_fix, commits)
        print "Finished filtering - found %d fixes" % len(self.__fixes)
        # save to disk
        self.save()

    # Loads the contents of this fix database from its JSON index file
    def from_json(self):
        print "Loading fix database from index file..."
        with open(self.indexFileName(), 'r') as f:
            self.__fixes = map(Fix.from_json, json.load(f))
        print "Loaded fix database from index file"

    # Saves the contents of this fix database to its JSON index file
    def save(self):
        indexFileName = self.indexFileName()
        indexFileDir = os.path.dirname(indexFileName)
        print "Saving fix database to index file: %s" % indexFileName

        # ensure a directory exists for this repository
        if not os.path.exists(indexFileDir):
            os.makedirs(indexFileDir)

        with open(self.indexFileName(), 'w') as f:
            json.dump(map(Fix.to_json, self.__fixes), f, indent=2)
        print "Saved fix database to index file"

if __name__ == "__main__":
    if len(sys.argv) == 1:
        print "Usage: bughunter [repository]"
    elif len(sys.argv) == 2:
        FixDB(sys.argv[1].strip())
    else:
        print "Error: expected a single argument, specifying the path to the repository which should be inspected."

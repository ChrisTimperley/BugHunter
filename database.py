from utility import *
from fix import Fix
import os.path
import git
import json

# Used to hold all the fixes for a particular repository
class Database(object):

    # Model the repository using GitCmdObjectDB as it gives better performance
    # than GitDB when dealing with large quantities of smaller files.
    def __init__(self, repoPath, threads=1):
        self.__name = os.path.basename(repoPath)
        self.__repo = git.Repo(repoPath, odbt=git.GitCmdObjectDB)

        # Load the fixes from the JSON index file for this repo, if one exists
        if os.path.isfile(self.indexFileName()):
            print("Found fix database stored on disk")
            self.from_json()
        else:
            self.__fixes = None

    def fixes(self):
        return self.__fixes

    # Returns the name of the repository that this fix database is built from
    def repository(self):
        return self.__repo

    # Parses each of the fixes into a set of GumTree ASTs and differences
    def parse(self, threads=1):
        print("Parsing fixes...")
        for fix in self.fixes():
            fix.parse(self.directory())
        print("Parsed fixes")

    # Returns the name of the directory that this database belongs to
    def directory(self):
        return os.path.join(os.getcwd(), "database/%s" % self.__name)

    # Returns the name of the index file for this project
    def indexFileName(self):
        return "%s/database.json" % self.directory()

    # Builds the contents of this fix database from scratch and saves to disk.
    # Skips the process if a fix database already exists for this repository,
    # unless the force flag is provided and set to true.
    def collect(self, force=False):
        if (not self.__fixes is None) and (not force):
            print("Skipping collection of bug fixes - database already exists.")
            return
        print("Building fix database from scratch...")
        print("Extracting commits from repository...")
        commits = map(Fix, self.repository().iter_commits())
        print("Filtering fixes from list of commits...")
        self.__fixes = [c for c in commits if Fix.is_fix(c)]
        print("Finished filtering - found %d fixes" % len(self.__fixes))
        self.save()

    # Analyses each of the fixes within this database
    def analyse(self, force=False):
        print("Analysing fixes...")
        for fix in self.__fixes:
            analysis.analyse(fix)
        print("Analysed fixes")

    # Pre-processes each of the fixes within this database
    def preprocess(self, threads=1):
        print("Preprocessing fixes...")
        d = self.directory()
        for fix in self.__fixes:
            try:
                fix.preprocess(d, self.__repo, threads=threads)
            except (KeyboardInterrupt, SystemExit) as e:
                raise e
            except Exception as e:
                print("REASON: %s" % str(e))
                pass
        print("Finished pre-processing fixes")

    # Loads the contents of this fix database from its JSON index file
    def from_json(self):
        print("Loading fix database from index file...")
        with open(self.indexFileName(), 'r') as f:
            self.__fixes = [Fix.from_json(fx) for fx in json.load(f)]
        print("Loaded fix database from index file - contains %d fixes" % len(self.__fixes))

    # Saves the contents of this fix database to its JSON index file
    def save(self):
        indexFileName = self.indexFileName()
        indexFileDir = os.path.dirname(indexFileName)
        print("Saving fix database to index file: %s" % indexFileName)
        ensure_dir(indexFileDir)
        with open(self.indexFileName(), 'w') as f:
            json.dump([Fix.to_json(fx) for fx in self.__fixes], f, indent=2)
        print("Saved fix database to index file")

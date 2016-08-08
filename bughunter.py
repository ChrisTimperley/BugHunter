#!/usr/bin/python
import json
import sys
import git
import os
import os.path
import subprocess
import multiprocessing
import shutil

# Create null file handler for subprocess calls
FNULL = open(os.devnull, 'w')

# Any commit containing a bug marker will be treated as a bug fix, unless the
# commit also contains an anti-marker
BUG_MARKERS = ['fixed', 'bug']
BUG_ANTI_MARKERS = ['compile', 'compilation', 'debug', 'merge', 'revert']

def ensure_dir(d):
    os.path.exists(d) or os.makedirs(d)

def destroy_save_temps_artefacts(d):
    subprocess.Popen('find . -type f \( -name "*.i" -o -name "*.s" \) -delete',
        shell=True, cwd=d, stdout=FNULL, stderr=subprocess.STDOUT).wait()

def preprocess_files(files, src_dir, dest_dir):
    destroy_save_temps_artefacts(src_dir)
    try:
        assert subprocess.Popen('./buildconf',
                shell=True, stdout=FNULL, stderr=subprocess.STDOUT,
                cwd=src_dir).wait() == 0, "failed to buildconf"
        assert subprocess.Popen('./configure "CFLAGS=-save-temps"',
                shell=True, stdout=FNULL, stderr=subprocess.STDOUT,
                cwd=src_dir).wait() == 0, "failed to configure"
        assert subprocess.Popen('make clean && make',
                shell=True, stdout=FNULL, stderr=subprocess.STDOUT,
                cwd=src_dir).wait() == 0, "failed to make"
        for fn in files:
            base_fn = os.path.basename(fn)
            cp_from = os.path.join(src_dir, base_fn[:-2] + '.i')
            cp_to = os.path.join(dest_dir, fn)
            if os.path.exists(cp_from):
                ensure_dir(os.path.dirname(cp_to))
                shutil.copyfile(cp_from, cp_to)
    finally:
        destroy_save_temps_artefacts(src_dir)

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
            self.__email = jsn['committer']['email']
            self.__name = jsn['committer']['name']
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
    def source_files(self):
        return filter(lambda s: s.endswith('.c'),self.files())

    # Determines whether this object is indeed a fix
    def is_fix(self):
        msg = self.message().lower()
        return  any(s in msg for s in BUG_MARKERS) and \
                (not (any (s in msg for s in BUG_ANTI_MARKERS))) and \
                any(f.endswith('.c') for f in self.files())

    #
    def preprocess(self, db_dir, repo):
        # Check if this fix has already been pre-processed
        fix_file_dir = os.path.join(db_dir, self.identifier())
        if os.path.exists(fix_file_dir):
            print "skipping fix (%s) - already preprocessed" % self.identifier()
            return
        print "preprocessing fix: %s" % self.identifier()

        # revert the repository to this commit in a separate branch
        current_branch_name = repo.active_branch.name
        try:
            repo.git.reset('--hard')
            repo.git.checkout(self.__identifier, b='preprocessing')
            preprocess_files(self.source_files(), repo.working_dir,\
                    os.path.join(fix_file_dir, 'fixed'))

            repo.git.reset('--hard')
            repo.git.checkout("%s~1" % self.__identifier)
            preprocess_files(self.source_files(), repo.working_dir,\
                    os.path.join(fix_file_dir, 'faulty'))

        # destroy the fix files in the event of an error
        except Exception as e:
            print "failed to preprocess fix: %s" % self.identifier()
            shutil.rmtree(fix_file_dir)
            raise e

        # destroy the temporary branch and revert back to the previous one
        finally:
            #print "-- reverting to previous branch and destroying preprocessing branch"
            repo.git.reset('--hard')
            repo.git.checkout(current_branch_name)
            repo.git.branch('-D', 'preprocessing')
        print "finished preprocessing fix: %s" % self.identifier()

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

        # Ensure the files are pre-processed
        self.preprocess()

    def fixes(self):
        return self.__fixes

    def repository(self):
        return self.__repo

    # Returns the name of the directory that this database belongs to
    def directory(self):
        return os.path.join(os.getcwd(), "database/%s" % self.__name)

    # Returns the name of the index file for this project
    def indexFileName(self):
        return "%s/database.json" % self.directory()

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

    # Pre-processes each of the fixes within this database
    def preprocess(self):
        print "Preprocessing fixes..."
        d = self.directory()
        for fix in self.__fixes:
            try:
                fix.preprocess(d, self.__repo)
            except:
                pass
        print "Finished pre-processing fixes"

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

        ensure_dir(indexFileDir)
        with open(self.indexFileName(), 'w') as f:
            json.dump(map(Fix.to_json, self.__fixes), f, indent=2)
        print "Saved fix database to index file"

if __name__ == "__main__":
    if len(sys.argv) == 1:
        print "Usage: ./bughunter.py [repository]"
    elif len(sys.argv) == 2:
        db = FixDB(sys.argv[1].strip())
    else:
        print "Error: expected a single argument, specifying the path to the repository which should be inspected."

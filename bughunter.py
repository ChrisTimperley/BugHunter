#!/usr/bin/env python3
import parser as psr
import argparse
import json
import sys
import git
import os.path
import multiprocessing
import shutil
import analysis

from utility import *

DESCRIPTION = "BugHunter - a small, but mighty bug mining tool for extracting" + \
    " and analysing bugs from offline Git repositories for projects using C;" + \
    " source code available at [http://github.com/ChrisTimperley/BugHunter]."

# Any commit containing a bug marker will be treated as a bug fix, unless the
# commit also contains an anti-marker
BUG_MARKERS = ['fixed', 'bug']
BUG_ANTI_MARKERS = ['compile', 'compilation', 'debug', 'merge', 'revert']

def compile_source(src_dir, threads=1):
    # attempt to configure
    has_file = lambda f: os.path.exists(os.path.join(src_dir, f))
    configured = False

    # Build ./configure if appropriate
    if has_file('autogen.sh'):
        assert exec_from_dir('./autogen.sh', src_dir), "failed autogen"
    if has_file('buildconf.sh'):
        assert exec_from_dir('./buildconf.sh', src_dir), "failed buildconf"
    if (not has_file('./configure')) and has_file('Makefile.am'):
        assert exec_from_dir('autoreconf -i', src_dir), "failed autoreconf"

    if has_file('Makefile'): # avoids Redis bugs
        exec_from_dir('make distclean', src_dir)

    # Configure
    if has_file('configure'):
        configured = True
        assert exec_from_dir('./configure "CFLAGS=-save-temps"', src_dir), "failed configure"
   
    # attempt to make; ensure Makefile exists
    if not has_file('Makefile'):
        raise Exception('No Makefile found within source directory')
    make_cmd = "make" if configured else "make 'CFLAGS=-save-temps' -j%d" % threads
    assert exec_from_dir('make clean && %s' % make_cmd, src_dir), "failed to make"

# Preprocesses a given set of files belonging to a given source code directory
# and writes the result to a specified directory
def preprocess_files(files, src_dir, dest_dir, threads=1):
    compile_source(src_dir, threads=threads)
    for fn in files:
        pp_fn = fn[:-2] + '.i'
        cp_to = os.path.join(dest_dir, fn)

        # Find the pre-processed file, if there is one, and copy it into
        # the database
        if os.path.exists(os.path.join(src_dir, pp_fn)):
            cp_from = os.path.join(src_dir, pp_fn)
        elif os.path.exists(os.path.join(src_dir, os.path.basename(pp_fn))):
            cp_from = os.path.basename(pp_fn)
        else:
            cp_from = None

        if cp_from:
            print("Ensuring directory exists: %s" % os.path.dirname(cp_to)) 
            ensure_dir(os.path.dirname(cp_to))
            shutil.copyfile(cp_from, cp_to)

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
            self.__files = list(self.__commit.stats.files.keys())
        return self.__files
    def source_files(self):
        return filter(lambda s: s.endswith('.c'), self.files())
    
    # Returns the directory where the files related to this fix reside
    def fix_dir(self, db_dir):
        return os.path.join(db_dir, self.identifier())

    # Determines whether this object is indeed a fix
    def is_fix(self):
        msg = self.message().lower()
        return  any(s in msg for s in BUG_MARKERS) and \
                (not (any (s in msg for s in BUG_ANTI_MARKERS))) and \
                any(f.endswith('.c') for f in self.files())

    # Parses the source code for this fix into a set of GumTree AST files and
    # differences
    def parse(self, db_dir):
        fix_dir = self.fix_dir(db_dir)
        ast_dir = os.path.join(fix_dir, 'ast')
        diff_dir = os.path.join(fix_dir, 'diff')
        if not os.path.isdir(fix_dir):
            print("Skipping fix: %s (no preprocessed files)" % self.identifier())
        elif os.path.isdir(os.path.join(fix_dir, 'ast')):
            print("Skipping fix: %s (already preprocessed)" % self.identifier())
        else:
            try:
                print("Parsing fix: %s" % self.identifier()) 

                # Generate ASTs
                psr.parse_files(self.source_files(), \
                                   os.path.join(fix_dir, 'fixed'), \
                                   os.path.join(ast_dir, 'fixed'))
                psr.parse_files(self.source_files(), \
                                   os.path.join(fix_dir, 'faulty'), \
                                   os.path.join(ast_dir, 'faulty'))

                # Generate AST diffs
                psr.generate_diffs(self.source_files(), \
                                      os.path.join(fix_dir, 'fixed'), \
                                      os.path.join(fix_dir, 'faulty'), \
                                      diff_dir)

                print("Parsed fix: %s" % self.identifier())
            except Exception as e:
                print("Failed to parse fix: %s" % self.identifier())
                print("- Reason: %s" % str(e))
                os.path.isdir(ast_dir) and shutil.rmtree(ast_dir)
                os.path.isdir(diff_dir) and shutil.rmtree(diff_dir)

    def preprocess(self, db_dir, repo, threads=1):
        # Check if this fix has already been pre-processed
        fix_file_dir = os.path.join(db_dir, self.identifier())
        if os.path.exists(fix_file_dir):
            print("skipping fix: %s (cached)" % self.identifier())
            return
        print("preprocessing fix: %s" % self.identifier())

        # revert the repository to this commit in a separate branch
        current_branch_name = repo.active_branch.name
        try:
            repo.git.reset('--hard')
            repo.git.checkout(self.__identifier, b='preprocessing')
            preprocess_files(self.source_files(), repo.working_dir,\
                    os.path.join(fix_file_dir, 'fixed'))
            repo.git.clean('-f', '-x')

            repo.git.reset('--hard')
            repo.git.checkout("%s~1" % self.__identifier)
            preprocess_files(self.source_files(), repo.working_dir,\
                    os.path.join(fix_file_dir, 'faulty'), threads=threads)

            print("finished preprocessing fix: %s" % self.identifier())

        # destroy the fix files in the event of an error
        except Exception as e:
            print("failed preprocessing fix: %s" % self.identifier())
            print("reason: %r" % e)
            shutil.rmtree(fix_file_dir)

        # destroy the temporary branch and revert back to the previous one
        finally:
            repo.git.clean('-f', '-x')
            repo.git.reset('--hard')
            repo.git.checkout(current_branch_name)
            repo.git.branch('-D', 'preprocessing')

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

if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='bughunter', description=DESCRIPTION)
    parser.add_argument('mode', type=str, action='store',\
                        choices=['collect', 'preprocess', 'parse'])
    parser.add_argument('repository', type=str,
            help='path to the repository under investigation')
    parser.add_argument('--threads', action='store', dest='threads', type=int, default=1,
            help='number of threads to utilise during pre-processing')
    parser.add_argument('--force', action='store', dest='force', type=bool, default=False)
    args = parser.parse_args()

    if args.threads <= 0:
        raise "Illegal number of threads specified (should be >= 1)"
    try:
        db = FixDB(args.repository.strip(), threads=args.threads)
        ({
            'collect': (lambda: db.collect(force=args.force)),
            'preprocess': (lambda: db.preprocess(threads=args.threads)),
            'parse': (lambda: db.parse(threads=args.threads)),
            'analyse': (lambda: db.analyse(force=args.force))
        })[args.mode]()
    except (KeyboardInterrupt, SystemExit):
        pass

import shutil
import git
import json
import os.path
import cgum.program
import cgum.diff

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

    # Determines whether this fix has been pre-processed
    def is_preprocessed(self, db_dir):
        return os.path.isdir(self.fix_dir(db_dir))

    # Determines whether this object is indeed a fix
    def is_fix(self):
        msg = self.message().lower()
        return  any(s in msg for s in BUG_MARKERS) and \
                (not (any (s in msg for s in BUG_ANTI_MARKERS))) and \
                any(f.endswith('.c') for f in self.files())

    # Determines whether this fix modifies a header file
    def modifies_header_file(self):
        return any(f.endswith('.h') for f in self.files())

    # Determines whether this fix modifies multiple C source code files
    def modifies_multiple_source_files(self):
        return len(list(self.source_files())) > 1

    # Returns the AST for the faulty version of a given file for this fix
    def ast_faulty(self, fn, db_dir):
        fn = os.path.join(os.path.join(self.fix_dir(db_dir), 'ast/faulty'),\
                          ("%s.ast.json" % fn))
        if os.path.isfile(fn):
            return cgum.program.Program.from_file(fn)
        else:
            return None

    # Returns the AST for the fixed version of a given file for this fix
    def ast_fixed(self, fn, db_dir):
        fn = os.path.join(os.path.join(self.fix_dir(db_dir), 'ast/fixed'),\
                          ("%s.ast.json" % fn))
        if os.path.isfile(fn):
            return cgum.program.Program.from_file(fn)
        else:
            return None

    # Returns the diff for a given file from this fix
    def diff(self, fn, db_dir):
        fn = os.path.join(os.path.join(self.fix_dir(db_dir), 'diff'),\
                          ("%s.diff.json" % fn))
        if os.path.isfile(fn):
            return cgum.diff.Diff.from_file(fn)
        else:
            return None

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
        elif self.modifies_header_file():
            print("Skipping fix: %s (modifies header file)" % self.identifier())
        elif self.modifiers_multiple_source_files():
            print("Skipping fix: %s (modifiers multiple source files)" % self.identifier())
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
        if self.modifies_header_file():
            print("Skipping fix: %s (modifies header file)" % self.identifier())
            return
        if self.modifiers_multiple_source_files():
            print("Skipping fix: %s (modifiers multiple source files)" % self.identifier())
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

# This module is responsible for producing the pre-processed form of each file
# modified by a given edit.
#
# - write pre-processed files to storage destination
#

# The Compiler class is responsible for


# - add zipped storage?
# - 
class Storage(object):

    def __init__(self, location):
        pass

    # copy?

    # Returns the absolute path of a particular file within this file, given
    # details of the fix it belongs to.
    def file_path(self, repo, fix, version, fn):
        pass

    # Adds a source code file for a particular fix version into storage.
    # Copies the file from the provided source into this storage.
    def add_source_file_from(self, repo, fix, version, fn, src_fn):
        pass

# - compile via docker
def preprocess(repo, fix, version):
    self.compile(repo, fix, version)
    for fn in fix.modified_source_files():
        repo_fn = copy_source_file_to(repo.file_path(fn))
        storage.add_source_file_from(repo, fix, version, fn, repo_fn)

# Compiles the source code for a project, together with its pre-processed
# files.
#
# We need to run a whole bunch of things on our Docker instance, then save
# it using the Storage handler.
class Compiler(object):
    def __init__(self, threads):
        self.threads = threads

    def compile(directory):
        # attempt to configure
        has_file = lambda f: os.path.exists(os.path.join(directory, f))
        configured = False

        # Build ./configure if appropriate
        if has_file('autogen.sh'):
            assert exec_from_dir('./autogen.sh', directory), "failed autogen"
        if has_file('buildconf.sh'):
            assert exec_from_dir('./buildconf.sh', directory), "failed buildconf"
        if (not has_file('./configure')) and has_file('Makefile.am'):
            assert exec_from_dir('autoreconf -i', directory), "failed autoreconf"

        if has_file('Makefile'): # avoids Redis bugs
            exec_from_dir('make distclean', directory)

        # Configure
        if has_file('configure'):
            configured = True
            assert exec_from_dir('./configure "CFLAGS=-save-temps"', directory),\
                "failed configure"
       
        # attempt to make; ensure Makefile exists
        if not has_file('Makefile'):
            raise Exception('No Makefile found within source directory')
        if configured:
            make_cmd = "make"
        else:
            make_cmd = "make 'CFLAGS=-save-temps' -j%d" % self.threads
        assert exec_from_dir('make clean && %s' % make_cmd, src_dir), "failed to make"

# Preprocesses a given source file belonging to a given source code directory
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
class Preprocessor(object):

    def preprocess(self):
        pass

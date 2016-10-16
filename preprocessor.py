# This module is responsible for producing the pre-processed form of each file
# modified by a given edit.
#
# - write pre-processed files to storage destination
#

# The Compiler class is responsible for



class Storage(object):

    def __init__(self, location):
        pass

    # Returns the absolute path of a particular file within this file, given
    # details of the fix it belongs to.
    def file_path(self, repo, fix, fn, version):
        pass

# Compiles the source code for a project, together with its pre-processed
# files.
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

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

# Compiles the source code for a project, together with its pre-processed
# files.
#
# We need to run a whole bunch of things on our Docker instance, then save
# it using the Storage handler.
class Preprocessor(object):
    def __init__(self, threads = 8):
        self.__threads = threads

    def compile(self, repo, fix, version):
        pass

    def preprocess(self, repo, fix):
        self.compile(repo, fix, version)
        for fn in fix.modified_source_files():
            # shutil.copyfile(cp_from, cp_to)
            storage.add_source_file_from(repo, fix, version, fn, repo.file_path(fn))

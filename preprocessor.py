# This module is responsible for producing the pre-processed form of each file
# modified by a given edit.
import os

# Compiles the source code for a project, together with its pre-processed
# files.
#
# We need to run a whole bunch of things on our Docker instance, then save
# it using the Storage handler.
class Preprocessor(object):
    def __init__(self, threads = 8):
        self.__threads = threads
        self.__script = os.path.dirname(os.path.realpath(__file__))

    def compile(self, repo, fix, version):
        cmd = "bash '%s'"

    def preprocess(self, repo, fix):
        self.compile(repo, fix, version)
        for fn in fix.modified_source_files():
            # shutil.copyfile(cp_from, cp_to)
            storage.add_source_file_from(repo, fix, version, fn, repo.file_path(fn))

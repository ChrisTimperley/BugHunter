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

    def preprocess(self, version):
        repo = version.repository().repository()

        # Find the commit ID for this program version
        fix = version.fix()
        commit = version.identifier()
        if version.is_faulty():
            commit = "%s~1" % commit

        # Switch the repository's preprocessing branch to point at the
        # correct commit for this program version
        current_branch_name = repo.active_branch_name
        try:         
            repo.git.reset('--hard')
            repo.git.checkout(commit, b='preprocessing')

        finally:
            repo.git.clean('-f', '-x')
            repo.git.reset('--hard')
            repo.git.checkout(current_branch_name)
            repo.git.branch('-D', 'preprocessing')


        for fn in fix.modified_source_files():
            # shutil.copyfile(cp_from, cp_to)
            storage.add_source_file_from(repo, fix, version, fn, repo.file_path(fn))

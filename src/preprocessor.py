# This module is responsible for producing the pre-processed form of each file
# modified by a given edit.
import os
import subprocess
import utility as util

# Compiles the source code for a project, together with its pre-processed
# files.
#
# We need to run a whole bunch of things on our Docker instance, then save
# it using the Storage handler.
class Preprocessor(object):
    def __init__(self, threads = 8):
        self.__threads = threads
        self.__script = os.path.dirname(os.path.realpath(__file__))

    def preprocess(self, version):
        repo = version.repository().repository()

        # Find the commit ID for this program version
        fix = version.fix()
        commit = version.identifier()
        if version.is_faulty():
            commit = "%s~1" % commit

        # Switch the repository's preprocessing branch to point at the
        # correct commit for this program version.
        current_branch_name = repo.active_branch_name
        try:         
            repo.git.reset('--hard')
            repo.git.checkout(commit, b='preprocessing')

            # Compute and execute the pre-process command
            cmd = os.path.join(os.path.dirname(os.path.realpath(__file__)),\
                               "../lib/preprocess")
            cmd  = "%s '%s'" % repo.working_dir
            with open(os.devnull, "w") as f:
                subprocess.call(cmd, stdout=f)

        # Ensure the repository is returned to its original state, prior to
        # pre-processing
        finally:
            repo.git.clean('-f', '-x')
            repo.git.reset('--hard')
            repo.git.checkout(current_branch_name)
            repo.git.branch('-D', 'preprocessing')

        # Save each of the modified source files to storage
        for fn in fix.modified_source_files():
            pass
            # shutil.copyfile(cp_from, cp_to)

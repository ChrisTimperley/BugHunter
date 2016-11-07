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
    def __init__(self, master, threads = 8):
        self.__master = master
        self.__threads = threads

    def preprocess(self, version):
        repo = version.fix().repository().repository()

        # Find the commit ID for this program version
        fix = version.fix()
        commit = version.identifier()

        # Switch the repository's preprocessing branch to point at the
        # correct commit for this program version.
        current_branch_name = repo.active_branch.name
        try:         
            repo.git.reset('--hard')
            repo.git.checkout(commit, b='preprocessing')

            # TODO: For now, use the "bh" docker image
            DOCKER_IMAGE = "bh"

            # Compute and execute the pre-process command
            cmd = os.path.join(os.path.dirname(os.path.realpath(__file__)),\
                               "../lib/preprocess")
            cmd  = "%s '%s' '%s'" % (cmd, repo.working_dir, DOCKER_IMAGE)

            # TODO: docker is failing, shouldn't be hard to fix
            with open(os.devnull, "w") as f:
                subprocess.call(cmd, stdout=f, stderr=f, shell=True)

            # Save each of the modified source files to storage
            for fn in fix.modified_source_files():

                # Find where the file resides. For some projects, it will be in the
                # same directory as the original source code file; for others, it
                # may reside at the root of the repository.
                pp_fn = '%s.i' % fn[:-2]
                if os.path.isfile(os.path.join(repo.working_dir,\
                                               os.path.basename(pp_fn))):
                    cp_from = os.path.join(repo.working_dir, os.path.basename(pp_fn)) 
                elif os.path.isfile(os.path.join(repo.working_dir, pp_fn)):
                    cp_from = os.path.join(repo.working_dir, pp_fn)
                else:
                    cp_from = None

                # If the file can be found, save it to storage
                print("SAVE TO STORAGE")
            

        # Ensure the repository is returned to its original state, prior to
        # pre-processing
        finally:
            repo.git.clean('-f', '-x')
            repo.git.reset('--hard')
            repo.git.checkout(current_branch_name)
            repo.git.branch('-D', 'preprocessing')

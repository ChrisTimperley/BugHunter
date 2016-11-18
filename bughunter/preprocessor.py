# This module is responsible for producing the pre-processed form of each file
# modified by a given edit.
import os
import subprocess
import bughunter.utility as util

# Calculate the path to the preprocess executable
EXE_PREPROCESS = os.path.join(os.path.dirname(os.path.realpath(__file__)),\
                              "auxillary/preprocess")

# Compiles the source code for a project, together with its pre-processed
# files.
#
# We need to run a whole bunch of things on our Docker instance, then save
# it using the Storage handler.
class Preprocessor(object):
    def __init__(self, master, docker_image, threads = 8):
        self.__master = master
        self.__docker_image = docker_image
        self.__threads = threads

    def preprocess(self, version):
        repo = version.fix().repository().repository()
        storage = self.__master.storage()

        # Find the commit ID for this program version
        fix = version.fix()
        commit = version.identifier()

        # Switch the repository's preprocessing branch to point at the
        # correct commit for this program version.
        current_branch_name = repo.active_branch.name
        try:         
            repo.git.reset('--hard')
            repo.git.checkout(commit, b='preprocessing')

            # Compute and execute the pre-process command
            cmd  = "%s '%s' '%s'" % (EXE_PREPROCESS, repo.working_dir, self.__docker_image)

            # TODO: log std. err and std. out to a temporary file to improve
            # debugging
            with open(os.devnull, "w") as f:
                print(cmd)
                rc = subprocess.call(cmd, stdout=f, stderr=f, shell=True)
                assert rc == 0, ("preprocessor failure: %s" % cmd)

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
                f = storage.preprocessed(version, fn)
                f.write_from(cp_from)

        # Ensure the repository is returned to its original state, prior to
        # pre-processing
        finally:
            repo.git.clean('-f', '-x')
            repo.git.reset('--hard')
            repo.git.checkout(current_branch_name)
            repo.git.branch('-D', 'preprocessing')

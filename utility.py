import os
import os.path
import subprocess

FNULL = open(os.devnull, 'w')

# Ensures that a given directory exists
def ensure_dir(d):
    os.path.exists(d) or os.makedirs(d)

# Executes a given command on the terminal, blocking until completion.
# Returns True if an exit status of zero was returned, otherwise False
# is returned.
def execute(cmd):
     return subprocess.Popen(cmd, shell=True, stdout=FNULL, \
                             stderr=subprocess.STDOUT).wait() == 0

# Executes a given command on the terminal, using a specified working
# directory. Blocks until completion.
# Returns True if an exit status of zero was returned, otherwise False
# is returned.
def exec_from_dir(cmd, cmd_dir):
     return subprocess.Popen(cmd, shell=True, stdout=FNULL,
                stderr=subprocess.STDOUT, cwd=cmd_dir).wait() == 0

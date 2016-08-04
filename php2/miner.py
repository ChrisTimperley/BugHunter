#!/usr/bin/python
import sys
import git
import json

# Any commit containing a bug marker will be treated as a bug fix, unless the
# commit also contains an anti-marker
BUG_MARKERS = ['fixed', 'bug']
BUG_ANTI_MARKERS = ['compile', 'compilation', 'debug', 'merge', 'revert']

# Determines whether a given commit contains the fix to a bug
def commit_contains_fix(commit):
    msg = commit.message.lower()
    return  any(s in msg for s in BUG_MARKERS) and \
                not (any (s in msg for s in BUG_ANTI_MARKERS))

def commit_to_json(commit):
    return {
        'id': str(commit),
        'message': commit.message.strip(),
        'committer': {
            'email': commit.committer.email,
            'name': commit.committer.name
        },
        'date': commit.committed_date,
        'files': [commit.stats.files.keys()]
    }

def fixes_to_json_file(fixes, fn):
    with open(fn, 'w') as f:
        json.dump(map(commit_to_json, fixes), f, indent=2)

# Supply the path to the repository via the command line
repoPath = sys.argv[1]

# Model the repository using GitCmdObjectDB as it gives better performance
# than GitDB when dealing with large quantities of smaller files.
repo = git.Repo(repoPath, odbt=git.GitCmdObjectDB)

# Find the list of all suitable commits
commits = filter(commit_contains_fix, repo.iter_commits())
fixes_to_json_file(commits, "fixes.json")

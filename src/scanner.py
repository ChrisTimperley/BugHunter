import fix

# Responsible for traversing through a Git repository and finding all bug
# fixes.
#
# Any commit containing a bug marker will be treated as a bug fix, unless the
# commit also contains an anti-marker
class Scanner(object):
    BUG_MARKERS = ['fixed', 'bug']
    BUG_ANTI_MARKERS = ['compile', 'compilation', 'debug', 'merge', 'revert']

    def __init__(self, master):
        self.__master = master

    # Determines whether a given commit is a fix
    def is_fix(self, commit):
        msg = commit.message.strip().lower()
        files = list(commit.stats.files.keys())
        return  any(s in msg for s in Scanner.BUG_MARKERS) and \
                (not (any (s in msg for s in Scanner.BUG_ANTI_MARKERS))) and \
                any(f.endswith('.c') for f in files)

    # Finds all bug fixes within a given repository
    def scan(self, repo):
        print("scanning for fixes: %s" % repo.address())
        commits = repo.repository().iter_commits()
        return [fix.Fix(repo, c) for c in commits if self.is_fix(c)]

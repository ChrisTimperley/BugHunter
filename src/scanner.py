# Responsible for traversing through a Git repository and finding all bug
# fixes.
class Scanner(object):
    def scan(self, repo):
        commits = repo.repository().iter_commits()
        commits = map(Fix, repo.repository().iter_commits())
        fixes = [c for c in commits if Fix.is_fix(c)] # don't like this
        return fixes

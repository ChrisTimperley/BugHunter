import hashlib as hsh

# Used to provide access to a Git repository and its mined edits
class Repository(object):

    def __init__(self, storage, url):
        self.__storage = storage
        self.__url = url
        
        # Storage handler is reponsible for retrieving and storing repos
        #self.__repo = git.Repo(repoPath, odbt=git.GitCmdObjectDB)

    # Returns a short, file-name friendly identifier for this repository.
    def id(self):
        return hsh.sha1(self.__url)

    # Returns a list of all bug fixes for this repository, using a provided
    # scanner to generate them (if they aren't already saved to disk).
    def fixes(self, scanner):
        return self.__storage.databaseFile(self).read(scanner)

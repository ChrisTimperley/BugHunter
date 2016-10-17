import hashlib as hsh

# Used to provide access to a Git repository and its mined edits
class Repository(object):
    def __init__(self, storage, address):
        self.__storage = storage
        self.__address = address

    # Returns a short, file-name friendly identifier for this repository.
    def id(self):
        return hsh.sha1(self.__address.encode('utf-8')).hexdigest()

    # Returns the remote address of this repository
    def address(self):
        return self.__address

    # Returns a GitPython object for this Git repository
    def repository(self):
        return self.__storage.git(self)

    # Returns a list of all bug fixes for this repository, using a provided
    # scanner to generate them (if they aren't already saved to disk).
    def fixes(self, scanner):
        return self.__storage.databaseFile(self).read(scanner)

import hashlib as hsh
import bughunter.preprocessor as preprocessor

# Used to provide access to a Git repository and its mined edits
class Repository(object):
    def __init__(self, master, address, docker_image):
        self.__master = master
        self.__address = address
        self.__preprocessor = preprocessor.Preprocessor(master, docker_image)

    # Returns a short, file-name friendly identifier for this repository.
    def id(self):
        return hsh.sha1(self.__address.encode('utf-8')).hexdigest()

    def master(self):
        return self.__master

    # Returns the remote address of this repository
    def address(self):
        return self.__address

    def preprocessor(self):
        return self.__preprocessor

    # Returns a GitPython object for this Git repository
    def repository(self):
        return self.__master.storage().git(self)

    # Returns a list of all bug fixes for this repository, using the scanner
    # provided to this repository to generate them (if they aren't already
    # saved to disk).
    def fixes(self):
        return self.__master.storage().database(self).read(self.__master.scanner())

# The Storage class is responsible for abstracting away the details of how and
# where BugHunter's artefacts are stored, including pre-processed, parsed, and
# differenced files.
class Storage(object):

    # Returns a handler for a given (pre-processed) source code file
    def source(self, repo, fix, ver, fn):
        raise NotImplementedError("No 'source' implemented by this Storage class")

    # Returns a handler for a given diff
    def diff(self, repo, fix, fn):
        raise NotImplementedError("No 'diff' implemented by this Storage class")

    # Returns a handler for the AST of a given (pre-processed) file
    def ast(self, repo, fix, ver, fn):
        raise NotImplementedError("No 'ast' implemented by this Storage class")

class FlatStorage(object):
    pass

class ZippedStorage(object):
    pass

class DiffFile(object):
    def __init__(self, repo, fix, fn):
        self.__repo = repo
        self.__fix = fix
        self.__fn = fn

    # Reads the contents of this difference file to a string and returns it
    def read(self):
        raise NotImplementedError("No 'read' implemented by this DiffFile handler")

    # Writes to this difference file using the contents of a provided file
    def write_from(self, source_fn):
        raise NotImplementedError("No 'write_from' implemented by this DiffFile handler")

    # Returns the difference encoded by this file
    def diff(self):
        raise NotImplementedError("No 'diff' implemented by this DiffFile handler")

class ZippedDiffFile(object):
    pass

class SourceFile(object):
    def __init__(self, repo, fix, version, fn):
        self.__repo = repo
        self.__fix = fix
        self.__version = version
        self.__fn = fn

    # Reads the contents of this source file to a string and returns it
    def read(self):
        raise NotImplementedError("No 'read' implemented by this SourceFile handler")

    # Writes to this source file using the contents of a given file
    def write_from(self, source_fn):
        raise NotImplementedError("No 'write_from' implemented by this SourceFile handler")

# The Storage class is responsible for abstracting away the details of how and
# where BugHunter's artefacts are stored, including pre-processed, parsed, and
# differenced files.

# - add zipped storage?
class Storage(object):

    def __init__(self, location):
        pass

    # copy?

    # Returns the absolute path of a particular file within this file, given
    # details of the fix it belongs to.
    def file_path(self, repo, fix, version, fn):
        pass

    # Adds a source code file for a particular fix version into storage.
    # Copies the file from the provided source into this storage.
    def add_source_file_from(self, repo, fix, version, fn, src_fn):
        pass

    def diff(self, repo, fix, fn):
        # Do we have the 
        return ZippedDiffFile(repo, fix, fn)

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

import cgum
import hashlib
import os

# The Storage class is responsible for abstracting away the details of how and
# where BugHunter's artefacts are stored, including pre-processed, parsed, and
# differenced files.
#
# TODO: Add zipped storage
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
    
    def source(self, repo, fix, ver, fn):
        return SourceFile(repo, fix, ver, fn)

    # Reads a file at a given location within this storage to a string
    def read_at(self, loc):
        s
        pass

class DiffFile(object):
    def __init__(self, repo, fix, fn):
        self.__repo = repo
        self.__fix = fix
        self.__fn = fn

    def identifier(self):

    # Reads the contents of this difference file to a string and returns it
    def read(self):
        raise NotImplementedError("No 'read' implemented by this DiffFile handler")

    # Writes to this difference file using the contents of a provided file
    def write_from(self, source_fn):
        raise NotImplementedError("No 'write_from' implemented by this DiffFile handler")

    # Returns the difference encoded by this file
    def diff(self):
        raise NotImplementedError("No 'diff' implemented by this DiffFile handler")

class SimpleDiffFile(object):

    def read(self):
        return storage.read_at(self.location())

    def writable_file(self, artefact):
        loc = os.path.join(f.repo.identifier(),\
                           f.fix.identifier(),\
                           f.version.identifier(),\
                           hashlib.sha1(artefact.file_name).hexdigest())

        locator = ({
            SourceFile: lambda f: [f.repo, f.fix, f.version, ]
        }[type(artefact)])(artefact)


class SourceFile(object):
    def __init__(self, repo, fix, version, fn):
        self.__repo = repo
        self.__fix = fix
        self.__version = version
        self.__fn = fn

    # Checks whether this source file already exists within storage
    def exists(self):
        pass

    # Reads the contents of this source file to a string and returns it
    def read(self):
        raise NotImplementedError("No 'read' implemented by this SourceFile handler")

    # Writes to this source file using the contents of a given file
    def write_from(self, source_fn):
        raise NotImplementedError("No 'write_from' implemented by this SourceFile handler")

class AstFile(object):
    def __init__(self, storage, repo, fix, version, fn):
        self.__storage = storage
        self.__repo = repo
        self.__fix = fix
        self.__version = version
        self.__fn = fn


    # we could pass an actual file for flattened storage classes?

    def exists(self):

    def ast(self):
        if not self.exists():
            f = storage.as_writable_file(self)
            src = storage.source(self.repo, self.fix, self.version, self.fn)
            cgum.link.parse_to_file(src, f)
            f.close()
        return cgum.Program.from_json_file(storage.read_as_file(self))

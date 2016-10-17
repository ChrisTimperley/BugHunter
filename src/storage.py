import utility
import cgum
import git
import hashlib
import os
import json
import fix

# The Storage class is responsible for abstracting away the details of how and
# where BugHunter's artefacts are stored, including pre-processed, parsed, and
# differenced files.
#
# TODO: Add zipped storage
class Storage(object):
    def __init__(self, root=None):
        self.__root = os.path.join(os.path.expanduser('~'), 'bughunter')
        utility.ensure_dir(self.__root)

    # Returns a handler for a given diff
    def diff(self, repo, fix, fn):
        return DiffFile(self, repo, fix, fn)

    # Returns a handler for the AST of a given (pre-processed) file
    def ast(self, repo, fix, ver, fn):
        return AstFile(self, repo, fix, ver, fn)

    # Returns a handler for a given (pre-processed) source code file
    def preprocessed(self, ver, fn):
        return SourceFile(self, ver, fn)

    # Returns a handler for a given database file.
    def database(self, repo):
        return DatabaseFile(self, repo)

    # Returns a GitPython repository object for a given repository. Clones the
    # repository to disk, if necessary.
    def git(self, repo):
        loc = os.path.join(self.root(), "repositories", repo.id())
        if not os.path.exists(loc):
            print("cloning remote repository: %s" % repo.address())
            return git.Repo.clone_from(repo.address(),\
                                       loc,\
                                       odbt=git.GitCmdObjectDB)
        return git.Repo(loc, odbt=git.GitCmdObjectDB)

    # Returns the absolute path to the root of this storage on disk
    def root(self):
        return self.__root

    # Returns the absolute path to an artefact
    def locator(self, artefact):
        if isinstance(artefact, DatabaseFile):
            rel = os.path.join(artefact.repository().id(), "fixes.json")
        return os.path.join(self.root(), "artefacts", rel)

    # Determines whether a given artefact exists on disk.
    def exists(self, artefact):
        return os.path.isfile(self.locator(artefact))

    # Returns a writable file for a given artefact. Any writes to this file
    # will be reflected in the actual storage after the file has been
    # closed.
    def writer(self, artefact):
        loc = self.locator(artefact)
        utility.ensure_dir(os.path.dirname(loc))
        return open(loc, 'w')

    # Returns a readable file for a given artefact.
    def reader(self, artefact):
        loc = self.locator(artefact)
        if not self.exists(artefact):
            raise Error("No physical file found on disk for artefact at location: %s" % loc)
        return open(loc, 'r')
        
# Provides access to the database of mined bug fixes for a particular repo
class DatabaseFile(object):

    # Constructs a new database file for a given Git repository.
    def __init__(self, storage, repository):
        self.__storage = storage
        self.__repository = repository

    # Returns the repository that this file belongs to
    def repository(self):
        return self.__repository

    # Determines whether this file exists on disk.
    def exists(self):
        return self.__storage.exists(self)

    # Returns a list of the bug fixes contained within this database file.
    # If the file doesn't exist, then the provided Scanner is used to generate
    # it.
    def read(self, scanner):
        if not self.exists():
            fixes = scanner.scan(self.repository())
            self.write(fixes)
        else:
            f = self.__storage.reader(self)
            fixes = json.load(f)
            fixes = [fix.Fix.from_json(fx) for fx in fixes]
            f.close()
        return fixes

    # Writes a list of bug fixes to this database file
    def write(self, fixes):
        f = self.__storage.writer(self)
        try:
            json.dump([fix.Fix.to_json(fx) for fx in fixes], f, indent=2)
            f.close()
        # destroy any partially written files
        except:
            f.close()
            os.isfile(f.name) and os.remove(f.name)
            raise

class PreprocessedFile(object):
    def __init__(self, version, name):
        self.__version = version
        self.__name = name

    # Determines whether this file exists on disk
    def exists(self):
        return self.__storage.exists(self)

    # Returns the program version that this preprocessed file belongs to
    def version(self):
        return self.__version

    # Returns the name of the original source file, relative to its
    # repository
    def name(self):
        return self.__name

    def readable(self):
        if not self.exists():
            self.__storage.preprocessor().preprocess(self.version())
        return self.__storage.reader(self)

class SimpleDiffFile(object):

    def read(self):
        return storage.read_at(self.location())

    def writable_file(self, artefact):
        src_fn = hashlib.sha1(artefact.file_name).hexdigest()
        src_fn = "%s.%s.c" % (src_fn, version.id())
        loc = os.path.join(f.repo.id(), f.fix.id(), src_fn)

        # ensure the path exists
        return open(loc, 'w')

class AstFile(object):
    def __init__(self, storage, repo, fix, version, fn):
        self.__storage = storage
        self.__repo = repo
        self.__fix = fix
        self.__version = version
        self.__fn = fn

    def ast(self):
        if not self.exists():
            f = storage.as_writable_file(self)
            src = storage.source(self.repo, self.fix, self.version, self.fn)
            cgum.link.parse_to_file(src, f)
            f.close()
        return cgum.Program.from_json_file(storage.read_as_file(self))

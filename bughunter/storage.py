import bughunter.utility as utility
import bughunter.fix as fix
import cgum
import cgum.program
import tempfile
import git
import hashlib
import os
import json

# The Storage class is responsible for abstracting away the details of how and
# where BugHunter's artefacts are stored, including pre-processed, parsed, and
# differenced files.
class Storage(object):
    def __init__(self, master, root=None):
        self.__master = master
        if 'BUGHUNTER' in os.environ:
            self.__root = os.environ['BUGHUNTER']
        else:
            self.__root = os.path.join(os.path.expanduser('~'), 'bughunter')
        utility.ensure_dir(self.__root)

    # Returns a handler for a given diff
    #def diff(self, repo, fix, fn):
    #    return DiffFile(self, repo, fix, fn)

    # Returns the CGum AST of a given file
    def ast(self, ver, fn):
        path = os.path.join(ver.fix().repository().id(),\
                            ver.fix().identifier(),\
                            fn,\
                            ("after" if ver.is_fixed() else "before"),\
                            ".ast.json")
        path = os.path.join(self.root(), "artefacts", path)

        if not os.path.isfile(path):
            f = ver.file(fn)
            try:
                cgum.program.Program.from_source_file(f.name)
            finally:
                f.close()

    # Returns the CGum annotated diff for a BugHunter diff
    def diff(self, df):
        # get the before and after ASTs for this file
        before = XASTASGAS

        # compute the path to the cached JSON diff file
        path = os.path.join(df.fix().repository().id(),\
                            df.fix().identifier(),\
                            df.name(),\
                            ".diff.json")
        path = os.path.join(self.root(), "artefacts", path)
        # 

    # Returns a handler for a given source code file
    # TODO: simplify; this is overly complicated
    def source(self, ver, fn):
        return SourceFile(self.__master, ver, fn)

    # Returns a handler for a given database file.
    def database(self, repo):
        return DatabaseFile(self.__master, repo)

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
            raise Exception("No physical file found on disk for artefact at location: %s" % loc)
        return open(loc, 'r')
        
# Provides access to the database of mined bug fixes for a particular repo
class DatabaseFile(object):

    # Constructs a new database file for a given Git repository.
    def __init__(self, master, repository):
        self.__master = master
        self.__repository = repository

    # Returns the repository that this file belongs to
    def repository(self):
        return self.__repository

    # Determines whether this file exists on disk.
    def exists(self):
        return self.__master.storage().exists(self)

    # Returns a list of the bug fixes contained within this database file.
    # If the file doesn't exist, then the provided Scanner is used to generate
    # it.
    def read(self, scanner):
        if not self.exists():
            fixes = scanner.scan(self.repository())
            self.write(fixes)
        else:
            f = self.__master.storage().reader(self)
            fixes = json.load(f)
            fixes = [fix.Fix.from_json(self.__repository, fx) for fx in fixes]
            f.close()
        return fixes

    # Writes a list of bug fixes to this database file
    def write(self, fixes):
        f = self.__master.storage().writer(self)
        try:
            json.dump([fx.to_json() for fx in fixes], f, indent=2)
            f.close()
        # destroy any partially written files
        except:
            f.close()
            os.path.isfile(f.name) and os.remove(f.name)
            raise

# Provides access to the original source code contained within a given file
# belonging to a specified program version
class SourceFile(object):
    def __init__(self, master, version, name):
        self.__master = master
        self.__version = version
        self.__name = name
        self.__loc = None

    # Returns the program version that this preprocessed file belongs to
    def version(self):
        return self.__version

    # Returns the name of the original source file, relative to its
    # repository
    def name(self):
        return self.__name

    # Returns a readable file handler; responsibility of the requestee to close
    def readable(self):
        f = tempfile.NamedTemporaryFile(mode="w+")
        f.write(self.contents())
        f.flush()
        f.seek(0)
        return f

    # Returns the contents of this source file as a string
    def contents(self):
        repo = self.__version.fix().repository().repository()
        blob = repo.commit(self.__version.identifier()).tree[self.__name]
        return blob.data_stream.read().decode()

    # Returns the abstract syntax tree for this file.
    # TODO: add caching to disk
    def ast(self):
        with tempfile.NamedTemporaryFile(mode='w+', suffix='.c') as f:
            f.write(self.contents())
            f.flush()
            return cgum.program.Program.from_source_file(f.name)



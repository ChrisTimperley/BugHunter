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

    # Returns a handler for the AST of a given (pre-processed) file
    def ast(self, ver, fn):
        return AstFile(self.__master, ver, fn)

    # Returns a handler for a given source code file
    def source(self, ver, fn):
        return SourceFile(self.__master, ver, fn)

    # Returns a handler for a given (pre-processed) source code file
    def preprocessed(self, ver, fn):
        return PreprocessedFile(self.__master, ver, fn)

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
        elif isinstance(artefact, PreprocessedFile):
            fn = artefact.name()[:-2] # remove ".c" suffix
            suffix = "after" if artefact.version().is_fixed() else "before"
            fn = "%s.%s.c" % (fn.replace('/', '-'), suffix)
            fix = artefact.version().fix()
            rel = os.path.join(fix.repository().id(),\
                               fix.identifier(),\
                               fn)
        elif isinstance(artefact, AstFile):
            fn = artefact.name()[:-2] # remove ".c" suffix
            suffix = "after" if artefact.version().is_fixed() else "before"
            fn = "%s.%s.cgum.json" % (fn.replace('/', '-'), suffix)
            fix = artefact.version().fix()
            rel = os.path.join(fix.repository().id(),\
                               fix.identifier(),\
                               fn)
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
    # NOTE: does not cache to disk, for now
    # TODO: add caching to disk
    def ast(self):
        with tempfile.NamedTemporaryFile(mode='w+', suffix='.c') as f:
            f.write(self.contents())
            f.flush()
            return cgum.program.Program.from_source_file(f.name)

# Provides access to the pre-processed form of a given source code file from
# a particular program version
class PreprocessedFile(object):
    def __init__(self, master, version, name):
        self.__master = master
        self.__version = version
        self.__name = name

    # Determines whether this file exists on disk
    def exists(self):
        return self.__master.storage().exists(self)

    # Returns the program version that this preprocessed file belongs to
    def version(self):
        return self.__version

    # Returns the name of the original source file, relative to its
    # repository
    def name(self):
        return self.__name
    
    # Returns a readable file for this preprocessed file, which may or may
    # not represent the physical file on disk
    def readable(self):
        print("getting readable")
        if not self.exists():
            pp = self.__version.fix().repository().preprocessor()
            pp.preprocess(self.version())
        return self.__master.storage().reader(self)

    # Writes to the preprocessed file, using another file as source
    def write_from(self, src_fn):
        assert not self.exists(), "pre-processed file already exists"
        writer = self.__master.storage().writer(self)
        with open(src_fn, 'r') as src:
            writer.write(src.read())
        writer.close()

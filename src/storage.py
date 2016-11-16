import utility
import cgum
import cgum.program
import git
import hashlib
import os
import json
import fix

# The Storage class is responsible for abstracting away the details of how and
# where BugHunter's artefacts are stored, including pre-processed, parsed, and
# differenced files.
class Storage(object):
    def __init__(self, master, root=None):
        self.__master = master
        self.__root = os.path.join(os.path.expanduser('~'), 'bughunter')
        utility.ensure_dir(self.__root)

    # Returns a handler for a given diff
    #def diff(self, repo, fix, fn):
    #    return DiffFile(self, repo, fix, fn)

    # Returns a handler for the AST of a given (pre-processed) file
    def ast(self, ver, fn):
        return AstFile(self.__master, ver, fn)

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
            json.dump([fix.to_json(fx) for fx in fixes], f, indent=2)
            f.close()
        # destroy any partially written files
        except:
            f.close()
            os.isfile(f.name) and os.remove(f.name)
            raise

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
            print("preprocessing")
            self.__master.preprocessor().preprocess(self.version())
            print("preprocessed")
        return self.__master.storage().reader(self)

    # Writes to the preprocessed file, using another file as source
    def write_from(self, src_fn):
        assert not self.exists(), "pre-processed file already exists"
        writer = self.__master.storage().writer(self)
        with open(src_fn, 'r') as src:
            writer.write(src.read())
        writer.close()

#class SimpleDiffFile(object):
#
#    def read(self):
#        return storage.read_at(self.location())
#
#    def writable_file(self, artefact):
#        src_fn = hashlib.sha1(artefact.file_name).hexdigest()
#        src_fn = "%s.%s.c" % (src_fn, version.id())
#        loc = os.path.join(f.repo.id(), f.fix.id(), src_fn)
#
#        # ensure the path exists
#        return open(loc, 'w')

class AstFile(object):
    def __init__(self, master, version, fn):
        self.__master = master
        self.__version = version
        self.__fn = fn

    # Returns the name of the associated source file
    def name(self):
        return self.__fn

    def version(self):
        return self.__version

    # Determines whether this file exists on disk.
    def exists(self):
        return self.__master.storage().exists(self)

    def ast(self):
        storage = self.__master.storage()
        if not self.exists():
            try:
                f = storage.writer(self)
                print("getting preprocessed")
                src = storage.preprocessed(self.__version, self.__fn)
                print(src)
                src = src.readable()
                cgum.program.Program.parse_to_json_file(src.name, f)
            except:
                os.unlink(f.name)
                raise
            finally:
                if not f is None: f.close()
                if not src is None: src.close()
        f = storage.reader(self).name
        return cgum.program.Program.from_json_file(f)

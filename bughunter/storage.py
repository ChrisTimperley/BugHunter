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

    # Returns the CGum AST for a given SourceFile

    def ast(self, src):
        path = "after" if src.version().is_fixed() else "before"
        path = "%s.%s.ast.json" % (src.name(), path)
        path = os.path.join(src.version().fix().repository().id(),\
                            src.version().fix().identifier(),\
                            src.name(),\
                            path)
        path = os.path.join(self.root(), "artefacts", path)
        
        if not os.path.exists(path):
            f_src = src.readable()
            try:
                print("Parsing from: %s" % f_src.name)
                print("Parsing to: %s" % path)
                cgum.program.Program.parse_to_json_file(f_src.name, path)
                print("Parsed")
            finally:
                f_src.close()

        return cgum.program.Program.from_file(path)

    # Returns the CGum annotated diff for a BugHunter diff
    def diff(self, df):
        ast_before = df.before().ast()
        ast_after = df.after().ast()

        path = os.path.join(df.fix().repository().id(),\
                            df.fix().identifier(),\
                            df.name(),\
                            ".diff.json")
        path = os.path.join(self.root(), "artefacts", path)

        if not os.path.exists(path):
            src_before_h = df.before().readable()
            src_after_h = df.after().readable()
            try:
                cgum.diff.AnnotatedDiff.parse_to_json_file(src_before_h.name, \
                                                           src_after_h.name, \
                                                           path)
            finally:
                src_before_h.close()
                src_after_h.close()

        return cgum.diff.AnnotatedDiff.from_file(path, ast_before, ast_after)

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

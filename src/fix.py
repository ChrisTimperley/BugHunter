import json

# Represents a version of a program for a particular bug fix, where the two
# versions are Faulty and Fixed
class ProgramVersion(object):
    def __init__(self, fix):
        self.__fix = fix

    # Returns the AST for a file modified by this edit, with a given name
    def ast(self, fn):
        pass

    # Returns the pre-processed source code for a given file that was modified
    # by this edit, as a readable file.
    def preprocessed(self, fn):
        return self.__fix.master().storage().preprocessed(self, fn).readable()

class FaultyVersion(ProgramVersion):
    def is_fixed(self):
        return False
    def is_faulty(self):
        return True

class FixedVersion(ProgramVersion):
    def is_fixed(self):
        return True
    def is_faulty(self):
        return False

class Fix(object):
    def __init__(self, master, commit, jsn=None):
        self.__master = master
        self.__commit = commit
        self.__files = None

        if commit:
            self.__identifier = str(commit)
            self.__message = commit.message.strip()
            self.__email = commit.committer.email
            self.__name = commit.committer.name
            self.__date = commit.committed_date
            self.__files = None
        elif json:
            self.__identifier = jsn['id']
            self.__message = jsn['message']
            self.__email = jsn['committer']['email']
            self.__name = jsn['committer']['name']
            self.__date = jsn['date']
            self.__files = jsn['files']

    def master(self):
        return self.__master

    @staticmethod
    def from_json(master, jsn):
        return Fix(master, None, jsn=jsn)

    def identifier(self):
        return self.__identifier
    def message(self):
        return self.__message
    def email(self):
        return self.__email
    def name(self):
        return self.__name
    def date(self):
        return self.__date

    # Returns a list of all files that were affected by this fix, including
    # non-source files.
    def files(self):
        if self.__files is None:
            self.__files = list(self.__commit.stats.files.keys())
        return self.__files

    # Returns a list of all C source files that were affected by this fix.
    # Includes the names of files that were added and deleted.
    def source_files(self):
        return filter(lambda s: s.endswith('.c'), self.files())

    # Returns a list of all the C source files that were modified by this fix.
    # Does not include files that were added or deleted.
    def modified_source_files(self):
        raise NotImplementedError("modified_source_files")
    
    # Determines whether this fix modifies a header file
    def modifies_header_file(self):
        return any(f.endswith('.h') for f in self.files())

    # Determines whether this fix modifies multiple C source code files
    def modifies_multiple_source_files(self):
        return len(list(self.source_files())) > 1

    # Returns a pointer to the version of the program before the fix
    def before(self):
        return FaultyVersion(self)

    # Returns a pointer to the version of the program after the fix
    def after(self):
        return FixedVersion(self)

    def diff(self, fn):
        raise NotImplementedError("diff")

    # Returns a JSON description of this fix, in the form of a Dict
    def to_json(self):
        return {
            'id': self.identifier(),
            'message': self.message(),
            'committer': {
                'email': self.email(),
                'name': self.name()
            },
            'date': self.date(),
            'files': self.files()
        }

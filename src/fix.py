import json

class FixVersion(object):

    # Returns the pre-processed form of this fix.
    def preprocessed(self):
        pass

    # Returns the AST for a file modified by this edit, with a given name
    def ast(self, fn):
        pass

    # Returns the source code of a file (in string form) modified by this edit,
    # given its name.
    def source(self, fn):
        pass

class Fix(object):
    def __init__(self, commit, jsn=None):
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

    @staticmethod
    def from_json(jsn):
        return Fix(None, jsn=jsn)

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

    def before(self):
        raise NotImplementedError("before")

    def after(self):
        raise NotImplementedError("after")

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

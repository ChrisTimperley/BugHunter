import json
import tempfile
import source
import cgum.diff

# Represents a version of a program for a particular bug fix, where the two
# versions are Faulty and Fixed
class ProgramVersion(object):
    def __init__(self, fix):
        self.__fix = fix

    # Rerturns the fix that this program version belongs to
    def fix(self):
        return self.__fix

    # Returns the source code for a given file
    def source(self, fn):
        return source.SourceFile(self.__fix.master(), self, fn)

    # Returns the pre-processed source code for a given file that was modified
    # by this edit, as a readable file.
    def preprocessed(self, fn):
        return self.__fix.master().storage().preprocessed(self, fn).readable()

class FaultyVersion(ProgramVersion):
    def identifier(self):
        return "%s~1" % self.fix().identifier()
    def is_fixed(self):
        return False
    def is_faulty(self):
        return True

class FixedVersion(ProgramVersion):
    def identifier(self):
        return self.fix().identifier()
    def is_fixed(self):
        return True
    def is_faulty(self):
        return False

class Fix(object):
    def __init__(self, repo, commit, jsn=None):
        self.__repo = repo
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
        return self.__repo.master()
    def repository(self):
        return self.__repo

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
    #
    # TODO: precompute and cache
    def modified_source_files(self):
        repo = self.repository().repository()
        before = repo.commit('%s~1' % self.__identifier)
        after = repo.commit(self.__identifier)
        diff = before.diff(after)
        modified = [d.a_path for d in diff if   d.change_type == 'M' and\
                                                d.a_path.endswith('.c')]
        return modified
    
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
        f_from = f_to = None
        try:
            src_from = self.before().source(fn).contents()
            src_to = self.after().source(fn).contents()

            f_from = tempfile.NamedTemporaryFile(mode='w', suffix='.c')
            f_from.write(src_from)
            f_from.flush()

            f_to = tempfile.NamedTemporaryFile(mode='w', suffix='.c')
            f_to.write(src_to)
            f_to.flush()
            print("reading diff")
            diff = cgum.diff.AnnotatedDiff.from_source_files(f_from.name,\
                                                             f_to.name)
            print("read diff")
        except Exception as e:
            raise
        finally:
            if not f_from is None:
                f_from.close()
            if not f_to is None:
                f_to.close()
        return diff

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

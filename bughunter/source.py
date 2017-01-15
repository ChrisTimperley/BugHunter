import tempfile

# Provides access to the original source code contained within a given file
# belonging to a specified program version
class SourceFile(object):
    @staticmethod
    def clean_filename(fn):
        return fn.replace('/', '-')

    def __init__(self, master, version, name):
        self.__master = master
        self.__version = version
        self.__name = name

    # Returns the program version to which this preprocessed file belongs
    def version(self):
        return self.__version

    # Returns the name of the original source file, relative to its
    # repository
    def name(self):
        return self.__name

    # Returns a sanitised form of the name of this source file
    def clean_name(self):
        return SourceFile.clean_filename(self.__name)

    # Returns a readable file handler; responsibility of the requestee to close
    def readable(self):
        f = tempfile.NamedTemporaryFile(suffix=".c", mode="wb")
        f.write(self.contents().encode("utf-8"))
        f.flush()
        f.seek(0)
        return f

    # Returns the contents of this source file as a string
    def contents(self):
        repo = self.__version.fix().repository().repository()
        blob = repo.commit(self.__version.identifier()).tree[self.__name]
        return blob.data_stream.read().decode()

    # Returns the abstract syntax tree for this file.
    def ast(self):
        return self.__master.storage().ast(self)

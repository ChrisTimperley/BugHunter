import tempfile

# Provides access to the original source code contained within a given file
# belonging to a specified program version
class SourceFile(object):
    def __init__(self, version, name):
        self.__version = version
        self.__name = name

    # Returns the program version to which this preprocessed file belongs
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
    def ast(self):
        with tempfile.NamedTemporaryFile(mode='w+', suffix='.c') as f:
            f.write(self.contents())
            f.flush()
            return cgum.program.Program.from_source_file(f.name)

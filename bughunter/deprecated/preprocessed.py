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

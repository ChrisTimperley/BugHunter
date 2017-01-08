# Represents the difference between two files 
class FileDiff(object):
    def __init__(self, master, fix, name):
        self.__master = master
        self.__fix = fix
        self.__name = name
        self.__cgum = None
    
    # Returns the name of the file
    def name(self):
        return self.__name

    # Returns the fix that this diff belongs to
    def fix(self):
        return self.__fix
    
    # Returns the 'before' file
    def before(self):
        print("FileDiff - fetching before: %s" % self.__name)
        return self.fix().before().source(self.__name)

    # Returns the 'after' file
    def after(self):
        print("FileDiff - fetching after: %s" % self.__name)
        return self.fix().after().source(self.__name)

    # Returns the PyCGum difference representation of this diff
    def cgum(self):
        if self.__cgum is None:
            self.__cgum = self.__master.storage().diff(self)
        return self.__cgum

    # Returns a list of repair actions mined from this diff
    def actions(self):
        raise NotImplementedError

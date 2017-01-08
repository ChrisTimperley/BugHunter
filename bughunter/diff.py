# Represents the difference between two files 
class FileDiff(object):
    def __init__(self, fix, name):
        self.__fix = fix
        self.__name = name
        self.__cgum = None
    
    # Returns the name of the file
    def name(self):
        return self.__name

    # Returns the fix that this diff belongs to
    def fix(self):
        return self.__fix
    
    # Returns the 'before' state of the file
    def before(self):
        return self.cgum().before()

    # Returns the 'after' state of the file
    def after(self):
        return self.cgum().after()

    # Returns the PyCGum difference representation of this diff
    def cgum(self):
        if self.__cgum is None:
            self.__cgum = self.__main.storage.diff(self)
        return self.__cgum

    # Returns a list of repair actions mined from this diff
    def actions(self):
        raise NotImplementedError

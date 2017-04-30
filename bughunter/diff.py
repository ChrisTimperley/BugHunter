import bughunter.source
from bughunter.action.collection import RepairActions
from bughunter.pool import ConcreteDonorPoolSet, AbstractDonorPoolSet
import os.path

# Represents the difference between two files 
class FileDiff(object):
    def __init__(self, master, fix, name):
        self.__master = master
        self.__fix = fix
        self.__name = name
        self.__cgum = None

    # Returns the absolute path to this diff file on disk
    def location(self):
        path = "%s.diff.json" % self.clean_name()
        path = os.path.join(self.fix().repository().id(),\
                            self.fix().identifier(),\
                            path)
        path = os.path.join(self.__master.storage().root(), "artefacts", path)
        return path
    
    # Returns the name of the file
    def name(self):
        return self.__name

    # Returns the sanitised form of the file name
    def clean_name(self):
        return bughunter.source.SourceFile.clean_filename(self.__name)

    # Returns the repair actions for this diff
    def actions(self):
        return RepairActions.mine(self)

    # Returns the concrete repair pool for this diff
    def concrete_pool(self):
        return ConcreteDonorPoolSet.build(self)

    # Returns the abstract repair pool for this diff
    def abstract_pool(self):
        return AbstractDonorPoolSet.build(self)

    # Returns the fix that this diff belongs to
    def fix(self):
        return self.__fix
    
    # Returns the 'before' file
    def before(self):
        return self.fix().before().source(self.__name)

    # Returns the 'after' file
    def after(self):
        return self.fix().after().source(self.__name)

    # Determines whether the CGum diff file for this file is cached
    # to disk
    def cached(self):
        return os.path.exists(self.location())

    # Ensures that the files for this diff are cached to disk, including its
    # donor pool
    #
    # TODO: could be more efficient if we just didn't load existing donor pools from
    #       disk, but that involves a bit more refactoring; this is good enough for
    #       now
    def prepare(self):
        try:
            if not self.cached():
                self.cgum()
            ConcreteDonorPoolSet.build(self)
            AbstractDonorPoolSet.build(self)
        except:
            pass 

    # Returns the PyCGum difference representation of this diff
    def cgum(self):
        if self.__cgum is None:
            self.__cgum = self.__master.storage().diff(self)
        return self.__cgum

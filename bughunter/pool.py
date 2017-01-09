import cgum.statement

class DonorPoolSet(object):
    
    @staticmethod
    def load(diff):
        pass

    def __init__(self, pools):
        self.__pools = pools

    # Returns the pools within this set as a dictionary, where each pool is
    # indexed by its label
    def pools(self):
        return self.__pools
    
    # Returns a pool with a given name from this set of pools
    def pool(self, name):
        return self.__pools[name]

    # Checks if a given node can be found within any of the named pools contained
    # within this set of donor pools
    def contains(self, node, pools):
        for pool in self.__pools:
            if pool.contains(node):
                return True
        return False

class DonorPool(object):

    @staticmethod
    def load(diff):

    def __init__(self, program, criterion):
        nodes = program.collect(lambda n: criterion.include(n))
        self.__contents = frozenset(hash(n) for n in nodes)
    def contents(self):
        return self.__contents
    def contains(self, node):
        return hash(node) in self.__contents

# Used to specify which nodes should be entered into the donor pool
class DonorPoolCriterion(object):
    def include(self, node):
        raise NotImplementedError

# Donor pool containing all nodes from the corpus
class AtomicCriterion(DonorPoolCriterion):
    def include(self, node):
        return True

# Donor pool of statements
class StatementCriterion(DonorPoolCriterion):
    def include(self, node):
        return isinstance(node, cgum.statement.Statement)

# Donor pool of blocks
class BlockCriterion(DonorPoolCriterion):
    def include(self, node):
        return isinstance(node, cgum.statement.Block)

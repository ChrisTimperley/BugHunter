import cgum.statement

class DonorPool(object):
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

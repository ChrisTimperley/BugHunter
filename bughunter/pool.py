from bughunter.utility import *
import cgum.statement
import json
import os.path

class DonorPool(object):
    @staticmethod
    def build(name, tree, criterion):
        contents = tree.collect(lambda n: criterion.covers(n))
        contents = frozenset(hash(n) for n in contents)
        return DonorPool(name, contents)

    def __init__(self, name, contents):
        self.__name = name
        self.__contents = contents

    def contents(self):
        return self.__contents
    def contains(self, node):
        return hash(node) in self.__contents

    def to_json(self):
        return list(self.__contents)

# Used to specify which nodes should be entered into the donor pool
class DonorPoolCriterion(object):
    def covers(self, node):
        raise NotImplementedError

# Donor pool containing all nodes from the corpus
class AtomicCriterion(DonorPoolCriterion):
    def covers(self, node):
        return True

# Donor pool of statements
class StatementCriterion(DonorPoolCriterion):
    def covers(self, node):
        return isinstance(node, cgum.statement.Statement)

# Donor pool of blocks
class BlockCriterion(DonorPoolCriterion):
    def covers(self, node):
        return isinstance(node, cgum.statement.Block)

class DonorPoolSet(object):
    # labels for each of the available pools
    POOLS = {
        'atomic': AtomicCriterion(),
        'statement': StatementCriterion(),
        'block': BlockCriterion()
    }

    @staticmethod
    def __save(pools, loc):
        pools = {n: pl.to_json() for (n, pl) in pools.items()}
        ensure_dir(os.path.dirname(loc))
        with open(loc, "w") as f:
            json.dump(pools, f)
    
    @staticmethod
    def build(diff, ast, loc):
        if os.path.exists(loc):
            with open(loc, "r") as f:
                pools = json.load(f)
            for (pname, pool) in pools.items():
                pools[pname] = DonorPool(pname, frozenset(pool))
        else:
            pools = {}

        # build remaining pools
        modified = False
        for (pname, criterion) in DonorPoolSet.POOLS.items():
            if pname in pools:
                continue
            modified = True
            pools[pname] = DonorPool.build(pname, ast, criterion)

        # update cache file, if necessary
        # TODO: refactor
        if modified:
            DonorPoolSet.__save(pools, loc)

        return pools

    def __init__(self, diff, pools):
        self.__diff = diff
        self.__pools = pools

    # Returns the diff that this set of donor pools belong to
    def diff(self):
        return self.__diff

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

class AbstractDonorPoolSet(object):
    @staticmethod
    def locator(diff):
        storage = diff.fix().master().storage()
        path = "%s.abstract.pool.json" % diff.clean_name()
        path = os.path.join(diff.fix().repository().id(),\
                            diff.fix().identifier(),\
                            path)
        path = os.path.join(storage.root(), "artefacts", path)
        return path

    @staticmethod
    def build(diff):
        loc = AbstractDonorPoolSet.locator(diff)
        # TODO: strip labels
        ast = diff.before().ast()
        pools = DonorPoolSet.build(diff, ast, loc)
        return AbstractDonorPoolSet(diff, pools)

class ConcreteDonorPoolSet(DonorPoolSet):
    @staticmethod
    def locator(diff):
        storage = diff.fix().master().storage()
        path = "%s.concrete.pool.json" % diff.clean_name()
        path = os.path.join(diff.fix().repository().id(),\
                            diff.fix().identifier(),\
                            path)
        path = os.path.join(storage.root(), "artefacts", path)
        return path

    @staticmethod
    def build(diff):
        loc = ConcreteDonorPoolSet.locator(diff)
        ast = diff.before().ast()
        pools = DonorPoolSet.build(diff, ast, loc)
        return ConcreteDonorPoolSet(diff, pools)

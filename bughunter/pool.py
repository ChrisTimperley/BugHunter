from utility import *
import cgum.statement
import json
import os.path

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

class DonorPoolSet(object):
    # labels for each of the available pools
    POOLS = {
        'atomic': AtomicCriterion,
        'statement': StatementCriterion,
        'block': BlockCriterion
    }

    # Returns the location on disk of the donor pool file for
    # a given diff
    @staticmethod
    def locator(diff):
        storage = diff.fix().master().storage()
        path = "%s.pool.json" % diff.name()
        path = os.path.join(diff.fix().repository().id(),\
                            diff.fix().identifier(),\
                            path)
        path = os.path.join(storage.root(), "artefacts", path)
        return path

    # Saves a set of donor pools (given as a dictionary) to a specified
    # cache file on disk, overwriting any existing contents
    @staticmethod
    def __save(pools, loc):
        pools = {n: pl.to_json() for (n, pl) in pools.items()}
        ensuredir(os.path.dirname(loc))
        with open(loc, "w") as f:
            json.dump(pools, f)
    
    # Builds the set of donor pools for a given diff, using on-disk
    # caches where possible
    @staticmethod
    def build(diff):
        loc = DonorPoolSet.locator(diff)
        if os.path.exist(loc):
            with open(loc, "r") as f:
                pools = json.load(loc)
            for (pname, pool) in pools.items():
                pools[pname] = DonorPool(pname, pool)
        else:
            pools = {}

        # build remaining pools
        modified = False
        for (pname, criterion) in DonorPoolSet.POOLS:
            if pname in pools:
                continue

            modified = True
            pools[pname] = DonorPool.build(pname, diff, criterion)

        # update cache file, if necessary
        if modified:
            DonorPoolSet.__save(pools, loc)

        return DonorPoolSet(diff, pools)

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

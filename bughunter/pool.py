from bughunter.utility import *
import cgum.statement
import cgum.expression
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

class DonorPoolBuilder(object):
    @staticmethod
    def build(ast, loc):
        # Load existing pools from disk
        if os.path.exists(loc):
            with open(loc, "r") as f:
                existing = json.load(f)
            for (pname, pool) in pools.items():
                existing[pname] = DonorPool(pname, frozenset(pool))
        else:
            pools = {}

        # Build the remaining pools
        buffers = DonorPoolBuilder(ast, pools).collect()
        pools.update(buffers)

        # If any new pools have been built, save the set to disk
        if not buffers:
            jsn = {n: pl.to_json() for (n, pl) in pools.items()}
            ensure_dir(os.path.dirname(loc))
            with open(loc, "w") as f:
                json.dump(jsn, f)
       
        return pools

    def __init__(self, ast, existing):
        pools = ['atomic', 'expression', 'statement', 'block', 'identity']
        self.__ast = ast
        self.__buffers = {p: [] for p in pools if not p in existing}

    def collect(self):
        if not self.__buffers:
            return {}
        
        self.visit(self.__ast)
        for (pool, contents) in self.__buffers.items():
            contents = frozenset(hash(n) for n in contents)
            self.__buffers[pool] = DonorPool(pool, contents)
        return self.__buffers

    def visit(self, node):
        self.add('atomic', node)
        if isinstance(node, cgum.expression.Expression):
            self.add('expression', node)
        if isinstance(node, cgum.statement.Statement):
            self.add('statement', node)
        if isinstance(node, cgum.statement.Block):
            self.add('block', node)
        if isinstance(node, cgum.expression.Identity):
            self.add('identity', node)

        for child in node.children():
            self.visit(child)

    def add(self, pool, node):
        if pool in self.__buffers:
            self.__buffers[pool].append(node)

class DonorPoolSet(object):
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

class AbstractDonorPoolSet(DonorPoolSet):
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
        ast = diff.before().ast().strip_variable_names()
        pools = DonorPoolBuilder.build(ast, loc)
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
        pools = DonorPoolBuilder.build(ast, loc)
        return ConcreteDonorPoolSet(diff, pools)

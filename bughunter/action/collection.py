import cgum.statement
import os.path
import json
import codecs
from collections import Counter

from bughunter.action.core import *
from bughunter.action.basic         import  DeleteStatement,\
                                            InsertStatement,\
                                            ModifyStatement
from bughunter.action.ifels         import  WrapStatement,\
                                            UnwrapStatement,\
                                            ReplaceIfCondition,\
                                            ReplaceThenBranch,\
                                            ReplaceElseBranch,\
                                            RemoveElseBranch,\
                                            InsertElseBranch,\
                                            InsertElseIfBranch,\
                                            GuardElseBranch
from bughunter.action.switch        import  ReplaceSwitchExpression
from bughunter.action.loop          import  ReplaceLoopGuard,\
                                            ReplaceLoopBody
from bughunter.action.assignment    import  ModifyAssignment,\
                                            ReplaceAssignmentRHS,\
                                            ReplaceAssignmentLHS,\
                                            ReplaceAssignmentOp
from bughunter.action.call          import  ModifyCall,\
                                            ReplaceCallTarget,\
                                            ModifyCallArgs,\
                                            InsertCallArg,\
                                            RemoveCallArg,\
                                            ReplaceCallArg
class RepairActions(object):
    # Ordered list of repair actions to mine
    ACTIONS = [ DeleteStatement,
                InsertStatement,
                ModifyStatement,
                WrapStatement,
                UnwrapStatement,
                ReplaceIfCondition,
                ReplaceThenBranch,
                ReplaceElseBranch,
                RemoveElseBranch,
                InsertElseBranch,
                InsertElseIfBranch,
                GuardElseBranch,
                ReplaceSwitchExpression,
                ReplaceLoopGuard,
                ReplaceLoopBody,
                ModifyAssignment,
                ReplaceAssignmentLHS,
                ReplaceAssignmentRHS,
                ReplaceAssignmentOp,
                ModifyCall,
                ReplaceCallTarget,
                ModifyCallArgs,
                InsertCallArg,
                RemoveCallArg,
                ReplaceCallArg]

    # Map from action class names to their classes
    ACTION_MAP = {a.__name__: a for a in ACTIONS}

    def __init__(self, actions):
        self.__actions = actions

    def contents(self):
        return [a for l in self.__actions.values() for a in l]

    # Returns a breakdown of the number of repair actions within this
    # collection by their type
    def stats(self):
        return Counter({name: len(lst) for (name, lst) in self.__actions.items()})

    # Reads a JSON repair action description and transforms it into a
    # repair action instance
    @staticmethod
    def __action_from_json(jsn, before_ast, after_ast):
        assert 'type' in jsn, "expected 'type' parameter in JSON repair action description"
        return RepairActions.ACTION_MAP[jsn['type']].from_json(jsn, before_ast, after_ast)

    # Returns the location on disk of the repair actions cache file for
    # a given diff
    @staticmethod
    def locator(diff):
        storage = diff.fix().master().storage()
        path = "%s.actions.json" % diff.clean_name()
        path = os.path.join(diff.fix().repository().id(),\
                            diff.fix().identifier(),\
                            path)
        path = os.path.join(storage.root(), "artefacts", path)
        return path

    # Determines whether the repair actions for a given diff are cached to disk
    @staticmethod
    def cached(diff):
        return os.path.exists(RepairActions.locator(diff))
 
    # Extracts all repair actions within a given file (utilising the cache where
    # possible)
    @staticmethod
    def mine(diff):
        # load any cached actions from disk
        loc = RepairActions.locator(diff)
        if os.path.exists(loc):
            actions = RepairActions.__load(diff, loc)
        else:
            actions = {}

        # get a list of the statements in each version of the program
        patch = diff.cgum()
        stmts_bef =\
            patch.before().collect(lambda n: isinstance(n, cgum.statement.Statement))
        stmts_aft =\
            patch.after().collect(lambda n: isinstance(n, cgum.statement.Statement))

        # mine remaining actions
        modified = False
        for typ in RepairActions.ACTIONS:
            if typ.__name__ in actions:
                continue

            modified = True
            typ.detect(patch, stmts_bef, stmts_aft, actions)

        # if we added any new actions, overwrite the cache
        if modified:
            RepairActions.__save(diff, actions, loc)

        # return a RepairActions object
        return RepairActions(actions)

    # Loads the mined repair actions for a given diff from disk
    # Responsibility of the callee to ensure the file exists
    @staticmethod
    def __load(diff, loc):
        assert not diff is None
        assert os.path.exists(loc), "given repair action file must exist"

        with codecs.open(loc, 'r', 'utf-8') as f:
            action_sets = json.load(f)

        before_ast = diff.before().ast()
        after_ast = diff.after().ast()

        for (typ_name, actions) in sorted(action_sets.items()):
            action_sets[typ_name] = \
                [RepairActions.__action_from_json(a, before_ast, after_ast) for a in actions]

        return action_sets
    
    # Saves the mined repair actions for a given diff to disk, overwriting
    # any existing cache file
    @staticmethod
    def __save(diff, actions, loc):
        jsn = {tn: [a.to_json() for a in actions[tn]] for tn in actions}
        with open(loc, "w") as f:
            json.dump(jsn, f)

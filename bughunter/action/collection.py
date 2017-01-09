from bughunter.action.core import *
import cgum.statement
import bughunter.action.basic
import bughunter.action.ifels
import bughunter.action.switch
import bughunter.action.loop
import bughunter.action.assignment
import bughunter.action.call
import os.path
import json

class RepairActions(object):
    # Ordered list of repair actions to mine
    ACTIONS = [ bughunter.action.basic.DeleteStatement,
                bughunter.action.basic.InsertStatement,
                bughunter.action.basic.ModifyStatement,
                bughunter.action.ifels.WrapStatement,
                bughunter.action.ifels.UnwrapStatement,
                bughunter.action.ifels.ReplaceIfCondition,
                bughunter.action.ifels.ReplaceThenBranch,
                bughunter.action.ifels.ReplaceElseBranch,
                bughunter.action.ifels.RemoveElseBranch,
                bughunter.action.ifels.InsertElseBranch,
                bughunter.action.ifels.InsertElseIfBranch,
                bughunter.action.ifels.GuardElseBranch,
                bughunter.action.switch.ReplaceSwitchExpression,
                bughunter.action.loop.ReplaceLoopGuard,
                bughunter.action.loop.ReplaceLoopBody,
                #bughunter.action.assignment.ModifyAssignment,
                #bughunter.action.assignment.ReplaceAssignmentRHS,
                #bughunter.action.assignment.ReplaceAssignmentLHS,
                #bughunter.action.assignment.ReplaceAssignmentOp,
                bughunter.action.call.ModifyCall,
                bughunter.action.call.ReplaceCallTarget,
                bughunter.action.call.ModifyCallArgs,
                bughunter.action.call.InsertCallArg,
                bughunter.action.call.RemoveCallArg,
                bughunter.action.call.ReplaceCallArg]

    def __init__(self, actions):
        self.__actions = actions

    # Returns the location on disk of the repair actions cache file for
    # a given diff
    @staticmethod
    def locator(diff):
        path = "%s.actions.json" % diff.name()
        path = os.path.join(diff.fix().repository().id(),\
                            diff.fix().identifier(),\
                            path)
        path = os.path.join(self.root(), "artefacts", path)
        return path
 
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
        for typ in ACTIONS:
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
    def __load(master, diff, loc):
        assert not diff is None
        assert os.path.exists(loc), "given repair action file must exist"

        with open(loc, "r") as f:
            actions = json.load(f)

        for (typ_name, actions) in actions.items():
            actions[typ_name] = [RepairAction.from_json(a) for a in actions]

        return actions
    
    # Saves the mined repair actions for a given diff to disk, overwriting
    # any existing cache file
    @staticmethod
    def __save(diff, actions, loc):
        jsn = {tn: [a.to_json() for a in actions[tn]] for tn in actions}
        with open(loc, "w") as f:
            json.dump(jsn, f)

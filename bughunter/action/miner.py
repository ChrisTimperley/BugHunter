import cgum.statement
import bughunter.action.basic
import bughunter.action.ifels
import bughunter.action.switch
import bughunter.action.loop
import bughunter.action.assignment
import bughunter.action.call

# Responsible for mining repair actions from a given CGum patch
class RepairActionMiner(object):
    def __init__(self):
        self.__action_types = [bughunter.action.basic.DeleteStatement,
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

    # Returns a dict of all repair actions within a given AST, aggregated by
    # type
    def mine(self, patch):
        stmts_bef =\
            patch.before().collect(lambda n: isinstance(n, cgum.statement.Statement))
        stmts_aft =\
            patch.after().collect(lambda n: isinstance(n, cgum.statement.Statement))

        actions = {}
        for action_type in self.__action_types:
            action_type.detect(patch, stmts_bef, stmts_aft, actions)
        return actions

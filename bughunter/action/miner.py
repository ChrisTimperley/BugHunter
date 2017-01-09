import cgum.statement

# Responsible for mining repair actions from a given CGum patch
class RepairActionMiner(object):
    def __init__(self):
        self.__action_types = [DeleteStatement,
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
                               #ModifyAssignment,
                               #ReplaceAssignmentRHS,
                               #ReplaceAssignmentLHS,
                               #ReplaceAssignmentOp,
                               ModifyCall,
                               ReplaceCallTarget,
                               ModifyCallArgs,
                               InsertCallArg,
                               RemoveCallArg,
                               ReplaceCallArg]

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

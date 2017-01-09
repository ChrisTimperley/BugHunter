#!/usr/bin/python3
import cgum
import pprint
import cgum.diff

####
# GROUP: Switch-Related Actions
####
class ReplaceSwitchExpression(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_stmt = before.find(jsn['before_stmt'])
        after_stmt = after.find(jsn['after_stmt'])
        assert not before_stmt is None
        assert not after_stmt is None
        return ReplaceSwitchExpression(before_stmt, after_stmt)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = map(ModifyStatement.to, actions['ModifyStatement'])
        modified = filter(lambda s: isinstance(s, cgum.statement.Switch), modified)
       
        l = map(lambda s: (patch.is_was(s), s), modified)
        l = filter(star(lambda frm,to: not frm.expr().equivalent(to.expr())), l)
        actions['ReplaceSwitchExpression'] =\
            [ReplaceSwitchExpression(frm, to) for (frm, to) in l]

    def __init__(self, from_stmt, to_stmt):
        self.__from_stmt = from_stmt
        self.__to_stmt = to_stmt

    def from_expr(self):
        return self.__from_stmt.expr()
    def to_expr(self):
        return self.__to_stmt.expr()

    def to_json(self):
        return super().to_json({'before_stmt': self.__from_stmt.number(),
                                'after_stmt': self.__to_stmt.number()})

class ReplaceLoopGuard(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_loop = before.find(jsn['before_loop'])
        after_loop = after.find(jsn['after_loop'])
        assert not before_loop is None
        assert not after_loop is None
        return ReplaceLoopGuard(before_loop, after_loop)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = map(lambda a: (a.frm(), a.to()), actions['ModifyStatement'])

        tmp = []
        for (frm, to) in modified:
            if isinstance(frm, cgum.statement.Loop):
                tmp.append((frm, to))
            
            # special for loop handling
            if (not frm.parent() is None) and isinstance(frm.parent(), cgum.statement.Loop):
                if frm.parent().condition() == frm:
                    tmp.append((frm.parent(), to.parent()))
        modified = tmp

        l = filter(star(lambda frm,to: not frm.condition().equivalent(to.condition())),\
                   modified)
        actions['ReplaceLoopGuard'] =\
            [ReplaceLoopGuard(frm, to) for (frm, to) in l]
        
    def __init__(self, from_stmt, to_stmt):
        self.__from_stmt = from_stmt
        self.__to_stmt = to_stmt

    def from_guard(self):
        return self.__from_stmt.condition()
    def to_guard(self):
        return self.__to_stmt.condition()

    def to_json(self):
        return super().to_json({'before_loop': self.__from_stmt.number(), \
                                'after_loop': self.__to_stmt.number()})
       
class ReplaceLoopBody(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_loop = before.find(jsn['before_loop'])
        after_loop = after.find(jsn['after_loop'])
        assert not before_loop is None
        assert not after_loop is None
        return ReplaceLoopBody(before_loop, after_loop)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: isinstance(s, cgum.statement.Loop), stmts_aft)
        l = map(lambda s: (patch.is_was(s), s), l)
        l = filter(star(lambda frm,to: not frm is None), l)
        l = filter(star(lambda frm,to: not frm.body().equivalent(to.body())), l)
        actions['ReplaceLoopBody'] =\
            [ReplaceLoopBody(frm, to) for (frm, to) in l]

    def __init__(self, from_stmt, to_stmt):
        self.__from_stmt = from_stmt
        self.__to_stmt = to_stmt

    def from_body(self):
        return self.__from_stmt.body()
    def to_body(self):
        return self.__to_stmt.body()

    def to_json(self):
        return super().to_json({'before_loop': self.__from_stmt.number(), \
                                'after_loop': self.__to_stmt.number()})
 
## ASSIGNMENT-RELATED OPERATORS
class ModifyAssignment(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_stmt = before.find(jsn['before'])
        after_stmt = after.find(jsn['after'])
        assert not before_stmt is None
        assert not after_stmt is None
        return ModifyAssignment(before_stmt, after_stmt)

    @staticmethod
    def detect_all_in_modified_statement(patch, stmt, actions):
        l = filter(lambda a: isinstance(a.frm(), cgum.statement.DeclarationList), \
                   actions['ModifyStatement'])
        l = map(lambda a: (a.frm(), a.to()), l)
        l = filter(star(lambda frm,to: not frm.equivalent(to)), l)
        for (frm, to) in l:
            actions['ModifyAssignment'].append(ModifyAssignment(frm, to))

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        stmts = map(lambda a: a.frm(), actions['ModifyStatement'])
        actions['ModifyAssignment'] = []
        for stmt in stmts:
            ModifyAssignment.detect_all_in_modified_statement(patch, stmt, actions)

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm(self):
        return self.__frm
    def to(self):
        return self.__to

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})
 
class ReplaceAssignmentRHS(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_assign = before.find(jsn['before'])
        after_assign = after.find(jsn['after'])
        assert not before_assign is None
        assert not after_assign is None
        return ReplaceAssignmentRHS(before_assign, after_assign)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyAssignment'])
        for (frm, to) in l:

            diffs = []
            for (lhs_frm, rhs_frm) in frm.declarations():

                # find each surviving LHS from P, checking that it still belongs to the same
                # declaration list (it could have moved elsewhere)
                lhs_to = patch.was_is(lhs_frm)
                if lhs_to is None or lhs_to.parent() != to:
                    continue

                # find which child entry the matching LHS (in P') occupies, add one to that
                # entry to get its corresponding RHS
                rhs_to = to.child(to.index_of_child(lhs_to) + 1)

                # compare the old and new RHS for difference
                if not rhs_frm.equivalent(rhs_to):
                    diffs.append((rhs_frm, rhs_to))

            # construct objects
            actions['ReplaceAssignmentRHS'] = \
                [ReplaceAssignmentRHS(frm, to) for (frm, to) in diffs]

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm(self):
        return self.__frm
    def to(self):
        return self.__to

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})

# TODO: massive clone of the above action; unify?
class ReplaceAssignmentLHS(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_assign = before.find(jsn['before'])
        after_assign = after.find(jsn['after'])
        assert not before_assign is None
        assert not after_assign is None
        return ReplaceAssignmentLHS(before_assign, after_assign)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyAssignment'])
        for (frm, to) in l:

            diffs = []
            for (lhs_frm, rhs_frm) in frm.declarations():

                # find each surviving RHS from P, checking that it still belongs to the same
                # declaration list (it could have moved elsewhere)
                rhs_to = patch.was_is(rhs_frm)
                if rhs_to is None or rhs_to.parent() != to:
                    continue

                # find which child entry the matching RHS (in P') occupies, minus one from
                # that entry to get its corresponding LHS
                lhs_to = to.child(to.index_of_child(rhs_to) - 1)

                # compare the old and new LHS for difference
                if not lhs_frm.equivalent(lhs_to):
                    diffs.append((lhs_frm, lhs_to))

            # construct objects
            actions['ReplaceAssignmentLHS'] = \
                [ReplaceAssignmentLHS(frm, to) for (frm, to) in diffs]

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm(self):
        return self.__frm
    def to(self):
        return self.__to

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})

#class ReplaceAssignmentOp(RepairAction):
#    @staticmethod
#    def detect(patch, stmts_bef, stmts_aft, actions):
        #l = filter(lambda a: a.frm().rhs() == a.to().rhs(),\
        #           actions['ModifyAssignment'])
        #l = filter(lambda a: a.frm().op() != a.to().op(), l)
        #l = filter(lambda a: a.frm().lhs() == a.to().lhs(), l)
        #actions['ReplaceAssignmentOp'] = \
        #    [ReplaceAssignmentOp(a.frm().op(), a.to().op()) for a in l]
#
#    def __init__(self, frm, to):
#        self.__frm = frm
##        self.__to = to
#
#    def frm(self):
#        return self.__frm
#    def to(self):
#        return self.__to

## FUNCTION-CALL-RELATED ACTIONS
class ModifyCall(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        assert not before_call is None
        assert not after_call is None
        return ModifyCall(before_call, after_call)

    @staticmethod
    def detect_all_in_modified_statement(patch, stmt, actions):
        calls = stmt.find_all(lambda n: isinstance(n, cgum.expression.FunctionCall))
        calls = map(lambda c: (c, patch.was_is(c)), calls)
        calls = filter(star(lambda frm,to: not to is None), calls)
        calls = filter(star(lambda frm,to: not frm.equivalent(to)), calls)
        for (frm, to) in calls:
            actions['ModifyCall'].append(ModifyCall(frm, to))

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        stmts = map(lambda a: a.frm(), actions['ModifyStatement'])
        actions['ModifyCall'] = []
        for stmt in stmts:
            ModifyCall.detect_all_in_modified_statement(patch, stmt, actions)

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm(self):
        return self.__frm
    def to(self):
        return self.__to

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})

class ReplaceCallTarget(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['from'])
        after_call = after.find(jsn['to'])
        assert not before_call is None
        assert not after_call is None
        return ReplaceCallTarget(before_call, after_call)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = actions['ModifyCall']
        l = filter(lambda a: not a.frm().function().equivalent(a.to().function()), l)
        l = filter(lambda a: a.frm().arguments().equivalent(a.to().arguments()), l)
        actions['ReplaceCallTarget'] =\
            [ReplaceCallTarget(a.frm(), a.to()) for a in l]

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def frm_target(self):
        return self.__frm.function()
    def to_target(self):
        return self.__to.function()

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})

class ModifyCallArgs(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        assert not before_call is None
        assert not after_call is None
        return ModifyCallArgs(before_call, after_call)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = actions['ModifyCall']
        l = filter(lambda a: a.frm().function().equivalent(a.to().function()), l)
        l = filter(lambda a: not a.frm().arguments().equivalent(a.to().arguments()), l)
        actions['ModifyCallArgs'] =\
            [ModifyCallArgs(a.frm(), a.to()) for a in l]

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def frm_args(self):
        return self.__frm.arguments()
    def to_args(self):
        return self.__to.arguments()

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})

class InsertCallArg(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        arg = after.find(jsn['arg'])
        assert not before_call is None
        assert not after_call is None
        assert not arg is None
        return InsertCallArg(before_call, after_call, arg)

    # detects whether a single argument added to "before" yields "to"
    # returns the argument, if one can be found, else None is returned
    @staticmethod
    def detect_one(frm, to):
        frm = frm.contents()
        to = to.contents()

        # "To" must be one unit longer than "From"
        if len(to) != (len(frm) + 1):
            return None

        # Ensure order is preserved
        arg = None
        i = k = 0
        while i < len(frm):
            if not frm[i].equivalent(to[i + k]):
                if offset == 1:
                    return None
                arg = to[i + k]
                k = 1
            else:
                i += 1

        # check if the (single) new argument was appended
        if arg is None:
            arg = to[-1]

        # return inserted arg
        return (frm, to, arg)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyCallArgs'])
        l = map(star(lambda frm,to: InsertCallArg.detect_one(frm, to)), l)
        l = filter(lambda arg: not arg is None, l)
        actions['InsertCallArg'] = \
            [InsertCallArg(frm, to, arg) for (frm, to, arg) in l]

    def __init__(self, frm, to, arg):
        self.__frm = frm
        self.__to = to
        self.__arg = arg

    def from_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def arg(self):
        return self.__arg

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number(), \
                                'arg': self.__arg.number()})

class RemoveCallArg(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        arg = before.find(jsn['arg'])
        assert not before_call is None
        assert not after_call is None
        assert not arg is None
        return RemoveCallArg(before_call, after_call, arg)

    @staticmethod
    def detect_one(frm, to):
        return InsertCallArg.detect_one(to, frm)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyCallArgs'])
        l = map(star(lambda frm,to: RemoveCallArg.detect_one(frm, to)), l)
        l = filter(lambda arg: not arg is None, l)
        actions['RemoveCallArg'] = \
            [RemoveCallArg(frm, to, arg) for (frm, to, arg) in l]

    def __init__(self, frm, to, arg):
        self.__frm = frm
        self.__to = to
        self.__arg = arg

    def from_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def arg(self):
        return self.__arg

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number(), \
                                'arg': self.__arg.number()})

class ReplaceCallArg(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before_call'])
        after_call = after.find(jsn['after_call'])
        before_arg = before.find(jsn['before_arg'])
        after_arg = after.find(jsn['after_arg'])
        assert not before_call is None
        assert not after_call is None
        assert not before_arg is None
        assert not after_arg is None
        return ReplaceCallArg(before_call, after_call, before_arg, after_arg)

    @staticmethod
    def detect_one(frm, to):
        if len(to) != len(frm):
            return None

        args = None
        replaced = False
        for (a, b) in zip(frm.contents(), to.contents()):
            if not a.equivalent(b):
                if replaced:
                    return None
                args = (a, b)
                replaced = True
        return (frm, to, args[0], args[1])

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyCallArgs'])
        l = map(star(lambda frm,to: ReplaceCallArg.detect_one(frm, to)), l)
        l = filter(lambda arg: not arg is None, l)
        actions['ReplaceCallArg'] = [ReplaceCallArg(frm_call, to_call, frm_arg, to_arg) \
                                     for (frm_call, to_call, frm_arg, to_arg) in l]

    def __init__(self, frm_call, to_call, frm_arg, to_arg):
        self.__frm_call = frm_call
        self.__to_call = to_call
        self.__frm_arg = frm_arg
        self.__to_arg = to_arg

    def frm_call(self):
        return self.__frm_call
    def to_call(self):
        return self.__to_call
    def frm_arg(self):
        return self.__frm_arg
    def to_arg(self):
        return self.__to_arg

    def to_json(self):
        return super().to_json({'before_call': self.__frm_call.number(), \
                                'after_call': self.__to_call.number(), \
                                'before_arg': self.__frm_arg.number(), \
                                'after_arg': self.__to_arg.number()})

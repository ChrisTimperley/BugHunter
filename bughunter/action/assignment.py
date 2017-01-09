from bughunter.action.core import *
import cgum.statement

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

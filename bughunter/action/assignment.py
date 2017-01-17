from bughunter.action.core import *
import cgum.statement

class ModifyAssignment(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ModifyAssignment, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = [a.frm() for a in actions['ModifyStatement'] \
                    if isinstance(a.frm(), cgum.statement.ExprStatement)]
        assigns = []
        for bef in modified:
            assigns += \
                bef.collect(lambda n: isinstance(n, cgum.expression.Assignment))
        assigns = [(frm, patch.was_is(frm)) for frm in assigns]
        actions['ModifyAssignment'] = \
            [ModifyAssignment(frm, to) for (frm, to) in assigns if not to is None]

    def parts(self):
        return [self.to()]

class ReplaceAssignmentLHS(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceAssignmentLHS, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = [(a.frm(), a.to()) for a in actions['ModifyAssignment']]
        l = [(frm, to) for (frm, to) in l \
             if frm.op().equivalent(to.op())]
        l = [(frm, to) for (frm, to) in l \
             if not frm.lhs().equivalent(to.lhs())]
        l = [(frm, to) for (frm, to) in l \
             if frm.rhs().equivalent(to.rhs())]
        actions['ReplaceAssignmentLHS'] = \
            [ReplaceAssignmentLHS(frm, to) for (frm, to) in l]

    def frm_assignment(self):
        return self.frm()
    def to_assignment(self):
        return self.to()
    def frm_lhs(self):
        return self.frm_assignment().lhs()
    def to_lhs(self):
        return self.to_assignment().lhs()

    def parts(self):
        return [self.to_lhs()]

class ReplaceAssignmentRHS(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceAssignmentRHS, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = [(a.frm(), a.to()) for a in actions['ModifyAssignment']]
        l = [(frm, to) for (frm, to) in l \
             if frm.op().equivalent(to.op())]
        l = [(frm, to) for (frm, to) in l \
             if frm.lhs().equivalent(to.lhs())]
        l = [(frm, to) for (frm, to) in l \
             if not frm.rhs().equivalent(to.rhs())]
        actions['ReplaceAssignmentRHS'] = \
            [ReplaceAssignmentRHS(frm, to) for (frm, to) in l]

    def frm_assignment(self):
        return self.frm()
    def to_assignment(self):
        return self.to()
    def frm_rhs(self):
        return self.frm_assignment().rhs()
    def to_rhs(self):
        return self.to_assignment().rhs()

    def parts(self):
        return [self.to_rhs()]

class ReplaceAssignmentOp(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceAssignmentOp, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = [(a.frm(), a.to()) for a in actions['ModifyAssignment']]
        l = [(frm, to) for (frm, to) in l \
             if not frm.op().equivalent(to.op())]
        l = [(frm, to) for (frm, to) in l \
             if frm.lhs().equivalent(to.lhs())]
        l = [(frm, to) for (frm, to) in l \
             if frm.rhs().equivalent(to.rhs())]
        actions['ReplaceAssignmentOp'] = \
            [ReplaceAssignmentOp(frm, to) for (frm, to) in l]

    def frm_assignment(self):
        return self.frm()
    def to_assignment(self):
        return self.to()
    def frm_op(self):
        return self.frm_assignment().op()
    def to_op(self):
        return self.to_assignment().op()

    def parts(self):
        return [self.to_op()]

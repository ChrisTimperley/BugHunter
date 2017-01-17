from bughunter.action.core import *
from bughunter.action.basic import ModifyStatement

class ReplaceSwitchExpression(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceSwitchExpression, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = map(ModifyStatement.to, actions['ModifyStatement'])
        modified = filter(lambda s: isinstance(s, cgum.statement.Switch), modified)
        l = map(lambda s: (patch.is_was(s), s), modified)
        l = filter(star(lambda frm,to: not frm.expr().equivalent(to.expr())), l)
        actions['ReplaceSwitchExpression'] =\
            [ReplaceSwitchExpression(frm, to) for (frm, to) in l]

    def from_expr(self):
        return self.frm().expr()
    def to_expr(self):
        return self.to().expr()

    def parts(self):
        return [self.to_expr()]

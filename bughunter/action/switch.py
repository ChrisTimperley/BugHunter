from bughunter.action.core import *
from bughunter.action.basic import ModifyStatement

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

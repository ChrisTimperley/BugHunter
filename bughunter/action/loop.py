from bughunter.action.core import *
import cgum.statement

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

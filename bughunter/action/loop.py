from bughunter.action.core import *
import cgum.statement

class ReplaceLoopGuard(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceLoopGuard, jsn, before, after)

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
        
    def from_guard(self):
        return self.frm().condition()
    def to_guard(self):
        return self.to().condition()

    def parts(self):
        return [self.to_guard()]

class ReplaceLoopBody(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceLoopBody, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: isinstance(s, cgum.statement.Loop), stmts_aft)
        l = map(lambda s: (patch.is_was(s), s), l)
        l = filter(star(lambda frm,to: not frm is None), l)
        l = filter(star(lambda frm,to: not frm.body().equivalent(to.body())), l)
        actions['ReplaceLoopBody'] =\
            [ReplaceLoopBody(frm, to) for (frm, to) in l]

    def from_body(self):
        return self.frm().body()
    def to_body(self):
        return self.to().body()

    def parts(self):
        return [self.to_body()]

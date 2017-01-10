from bughunter.action.core import *
import cgum.statement

# Detects a deleted statement
class DeleteStatement(RepairAction):
    LABEL = "DeleteStatement"

    @staticmethod
    def from_json(jsn, before, after):
        stmt = before.find(jsn['deleted'])
        assert not stmt is None
        return DeleteStatement(stmt)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: patch.was_is(s) is None, stmts_bef) # all deletes

        # remove redundant edits
        tmp = []
        for s in l:
            if patch.was_is(s.parent()) is None: # parent was deleted
                # if the parent is a block, and the parent of that block was NOT deleted,
                # then mark this statement as a deleted statement (to counteract the
                # annoying behaviour of MOVE)
                if isinstance(s.parent(), cgum.statement.Block):
                    if not patch.was_is(s.parent().parent()) is None:
                        tmp.append(s)
            else:
                tmp.append(s)
        l = tmp

        actions['DeleteStatement'] = [DeleteStatement(s) for s in l]

    def __init__(self, stmt):
        self.__stmt = stmt
    
    def statement(self):
        return self.__stmt

    def to_json(self):
        return super().to_json({'deleted': self.__stmt.number()})

# Detects an inserted statement
class InsertStatement(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        stmt = after.find(jsn['inserted'])
        parent = after.find(jsn['parent_after'])
        assert not stmt is None
        assert not parent is None
        return InsertStatement(stmt, parent)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: patch.is_was(s) is None, stmts_aft) # all inserts
        l = map(lambda s: (s, s.parent()), l) # get parents
        l = filter(star(lambda s,p: not patch.is_was(p) is None), l) # redundancy
        actions["InsertStatement"] =\
            [InsertStatement(s, p) for (s, p) in l]

    def __init__(self, stmt, parent):
        self.__stmt = stmt
        self.__parent = parent

    def statement(self):
        return self.__stmt
    def parent(self):
        return self.__parent

    def to_json(self):
        return super().to_json({'inserted': self.__stmt.number(),\
                                'parent_after': self.__parent.number()})

# Detects that a statement has been modified (but neither deleted nor inserted)
class ModifyStatement(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        stmt_frm = before.find(jsn['from'])
        stmt_to = after.find(jsn['to'])
        assert not stmt_frm is None
        assert not stmt_to is None
        return ModifyStatement(stmt_frm, stmt_to)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        groups = {}
        actions['ModifyStatement'] = []
        for edit in patch.actions():
            nearest_stmt_to_subject(edit, patch, groups)
        for (stmt_bef, edits) in groups.items():
            #print("modified: %s" % stmt_bef)
            stmt_aft = patch.was_is(stmt_bef)

            # ensure the statement isn't deleted
            if stmt_aft is None:
                #print("statement was deleted - ignoring")
                continue
            
            a = ModifyStatement(stmt_bef, stmt_aft)
            actions['ModifyStatement'].append(a)

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm(self):
        return self.__frm
    def to(self):
        return self.__to

    def to_json(self):
        return super().to_json({'from': self.__frm.number(), \
                                'to': self.__to.number()})

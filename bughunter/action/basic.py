from bughunter.action.core import *
import cgum.statement

# Detects a deleted statement
class DeleteStatement(DeleteRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return DeleteRepairAction.from_json(DeleteStatement, jsn, before, after)

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

    def statement(self):
        return self.deleted()

    def parts(self):
        return []

# Detects an inserted statement
class InsertStatement(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        stmt = after.find(jsn['stmt'])
        parent = after.find(jsn['parent'])

        assert not stmt is None
        assert not parent is None
   
        assert stmt.hash() == jsn['stmt_hash']
        assert parent.hash() == jsn['parent_hash']

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

    # parent in P'
    def parent(self):
        return self.__parent

    def parts(self):
        return [self.statement()]

    def to_json(self):
        return super().to_json({
            'stmt': self.__stmt.number(),
            'stmt_hash': self.__stmt.hash(),
            'parent': self.__parent.number(),
            'parent_hash': self.__parent.hash()
        })

# Detects that a statement has been modified (but neither deleted nor inserted)
class ModifyStatement(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ModifyStatement, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        groups = {}
        actions['ModifyStatement'] = []
        for edit in patch.actions():
            nearest_stmt_to_subject(edit, patch, groups)
        for (stmt_bef, edits) in groups.items():
            stmt_aft = patch.was_is(stmt_bef)

            # ensure the statement isn't deleted
            if stmt_aft is None:
                continue
            
            a = ModifyStatement(stmt_bef, stmt_aft)
            actions['ModifyStatement'].append(a)

    def parts(self):
        return [self.to()]

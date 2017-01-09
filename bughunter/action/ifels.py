from bughunter.action.core import *
from bughunter.action.basic import ModifyStatement, InsertStatement, DeleteStatement
import cgum.statement

#####
# GROUP: If-Statement-Related
#####
class WrapStatement(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        stmt_bef = before.find(jsn['stmt_before'])
        wrapper = after.find(jsn['wrapper'])
        assert not stmt_bef is None
        assert not wrapper is None
        return WrapStatement(stmt_bef, wrapper)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = map(ModifyStatement.to, actions['ModifyStatement'])
        inserted = map(InsertStatement.statement, actions['InsertStatement'])

        #l = filter(lambda s: isinstance(s, cgum.statement.IfElse), stmts_aft)
        #print("W0: %d" % len(list(l)))
        #l = filter(lambda s: patch.is_was(s) is None, l)
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), inserted) # if stmt
        l = filter(lambda s: s.els() is None, l) # no else branch
        l = list(l)

        # ensure then branch is in Pa
        tmp = []
        for s in l:
            if isinstance(s.then(), cgum.statement.Block):
                # ensure the statement wasn't modified
                if len(s.then().contents()) == 1 and (not s.then() in modified):
                    then = s.then().contents()[0]
                else:
                    continue
            else:
                then = s.then()
            if not patch.is_was(then) is None:
                tmp.append(s)
        l = tmp
        actions['WrapStatement'] =\
            [WrapStatement(patch.is_was(s.then()), s) for s in l]

    def __init__(self, stmt, wrapper, guard):
        self.__stmt = stmt
        self.__wrapper = wrapper

    def guard(self):
        return self.__wrapper.condition()

    def to_json(self):
        return super().to_json({'stmt_before': self.__stmt.number(), \
                                'wrapper': self.__wrapper.number()})

class UnwrapStatement(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        frm = before.find(jsn['before'])
        to = after.find(jsn['after'])
        assert not frm is None
        assert not to is None
        return UnwrapStatement(frm, to)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        deleted = map(DeleteStatement.statement, actions['DeleteStatement'])
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), deleted) # if stmt
        l = filter(lambda s: s.els() is None, l) # no else branch

        # ensure the statement survived
        tmp = []
        for s in l:
            if isinstance(s.then(), cgum.statement.Block):
                if len(s.then().contents()) == 1:
                    then = s.then().contents()[0]
                else:
                    continue
            else:
                then = s.then()
            if not patch.is_was(then) is None:
                tmp.append(s)
        l = tmp
        actions['UnwrapStatement'] =\
            [UnwrapStatement(s, patch.was_is(s.then())) for s in l]

    def __init__(self, stmt, to):
        self.__stmt = stmt
        self.__to = to

    def to_json(self):
        return super().to_json({'before': self.__stmt.number(), \
                                'after': self.__to.number()})

# Action: Replace If Condition
class ReplaceIfCondition(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_if = before.find(jsn['before_if'])
        after_if = after.find(jsn['after_if'])
        assert not before_if is None
        assert not after_if is None
        return ReplaceIfCondition(before_if, after_if)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = map(ModifyStatement.to, actions['ModifyStatement'])
        modified = filter(lambda s: isinstance(s, cgum.statement.IfElse), modified)
        l = map(lambda s: (patch.is_was(s), s), modified)
        l = [(frm, to) for (frm, to) in l if not frm.condition().equivalent(to.condition())]
        actions['ReplaceIfCondition'] =\
            [ReplaceIfCondition(frm, to) for (frm, to) in l]

    def __init__(self, from_stmt, to_stmt):
        self.__from_stmt = from_stmt
        self.__to_stmt = to_stmt

    def from_guard(self):
        return self.__from_stmt.condition()
    def to_guard(self):
        return self.__to_stmt.condition()

    def to_json(self):
        return super().to_json({'before_if': self.__from_stmt.number(), \
                                'after_if': self.__to_stmt.number()})

class ReplaceThenBranch(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_if = before.find(jsn['before_if'])
        after_if = after.find(jsn['after_if'])
        assert not before_if is None
        assert not after_if is None
        return ReplaceThenBranch(before_if, after_if)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), stmts_aft) # ifs in P 
        l = map(lambda s: (patch.is_was(s), s), l)
        l = filter(star(lambda frm,to: not frm is None), l)
        l = filter(star(lambda frm,to: not frm.then().equivalent(to.then())), l)
        actions['ReplaceThenBranch'] =\
            [ReplaceThenBranch(frm, to) for (frm, to) in l]

    def __init__(self, frm_stmt, to_stmt):
        self.__frm_stmt = frm_stmt
        self.__to_stmt = to_stmt

    def from_then(self):
        return self.__frm_stmt.then()
    def to_then(self):
        return self.__to_stmt.then()

    def to_json(self):
        return super().to_json({'before_if': self.__frm_stmt.number(),
                                'after_if': self.__to_stmt.number()})

class ReplaceElseBranch(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_if = before.find(jsn['before_if'])
        after_if = after.find(jsn['after_if'])
        assert not before_if is None
        assert not after_if is None
        return ReplaceElseBranch(before_if, after_if)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), stmts_aft) # ifs in P'
        l = map(lambda s: (patch.is_was(s), s), l)
        l = filter(star(lambda frm,to: not frm is None), l)

        # ensure that an else statement couldn't have been inserted
        l = filter(star(lambda frm,to: not frm.els() is None), l)

        # ensure that there is an else statement in the after version of the IfThen
        l = filter(star(lambda frm,to: not to.els() is None), l)

        # check that the else statements differ
        l = filter(star(lambda frm,to: frm.els().equivalent(to.els())), l)

        actions['ReplaceElseBranch'] =\
            [ReplaceElseBranch(frm, to) for (frm, to) in l]

    def __init__(self, frm_stmt, to_stmt):
        self.__frm_stmt = frm_stmt
        self.__to_stmt = to_stmt

    def from_els(self):
        return self.__frm_stmt.els()
    def to_els(self):
        return self.__to_stmt.els()

    def to_json(self):
        return super().to_json({'before_if': self.__frm_stmt.number(),
                                'after_if': self.__to_stmt.number()})

class RemoveElseBranch(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_if = before.find(jsn['before_if'])
        after_if = after.find(jsn['after_if'])
        assert not before_if is None
        assert not after_if is None
        return RemoveElseBranch(before_if, after_if)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), stmts_aft) # ifs in P'
        l = map(lambda s: (patch.is_was(s), s), l)

        # Check the IfElse statement was in P
        l = filter(star(lambda frm,to: not frm is None), l)

        # Check that there was an else branch in P, but not P'
        l = filter(star(lambda frm,to: (not frm.els() is None) and (to.els() is None)), l)

        actions['RemoveElseBranch'] =\
            [RemoveElseBranch(frm, to)  for (frm, to) in l]

    def __init__(self, frm_stmt, to_stmt):
        self.__frm_stmt = frm_stmt
        self.__to_stmt = to_stmt

    def from_els(self):
        return self.__frm_stmt.els()

    def to_json(self):
        return super().to_json({'before_if': self.__frm_stmt.number(),
                                'after_if': self.__to_stmt.number()})

# Action: Insert Else Branch
class InsertElseBranch(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_if = before.find(jsn['before_if'])
        after_if = after.find(jsn['after_if'])
        assert not before_if is None
        assert not after_if is None
        return InsertElseBranch(before_if, after_if)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = actions['ModifyStatement']
        modified = filter(lambda a: isinstance(a.to(), cgum.statement.IfElse), modified)
        modified = map(lambda a: (a.frm(), a.to()), modified)
        l = filter(star(lambda frm,to: (frm.els() is None and (not to.els() is None))),\
                   modified)
        l = filter(star(lambda _,to: not isinstance(to.els(), cgum.statement.IfElse)), l)
        actions['InsertElseBranch'] =\
            [InsertElseBranch(frm, to) for (frm, to) in l]

    def __init__(self, from_stmt, to_stmt):
        self.__from = from_stmt
        self.__to = to_stmt

    def els(self):
        return self.__to.els()

    def to_json(self):
        return super().to_json({'before_if': self.__from.number(),
                                'after_if': self.__to.number()})

# Action: Insert Else-If Branch
class InsertElseIfBranch(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_if = before.find(jsn['before_if'])
        after_if = after.find(jsn['after_if'])
        assert not before_if is None
        assert not after_if is None
        return InsertElseIfBranch(before_if, after_if)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = actions['ModifyStatement']
        modified = filter(lambda a: isinstance(a.to(), cgum.statement.IfElse), modified)
        modified = map(lambda a: (a.frm(), a.to()), modified)

        l = filter(star(lambda frm,to: (frm.els() is None) and (not to.els() is None)),\
                    modified)
        l = filter(star(lambda _,to: isinstance(to.els(), cgum.statement.IfElse)), l)
        actions['InsertElseIfBranch'] =\
            [InsertElseIfBranch(frm, to) for (frm, to) in l]

    def __init__(self, from_stmt, to_stmt):
        self.__from = from_stmt
        self.__to = to_stmt

    def elsif(self):
        return self.__to.els()

    def to_json(self):
        return super().to_json({'before_if': self.__from.number(),
                                'after_if': self.__to.number()})

class GuardElseBranch(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_if = before.find(jsn['before_if'])
        after_if = after.find(jsn['after_if'])
        assert not before_if is None
        assert not after_if is None
        return GuardElseBranch(before_if, after_if)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        # Find all inserted statements without any else branch which belong to an
        # IfThen statement
        inserted = [a.statement() for a in actions['InsertStatement']]
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), inserted)
        l = filter(lambda s: s.els() is None, l)
        l = filter(lambda s: isinstance(s.parent(), cgum.statement.IfElse) or \
                             (isinstance(s.parent(), cgum.statement.Block) and \
                              isinstance(s.parent().parent(), cgum.statement.IfElse)), l)

        # Ensure that the the branch of this IfThen was formerly the else branch
        # of its parent IfThen
        tmp = []
        for s in l:
            before_branch = patch.is_was(s.then())
   
            # fetch the parent IfThen of this statement
            if isinstance(s.parent(), cgum.statement.Block):
                parent_if = s.parent().parent()
            else:
                parent_if = s.parent()
            assert isinstance(parent_if, cgum.statement.IfThen)

            before_else = patch.is_was(parent_if).els()
            if before_branch == before_else:
                tmp.append(s)
        l = tmp

        actions['GuardElseBranch'] =\
            [GuardElseBranch(patch.is_was(s.parent()), s.parent()) for s in l]

    def __init__(self, frm_if, to_if):
        self.__frm_if = frm_if
        self.__to_if = to_if

    def from_els(self):
        return self.__from_if.els()
    def to_els(self):
        return self.__to_if.els()
    def guard(self):
        return self.from_els().condition()

    def to_json(self):
        return super().to_json({'before_if': self.__frm_if.number(),
                                'after_if': self.__to_if.number()})

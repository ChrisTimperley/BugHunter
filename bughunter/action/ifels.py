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
                tmp.append((then, s))
        l = tmp
        actions['WrapStatement'] =\
            [WrapStatement(patch.is_was(then), s) for (then, s) in l]

    def __init__(self, stmt, wrapper):
        self.__stmt = stmt
        self.__wrapper = wrapper

    def guard(self):
        return self.__wrapper.condition()

    def parts(self):
        return [self.guard()]

    def to_json(self):
        return super().to_json({'stmt_before': self.__stmt.number(), \
                                'wrapper': self.__wrapper.number()})

class UnwrapStatement(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(UnwrapStatement, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        deleted = map(DeleteStatement.statement, actions['DeleteStatement'])
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), deleted) # if stmt
        l = filter(lambda s: s.els() is None, l) # no else branch

        # ensure the statement survived
        tmp = []
        for s in l:
            # get the then statement
            if isinstance(s.then(), cgum.statement.Block):
                if len(s.then().contents()) == 1:
                    then = s.then().contents()[0]
                else:
                    continue
            else:
                then = s.then()

            # Ensure the then statement survived
            if not patch.was_is(then) is None:
                tmp.append((s, then))
        l = tmp
        actions['UnwrapStatement'] =\
            [UnwrapStatement(s, then) for (s, then) in l]

    def parts(self):
        return []

# Action: Replace If Condition
class ReplaceIfCondition(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceIfCondition, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        modified = map(ModifyStatement.to, actions['ModifyStatement'])
        modified = filter(lambda s: isinstance(s, cgum.statement.IfElse), modified)
        l = map(lambda s: (patch.is_was(s), s), modified)
        l = [(frm, to) for (frm, to) in l if not frm.condition().equivalent(to.condition())]
        actions['ReplaceIfCondition'] =\
            [ReplaceIfCondition(frm, to) for (frm, to) in l]

    def from_guard(self):
        return self.frm().condition()
    def to_guard(self):
        return self.to().condition()

    def parts(self):
        return [self.to_guard()]

class ReplaceThenBranch(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceThenBranch, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), stmts_aft) # ifs in P 
        l = map(lambda s: (patch.is_was(s), s), l)
        l = filter(star(lambda frm,to: not frm is None), l)
        l = filter(star(lambda frm,to: not frm.then().equivalent(to.then())), l)
        actions['ReplaceThenBranch'] =\
            [ReplaceThenBranch(frm, to) for (frm, to) in l]

    def from_then(self):
        return self.frm().then()
    def to_then(self):
        return self.to().then()

    def parts(self):
        return [self.to_then()]

class ReplaceElseBranch(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceElseBranch, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        # find all IfElse in P' that are also in P
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), stmts_aft)
        l = map(lambda s: (patch.is_was(s), s), l)
        l = filter(star(lambda frm,to: not frm is None), l)

        # ensure that an else statement couldn't have been inserted
        l = filter(star(lambda frm,to: not frm.els() is None), l)

        # ensure that there is an else statement in the after version of the IfThen
        l = filter(star(lambda frm,to: not to.els() is None), l)

        # check that the else statements differ
        l = filter(star(lambda frm,to: not frm.els().equivalent(to.els())), l)

        actions['ReplaceElseBranch'] =\
            [ReplaceElseBranch(frm, to) for (frm, to) in l]

    def from_els(self):
        return self.frm().els()
    def to_els(self):
        return self.to().els()

    def parts(self):
        return [self.to_els()]

class RemoveElseBranch(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(RemoveElseBranch, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        # find all IfElse in P' that are also in P
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), stmts_aft) # ifs in P'
        l = map(lambda s: (patch.is_was(s), s), l)
        l = filter(star(lambda frm,to: not frm is None), l)

        # Check that there was an else branch in P, but not P'
        l = filter(star(lambda frm,to: (not frm.els() is None) and (to.els() is None)), l)

        actions['RemoveElseBranch'] =\
            [RemoveElseBranch(frm, to)  for (frm, to) in l]

   def from_els(self):
        return self.frm().els()

    def parts(self):
        return []

# Action: Insert Else Branch
class InsertElseBranch(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(InsertElseBranch, jsn, before, after)

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

    def els(self):
        return self.to().els()

    def parts(self):
        return [self.els()]

# Action: Insert Else-If Branch
class InsertElseIfBranch(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(InsertElseIfBranch, jsn, before, after)

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

    def elsif(self):
        return self.to().els()

    def parts(self):
        return [self.elsif()]

class GuardElseBranch(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(GuardElseBranch, jsn, before, after)

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
            # ensure branch existed in P
            before_branch = patch.is_was(s.then())
            if before_branch is None:
                continue
   
            # fetch the parent IfThen of the inserted IfThen statement
            if isinstance(s.parent(), cgum.statement.Block):
                parent_if = s.parent().parent()
            else:
                parent_if = s.parent()
            assert isinstance(parent_if, cgum.statement.IfElse)

            # check that the else branch of the parent IfThen in P is the
            # same as the then branch of the inserted IfThen in P'
            before_else = patch.is_was(parent_if).els()
            if before_branch == before_else:
                tmp.append((patch.is_was(parent_if), parent_if))
        l = tmp

        actions['GuardElseBranch'] =\
            [GuardElseBranch(frm, to) for (frm, to) in l]

    def from_els(self):
        return self.frm().els()
    def to_els(self):
        return self.to().els()
    def guard(self):
        return self.to_els().condition()

    def parts(self):
        return [self.guard()]

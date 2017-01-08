#!/usr/bin/python3
import cgum
import pprint
import cgum.diff

def star(f):
      return lambda args: f(*args)

# Finds the nearest ancestor to a given node (including the node itself) that
# satisfies a given predicate over an AST node
def matching_ancestor(node, predicate):
    while (not node is None) and not predicate(node):
        node = node.parent()
    return node

def nearest_stmt(node):
    return matching_ancestor(node, lambda n: isinstance(n, cgum.statement.Statement))

# Finds the corresponding node in P for the nearest statement to the subject
def nearest_stmt_to_subject(edit, patch, groups):
    stmts = []

    if type(edit) is cgum.diff.Insert:
        stmt = nearest_stmt(edit.inserted())
        if not stmt is None:
            stmts = [patch.is_was(stmt)]

    elif type(edit) is cgum.diff.Delete:
        stmts = [nearest_stmt(edit.deleted())]

    elif type(edit) is cgum.diff.Update:
        stmts = [nearest_stmt(edit.before())]

    elif type(edit) is cgum.diff.Move:
        stmt_from = nearest_stmt(edit.moved_from())

        stmt_to = nearest_stmt(edit.moved_to())
        if not stmt_to is None:
            stmt_to = patch.is_was(stmt_to)

        stmts = [stmt_from, stmt_to]

    for stmt in stmts:
        if not stmt is None:
            if not stmt in groups:
                groups[stmt] = []
            groups[stmt].append(edit)

class RepairAction(object):
    
    # Injects the type of the repair action into its JSON description
    def to_json(self, jsn):
        jsn['type'] = self.__class__.__name__
        return jsn

class RepairActionMiner(object):
    def __init__(self):
        self.__action_types = [DeleteStatement,
                               InsertStatement,
                               ModifyStatement,
                               WrapStatement,
                               UnwrapStatement,
                               ReplaceIfCondition,
                               ReplaceThenBranch,
                               ReplaceElseBranch,
                               RemoveElseBranch,
                               InsertElseBranch,
                               InsertElseIfBranch,
                               GuardElseBranch,
                               ReplaceSwitchExpression,
                               ReplaceLoopGuard,
                               ReplaceLoopBody,
                               #ModifyAssignment,
                               #ReplaceAssignmentRHS,
                               #ReplaceAssignmentLHS,
                               #ReplaceAssignmentOp,
                               ModifyCall,
                               ReplaceCallTarget,
                               ModifyCallArgs,
                               InsertCallArg,
                               RemoveCallArg,
                               ReplaceCallArg]

    # Returns a dict of all repair actions within a given AST, aggregated by
    # type
    def mine(self, patch):
        stmts_bef =\
            patch.before().collect(lambda n: isinstance(n, cgum.statement.Statement))
        stmts_aft =\
            patch.after().collect(lambda n: isinstance(n, cgum.statement.Statement))

        actions = {}
        for action_type in self.__action_types:
            action_type.detect(patch, stmts_bef, stmts_aft, actions)
        return actions

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
        assert not stmt is None
        return InsertStatement(stmt)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = filter(lambda s: patch.is_was(s) is None, stmts_aft) # all inserts
        l = map(lambda s: (s, s.parent()), l) # get parents
        l = filter(star(lambda s,p: not patch.is_was(p) is None), l) # redundancy
        actions[InsertStatement.LABEL] =\
            [InsertStatement(s, p) for (s, p) in l]

    def __init__(self, stmt, parent):
        self.__stmt = stmt
        self.__parent = parent

    def statement(self):
        return self.__stmt

    def to_json(self):
        return super().to_json({'inserted': self.__stmt.number()})

# Detects that a statement has been modified (but neither deleted nor inserted)
#
# TODO: handle serialisation of edits
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
            print("modified: %s" % stmt_bef)
            stmt_aft = patch.was_is(stmt_bef)

            # ensure the statement isn't deleted
            if stmt_aft is None:
                print("statement was deleted - ignoring")
                continue
            
            a = ModifyStatement(stmt_bef, stmt_aft, edits)
            actions['ModifyStatement'].append(a)

    def __init__(self, frm, to, edits):
        self.__frm = frm
        self.__to = to
        self.__edits = edits

    def frm(self):
        return self.__frm
    def to(self):
        return self.__to

    def to_json(self):
        return super().to_json({'from': self.__frm.number(), \
                                'to': self.__to.number()})

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
        l = filter(star(lambda frm,to: (frm.els() is None) != (to.els() is None) or frm.els().equivalent(to.els())), l) # else statements differ
        l = filter(star(lambda frm,to: not frm.els() is None), l) # not an insertion
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
        l = filter(star(lambda frm,to: not frm is None), l)
        l = filter(star(lambda frm,to: (frm.els() is None) != (to.els() is None) or frm.els().equivalent(to.els())), l) # else statements differ
        l = filter(star(lambda frm,to: to.els() is None), l) # deleted else branch
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
        modified = list(modified)
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
        inserted = [a.statement() for a in actions['InsertStatement']]
        l = filter(lambda s: isinstance(s, cgum.statement.IfElse), inserted) # add If
        l = filter(lambda s: s.els() is None, l) # no else branch

        # then branch used to be the else branch of the parent
        tmp = []
        for s in l:
            before_branch = patch.is_was(s.then())
            before_else = patch.is_was(s.parent()).els()
            if before_branch == before_else:
                tmp.append(s)
        l = tmp
        actions['GuardElseBranch'] =\
            [GuardElseBranch(patch.is_was(s.parent()), s.parent()) for s in l]

    def __init__(self, frm_if, to_if):
        self.__frm_if = frm_if
        self.__to_if = to_if

    def guard(self):
        return self.__to_if.condition()

    def to_json(self):
        return super().to_json({'before_if': self.__frm_if.number(),
                                'after_if': self.__to_if.number()})

####
# GROUP: Switch-Related Actions
####
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
 
## ASSIGNMENT-RELATED OPERATORS
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

## FUNCTION-CALL-RELATED ACTIONS
class ModifyCall(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        assert not before_call is None
        assert not after_call is None
        return ModifyCall(before_call, after_call)

    @staticmethod
    def detect_all_in_modified_statement(patch, stmt, actions):
        calls = stmt.find_all(lambda n: isinstance(n, cgum.expression.FunctionCall))
        calls = map(lambda c: (c, patch.was_is(c)), calls)
        calls = filter(star(lambda frm,to: not to is None), calls)
        calls = filter(star(lambda frm,to: not frm.equivalent(to)), calls)
        for (frm, to) in calls:
            actions['ModifyCall'].append(ModifyCall(frm, to))

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        stmts = map(lambda a: a.frm(), actions['ModifyStatement'])
        actions['ModifyCall'] = []
        for stmt in stmts:
            ModifyCall.detect_all_in_modified_statement(patch, stmt, actions)

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

class ReplaceCallTarget(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['from'])
        after_call = after.find(jsn['to'])
        assert not before_call is None
        assert not after_call is None
        return ReplaceCallTarget(before_call, after_call)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = actions['ModifyCall']
        l = filter(lambda a: not a.frm().function().equivalent(a.to().function()), l)
        l = filter(lambda a: a.frm().arguments().equivalent(a.to().arguments()), l)
        actions['ReplaceCallTarget'] =\
            [ReplaceCallTarget(a.frm(), a.to()) for a in l]

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def frm_target(self):
        return self.__frm.function()
    def to_target(self):
        return self.__to.function()

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})

class ModifyCallArgs(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        assert not before_call is None
        assert not after_call is None
        return ModifyCallArgs(before_call, after_call)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = actions['ModifyCall']
        l = filter(lambda a: a.frm().function().equivalent(a.to().function()), l)
        l = filter(lambda a: not a.frm().arguments().equivalent(a.to().arguments()), l)
        actions['ModifyCallArgs'] =\
            [ModifyCallArgs(a.frm(), a.to()) for a in l]

    def __init__(self, frm, to):
        self.__frm = frm
        self.__to = to

    def frm_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def frm_args(self):
        return self.__frm.arguments()
    def to_args(self):
        return self.__to.arguments()

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number()})

class InsertCallArg(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        arg = after.find(jsn['arg'])
        assert not before_call is None
        assert not after_call is None
        assert not arg is None
        return InsertCallArg(before_call, after_call, arg)

    # detects whether a single argument added to "before" yields "to"
    # returns the argument, if one can be found, else None is returned
    @staticmethod
    def detect_one(frm, to):
        frm = frm.contents()
        to = to.contents()

        # "To" must be one unit longer than "From"
        if len(to) != (len(frm) + 1):
            return None

        # Ensure order is preserved
        arg = None
        i = k = 0
        while i < len(frm):
            if not frm[i].equivalent(to[i + k]):
                if offset == 1:
                    return None
                arg = to[i + k]
                k = 1
            else:
                i += 1

        # check if the (single) new argument was appended
        if arg is None:
            arg = to[-1]

        # return inserted arg
        return (frm, to, arg)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyCallArgs'])
        l = map(star(lambda frm,to: InsertCallArg.detect_one(frm, to)), l)
        l = filter(lambda arg: not arg is None, l)
        actions['InsertCallArg'] = \
            [InsertCallArg(frm, to, arg) for (frm, to, arg) in l]

    def __init__(self, frm, to, arg):
        self.__frm = frm
        self.__to = to
        self.__arg = arg

    def from_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def arg(self):
        return self.__arg

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number(), \
                                'arg': self.__arg.number()})

class RemoveCallArg(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
        arg = before.find(jsn['arg'])
        assert not before_call is None
        assert not after_call is None
        assert not arg is None
        return RemoveCallArg(before_call, after_call, arg)

    @staticmethod
    def detect_one(frm, to):
        return InsertCallArg.detect_one(to, frm)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyCallArgs'])
        l = map(star(lambda frm,to: RemoveCallArg.detect_one(frm, to)), l)
        l = filter(lambda arg: not arg is None, l)
        actions['RemoveCallArg'] = \
            [RemoveCallArg(frm, to, arg) for (frm, to, arg) in l]

    def __init__(self, frm, to, arg):
        self.__frm = frm
        self.__to = to
        self.__arg = arg

    def from_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def arg(self):
        return self.__arg

    def to_json(self):
        return super().to_json({'before': self.__frm.number(), \
                                'after': self.__to.number(), \
                                'arg': self.__arg.number()})

class ReplaceCallArg(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        before_call = before.find(jsn['before_call'])
        after_call = after.find(jsn['after_call'])
        before_arg = before.find(jsn['before_arg'])
        after_arg = after.find(jsn['after_arg'])
        assert not before_call is None
        assert not after_call is None
        assert not before_arg is None
        assert not after_arg is None
        return ReplaceCallArg(before_call, after_call, before_arg, after_arg)

    @staticmethod
    def detect_one(frm, to):
        if len(to) != len(frm):
            return None

        args = None
        replaced = False
        for (a, b) in zip(frm.contents(), to.contents()):
            if not a.equivalent(b):
                if replaced:
                    return None
                args = (a, b)
                replaced = True
        return (frm, to, args[0], args[1])

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = map(lambda a: (a.frm(), a.to()), actions['ModifyCallArgs'])
        l = map(star(lambda frm,to: ReplaceCallArg.detect_one(frm, to)), l)
        l = filter(lambda arg: not arg is None, l)
        actions['ReplaceCallArg'] = [ReplaceCallArg(frm_call, to_call, frm_arg, to_arg) \
                                     for (frm_call, to_call, frm_arg, to_arg) in l]

    def __init__(self, frm_call, to_call, frm_arg, to_arg):
        self.__frm_call = frm_call
        self.__to_call = to_call
        self.__frm_arg = frm_arg
        self.__to_arg = to_arg

    def frm_call(self):
        return self.__frm_call
    def to_call(self):
        return self.__to_call
    def frm_arg(self):
        return self.__frm_arg
    def to_arg(self):
        return self.__to_arg

    def to_json(self):
        return super().to_json({'before_call': self.__frm_call.number(), \
                                'after_call': self.__to_call.number(), \
                                'before_arg': self.__frm_arg.number(), \
                                'after_arg': self.__to_arg.number()})

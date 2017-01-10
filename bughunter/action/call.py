from bughunter.action.core import *
import cgum.statement
import cgum.expression

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
        before_call = before.find(jsn['before'])
        after_call = after.find(jsn['after'])
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
                if not arg is None:
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
        l = map(lambda a: (a.frm_args(), a.to_args()), actions['ModifyCallArgs'])
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
        l = map(lambda a: (a.frm_args(), a.to_args()), actions['ModifyCallArgs'])
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
        l = map(lambda a: (a.frm_args(), a.to_args()), actions['ModifyCallArgs'])
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

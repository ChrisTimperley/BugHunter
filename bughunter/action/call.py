from bughunter.action.core import *
import cgum.statement
import cgum.expression

class ModifyCall(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ModifyCall, jsn, before, after)

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

    def parts(self):
        return [self.to()]

class ReplaceCallTarget(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ReplaceCallTarget, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = actions['ModifyCall']
        l = filter(lambda a: not a.frm().function().equivalent(a.to().function()), l)
        l = filter(lambda a: a.frm().arguments().equivalent(a.to().arguments()), l)
        actions['ReplaceCallTarget'] =\
            [ReplaceCallTarget(a.frm(), a.to()) for a in l]

    def frm_call(self):
        return self.frm()
    def to_call(self):
        return self.to()
    def frm_target(self):
        return self.frm_call().function()
    def to_target(self):
        return self.to_call().function()

    def parts(self):
        return [self.to_target()]

class ModifyCallArgs(ReplaceRepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        return ReplaceRepairAction.from_json(ModifyCallArgs, jsn, before, after)

    @staticmethod
    def detect(patch, stmts_bef, stmts_aft, actions):
        l = actions['ModifyCall']
        l = filter(lambda a: a.frm().function().equivalent(a.to().function()), l)
        l = filter(lambda a: not a.frm().arguments().equivalent(a.to().arguments()), l)
        actions['ModifyCallArgs'] =\
            [ModifyCallArgs(a.frm(), a.to()) for a in l]

    def frm_call(self):
        return self.frm()
    def to_call(self):
        return self.to()
    def frm_args(self):
        return self.frm_call().arguments()
    def to_args(self):
        return self.to_call().arguments()

    def parts(self):
        return [self.to_args()]

class InsertCallArg(RepairAction):
    @staticmethod
    def from_json(jsn, before, after):
        frm = before.find(jsn['from'])
        to = after.find(jsn['to'])
        arg = after.find(jsn['arg'])

        assert not frm is None
        assert not to is None
        assert not arg is None

        assert frm.hash() == jsn['from_hash']
        assert to.hash() == jsn['to_hash']
        assert arg.hash() == jsn['arg_hash']

        return InsertCallArg(frm, to, arg)

    # detects whether a single argument added to "before" yields "to"
    # returns the argument, if one can be found, else None is returned
    @staticmethod
    def detect_one(frm, to):
        frm_args = frm.contents()
        to_args = to.contents()

        # "To" must be one unit longer than "From"
        if len(to_args) != (len(frm_args) + 1):
            return None

        # Ensure order is preserved
        arg = None
        i = k = 0
        while i < len(frm_args):
            if not frm_args[i].equivalent(to_args[i + k]):
                if not arg is None:
                    return None
                arg = to_args[i + k]
                k = 1
            else:
                i += 1

        # check if the (single) new argument was appended
        if arg is None:
            arg = to_args[-1]

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

    def parts(self):
        return [self.arg()]

    def to_json(self):
        jsn = {
            'from': self.__frm.number(),
            'from_hash': self.__frm.hash(),
            'to': self.__to.number(),
            'to_hash': self.__to.hash(),
            'arg': self.__arg.number(),
            'arg_hash': self.__arg.hash()
        }
        return super().to_json(jsn)

class RemoveCallArg(RepairAction):
    # TODO: CODE CLONE - InsertCallArg.from_json
    @staticmethod
    def from_json(jsn, before, after):
        frm = before.find(jsn['from'])
        to = after.find(jsn['to'])
        arg = after.find(jsn['arg'])

        assert not frm is None
        assert not to is None
        assert not arg is None

        assert frm.hash() == jsn['from_hash']
        assert to.hash() == jsn['to_hash']
        assert arg.hash() == jsn['arg_hash']

        return RemoveCallArg(frm, to, arg)

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

    def parts(self):
        return []

    def to_json(self):
        jsn = {
            'from': self.__frm.number(),
            'from_hash': self.__frm.hash(),
            'to': self.__to.number(),
            'to_hash': self.__to.hash(),
            'arg': self.__arg.number(),
            'arg_hash': self.__arg.hash()
        }
        return super().to_json(jsn)

class ReplaceCallArg(RepairAction):
    # TODO: CODE CLONE - InsertCallArg.from_json
    @staticmethod
    def from_json(jsn, before, after):
        frm = before.find(jsn['from'])
        to = after.find(jsn['to'])
        frm_arg = before.find(jsn['from_arg'])
        to_arg = after.find(jsn['to_arg'])

        assert not frm is None
        assert not to is None
        assert not frm_arg is None
        assert not to_arg is None

        assert frm.hash() == jsn['from_hash']
        assert to.hash() == jsn['to_hash']
        assert frm_arg.hash() == jsn['from_arg_hash']
        assert to_arg.hash() == jsn['to_arg_hash']

        return ReplaceCallArg(frm, to, frm_arg, to_arg)

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
        self.__frm = frm_call
        self.__to = to_call
        self.__frm_arg = frm_arg
        self.__to_arg = to_arg

    def frm_call(self):
        return self.__frm
    def to_call(self):
        return self.__to
    def frm_arg(self):
        return self.__frm_arg
    def to_arg(self):
        return self.__to_arg

    def parts(self):
        return [self.to_arg()]

    def to_json(self):
        jsn = {
            'from': self.__frm.number(),
            'from_hash': self.__frm.hash(),
            'to': self.__to.number(),
            'to_hash': self.__to.hash(),
            'from_arg': self.__frm_arg.number(),
            'from_arg_hash': self.__frm_arg.hash(),
            'to_arg': self.__to_arg.number(),
            'to_arg_hash': self.__to_arg.hash()

        }
        return super().to_json(jsn)

import cgum.statement

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

# Base class used by all repair actions
class RepairAction(object):
    
    # Injects the type of the repair action into its JSON description
    def to_json(self, jsn):
        jsn['type'] = self.__class__.__name__
        return jsn

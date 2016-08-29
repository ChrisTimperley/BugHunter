import cgum

# Info:
# - Extract a numbered list of all the statements in the faulty program
# - Extract a list of all the If conditions in the program
# - Extract a list of While loop conditions
# - Extract a list of statement modifications
#
# REPAIR MODEL:
# GP: Delete, Append, Replace
#
# For each edit, find the nearest statement to that node.
#
###############################################################################
# Statement edit analysis
###############################################################################
#
# * Is the name of the called function modified?
# * Are the arguments of the function call changed?

def analyse(fix, db_dir):
    print("Analysing fix: %s" % fix.identifier())
    if fix.modifies_header_file():
        print("Skipping fix: %s (modifies header file)" % fix.identifier())
        return False
    if fix.modifies_multiple_source_files():
        print("Skipping fix: %s (modifies multiple source files)" % fix.identifier())
        return False
    if not fix.is_preprocessed(db_dir):
        print("skipping fix: %s (not preprocessed)" % fix.identifier())
        return False

    # Get the ASTs of the fixed and faulty versions of the program.
    fix_dir = fix.fix_dir(db_dir)
    modified_fn = list(fix.source_files())[0]
    ast_faulty = fix.ast_faulty(modified_fn, db_dir)
    ast_fixed = fix.ast_fixed(modified_fn, db_dir)
    ast_diff = fix.diff(modified_fn, db_dir)

    if not ast_diff:
        print("skipping fix: %s (no diff; added or removed file)" % fix.identifier())
        return False

    # Find the affected nodes
    deleted_nodes = \
        [deletion.deleted(ast_faulty, ast_fixed) for deletion in ast_diff.deletions()]
    inserted_nodes = \
        [insertion.inserted(ast_faulty, ast_fixed) for insertion in ast_diff.insertions()]
    updated_nodes = \
        [update.updated(ast_faulty, ast_fixed) for update in ast_diff.updates()]
    removed_nodes = \
        [removal.removed(ast_faulty, ast_fixed) for removal in ast_diff.removals()]
    moved_nodes = \
        [move.to(ast_faulty, ast_fixed) for move in ast_diff.moves()]
    affected_nodes = \
        deleted_nodes + inserted_nodes + updated_nodes + removed_nodes + moved_nodes

    # Q) Were any function parameters added, removed, or changed?
    any_function_parameters_modified = \
        any(isinstance(FunctionParameter, edit.ancestors()) for node in affected_nodes)

    # Q) Were any functions added?
    any_functions_added = \
        any(isinstance(FunctionDefinition, added) for added in inserted_nodes)

    # Q) Were any functions removed?
    any_functions_removed = \
        any(isinstance(FunctionDefinition, deletion) for deletion in deleted_nodes)

    # Q) Were any variables added?
    any_variables_added = \
        any(isinstance(Declaration, insert) for insert in inserted_nodes)

    # Q) Were any variables removed?
    any_variables_removed = \
        any(isinstance(Declaration, removed.descendants()) \
            for removed in (removed_nodes + deleted_nodes))

    # Q) Were any statements removed?

    # Put together all the analysis

    print("Analysed fix: %s" % fix.identifier())
    return True

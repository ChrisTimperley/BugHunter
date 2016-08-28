#
# * We only bother analysing single-file 
#
#import cgum

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

def analyse(fix):
    print("Analysing fix: %s" % fix.identifier())

    # Q) How many files were modified?
    num_files_modified = len(fix.files())

    # Get the ASTs of the fixed and faulty versions of the program.

    # Q) Were any function names changed?

    # Q) Were any function parameters changed?

    # Q) Were any functions added?

    # Q) Were any functions removed?

    print("Analysed fix: %s" % fix.identifier())

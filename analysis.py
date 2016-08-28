# Info:
# - Extract a numbered list of all the statements in the faulty program
# - Extract a list of all the If conditions in the program
# - Extract a list of While loop conditions
# - Extract a list of statement modifications
#
# Q) How many files were modified?
# Q) Was more than a single file modified?
# Q) Were any function names changed?
# Q) Were any functions added?
# Q) Were any functions removed?
#
#
# REPAIR MODEL:
# GP: Delete, Append, Replace
#
#
# For each edit, find the nearest statement to that node.

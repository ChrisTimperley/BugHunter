#!/usr/bin/env python3
import pprint
import cgum.diff
from bughunter.miner import RepairActionMiner

# Create the miner
miner = RepairActionMiner()

# delete statement
#diff = cgum.diff.AnnotatedDiff.from_source_files("delete-statement/before.c",\
#                                                 "delete-statement/after.c")
#pprint.pprint(miner.mine(diff))

# wrap statement
#diff = cgum.diff.AnnotatedDiff.from_source_files("wrap-statement/before.c",\
#                                                 "wrap-statement/after.c")
#pprint.pprint(miner.mine(diff))

# unwrap statement
#diff = cgum.diff.AnnotatedDiff.from_source_files("wrap-statement/after.c",\
#                                                 "wrap-statement/before.c")
#pprint.pprint(miner.mine(diff))

# replace if condition
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-if-condition/before.c",\
#                                                 "replace-if-condition/after.c")
#pprint.pprint(miner.mine(diff))

# replace then branch
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-then/before.c",\
#                                                 "replace-then/after.c")
#pprint.pprint(miner.mine(diff))

# replace else branch
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-else/before.c",\
#                                                 "replace-else/after.c")
#pprint.pprint(miner.mine(diff))

# remove else branch
#diff = cgum.diff.AnnotatedDiff.from_source_files("remove-else/before.c",\
#                                                 "remove-else/after.c")
#pprint.pprint(miner.mine(diff))

# add else branch
#diff = cgum.diff.AnnotatedDiff.from_source_files("remove-else/after.c",\
#                                                 "remove-else/before.c")
#pprint.pprint(miner.mine(diff))

# add else-if branch
#diff = cgum.diff.AnnotatedDiff.from_source_files("insert-else-if/before.c",\
#                                                 "insert-else-if/after.c")
#pprint.pprint(miner.mine(diff))

# guard else branch
#diff = cgum.diff.AnnotatedDiff.from_source_files("guard-else/before.c",\
#                                                 "guard-else/after.c")
#pprint.pprint(miner.mine(diff))

# replace switch expression
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-switch-expression/before.c",\
#                                                 "replace-switch-expression/after.c")
#pprint.pprint(miner.mine(diff))

# replace while loop guard
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-while-loop-guard/before.c",\
#                                                 "replace-while-loop-guard/after.c")
#pprint.pprint(miner.mine(diff))

# replace for loop guard
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-for-loop-guard/before.c",\
#                                                 "replace-for-loop-guard/after.c")
#pprint.pprint(miner.mine(diff))

# replace do while loop guard
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-do-while-loop-guard/before.c",\
#                                                 "replace-do-while-loop-guard/after.c")
#pprint.pprint(miner.mine(diff))

# replace while loop body
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-while-loop-body/before.c",\
#                                                 "replace-while-loop-body/after.c")
#pprint.pprint(miner.mine(diff))

# replace do-while loop body
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-do-while-loop-body/before.c",\
#                                                 "replace-do-while-loop-body/after.c")
#pprint.pprint(miner.mine(diff))

# replace for loop body
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-for-loop-body/before.c",\
#                                                 "replace-for-loop-body/after.c")
#pprint.pprint(miner.mine(diff))

# TODO: replace assignment RHS
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-rhs/before.c",\
#                                                 "replace-rhs/after.c")
#pprint.pprint(miner.mine(diff))

# TODO: replace assignment LHS
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-lhs/before.c",\
#                                                 "replace-lhs/after.c")
#pprint.pprint(miner.mine(diff))

# replace function call target
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-call-target/before.c",\
#                                                 "replace-call-target/after.c")
#pprint.pprint(miner.mine(diff))

# replace function call argument
#diff = cgum.diff.AnnotatedDiff.from_source_files("replace-call-argument/before.c",\
#                                                 "replace-call-argument/after.c")
#pprint.pprint(miner.mine(diff))

# add function call argument
diff = cgum.diff.AnnotatedDiff.from_source_files("add-call-argument/before.c",\
                                                 "add-call-argument/after.c")
pprint.pprint(miner.mine(diff))

# remove function call argument
diff = cgum.diff.AnnotatedDiff.from_source_files("add-call-argument/after.c",\
                                                 "add-call-argument/before.c")
pprint.pprint(miner.mine(diff))

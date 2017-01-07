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
diff = cgum.diff.AnnotatedDiff.from_source_files("replace-switch-expression/before.c",\
                                                 "replace-switch-expression/after.c")
pprint.pprint(miner.mine(diff))

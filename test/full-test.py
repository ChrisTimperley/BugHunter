#!/usr/bin/env python3
import pprint
import traceback
from bughunter.bughunter import BugHunter
from bughunter.action import RepairActions
from bughunter.pool import DonorPoolSet

bh = BugHunter()
repo = bh.repository("https://github.com/curl/curl", "bughunter:curl")
git = repo.repository()
fixes = repo.fixes()
fixes = fixes[1:10]

for fix in fixes:
    try:
        print(fix.identifier())
        for diff in fix.diffs():
            print("Mining actions for file: %s" % diff.name())
            pools = DonorPoolSet.build(diff)
            #actions = RepairActions.mine(diff)
            #pprint.pprint(actions)

    except (KeyboardInterrupt, SystemExit):
        raise
    except Exception as e:
        print("Failed [%s]: %s" % (fix.identifier(), e))
        print(traceback.format_exc())
        pass

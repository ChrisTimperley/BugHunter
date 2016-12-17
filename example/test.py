#!/usr/bin/env python3
from bughunter.bughunter import BugHunter
from bughunter.miner import RepairActionMiner

bh = BugHunter()
#repo = bh.repository("https://github.com/stedolan/jq", "bughunter:jq")
repo = bh.repository("https://github.com/curl/curl", "bughunter:curl")
#repo = bh.repository("https://github.com/vim/vim", "bughunter:vim")
git = repo.repository()
fixes = repo.fixes()
fixes = fixes[1:2]#fixes[0:10]

miner = RepairActionMiner()

for fix in fixes:
    try:
        print(fix.identifier())
        before = fix.before()
        after = fix.after()
        for fn in fix.modified_source_files():
                print("Loading file: %s" % fn)

                s = before.source(fn)
                print("got src")
                diff = fix.diff(fn)
                print("got diff")
                miner.mine(diff)

                #before.source().ast()

                #before.ast(fn)
                #after.ast(fn)
    except (KeyboardInterrupt, SystemExit):
        raise
    except Exception as e:
        print("Failed [%s]: %s" % (fix.identifier(), e))
        pass

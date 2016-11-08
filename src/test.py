#!/usr/bin/env python3
from bughunter import BugHunter

bh = BugHunter()
repo = bh.repository("https://github.com/stedolan/jq")
git = repo.repository()
fixes = repo.fixes()

for fix in fixes:
    print(fix.identifier())
    before = fix.before()
    after = fix.after()
    for fn in fix.modified_source_files():
        before.ast(fn)
        print(fn)

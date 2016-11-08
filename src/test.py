#!/usr/bin/env python3
from bughunter import BugHunter

bh = BugHunter()
repo = bh.repository("https://github.com/stedolan/jq")
git = repo.repository()
fixes = repo.fixes()

f = fixes[0]

pp = f.before().preprocessed("src/util.c")
ast = f.before().ast("src/util.c")

print(ast)

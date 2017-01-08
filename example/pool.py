#!/usr/bin/python3
import pprint
import cgum.statement
import cgum.program

prog = cgum.program.Program.from_source_file("replace-while-loop-body/after.c")
stmts = prog.collect(lambda n: isinstance(n, cgum.statement.Statement))

for stmt in stmts:
    print("%s -> %s" % (stmt, hash(stmt)))

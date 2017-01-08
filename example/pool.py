#!/usr/bin/python3
from pprint import pprint
import cgum.statement
import cgum.program
import bughunter.pool as pl

prog = cgum.program.Program.from_source_file("replace-while-loop-body/after.c")
pool = pl.DonorPool(prog, pl.StatementCriterion())

pprint(pool.contents())

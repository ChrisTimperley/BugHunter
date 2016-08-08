# BugHunter

A simple, but capable Python script for efficiently mining Git repositories
for C-related bugs. Computes a list of all the identified bugs within the
repository, tagged with relevant meta-data, together with a directory
structure of the modified source code files, in their pre-processed form,
and the AST differences between the two versions.

Usage
============

```
./bugcollector.py [path_to_repository] [*options]
```

Requirements
============

At a minimum, BugHunter requires Python 3 and the `gitpython` package to operate
correctly. This package may be installed using `pip`, by executing the following
command: `pip install gitpython`.

In addition to these minimum requirements, the host machine must be capable of
compiling the source code of the project(s) under investigation. Failing this,
BugHunter will be unable to produce the pre-processed form of the modified
source code files, and thus, will be unable to perform an analysis of the
repair.

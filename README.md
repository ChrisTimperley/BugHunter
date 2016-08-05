# BugCollector

A simple, but capable Python script for efficiently mining Git repositories
for C-related bugs. Computes a list of all the identified bugs within the
repository, tagged with relevant meta-data, together with a directory
structure of the modified source code files, in their pre-processed form,
and the AST differences between the two versions.

Usage
============

```
./bugcollector.py [path_to_repository]
```

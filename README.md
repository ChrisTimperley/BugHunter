# BugHunter

A simple, but capable Python script for efficiently mining Git repositories
for C-related bugs. Computes a list of all the identified bugs within the
repository, tagged with relevant meta-data, together with a directory
structure of the modified source code files, in their pre-processed form,
and the AST differences between the two versions.

Installation
============

```
python3 setup.py install
```

Usage
============

To start using BugHunter, just install the package via easy_install, using the
instructions given below, and then import the `bughunter` module into your code.

```
import bughunter

bh = BugHunter()
repo = bh.repository("https://github.com/php/php-src")

for fix in repo.fixes():
  print(fix)

```

Requirements
============

At a minimum, BugHunter requires Python 3 and the `gitpython` package to operate
correctly. This package may be installed using `pip`, by executing the following
command: `pip install gitpython`. In order to pre-process files correctly, and
to generate ASTs, BugHunter also requires Docker to be installed on the machine,
and that the user is a member of the `docker` usergroup.

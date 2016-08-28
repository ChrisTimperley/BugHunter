#!/usr/bin/env python3
from database import Database
import parser as psr
import argparse
import git
import analysis

DESCRIPTION = "BugHunter - a small, but mighty bug mining tool for extracting" + \
    " and analysing bugs from offline Git repositories for projects using C;" + \
    " source code available at [http://github.com/ChrisTimperley/BugHunter]."

# Any commit containing a bug marker will be treated as a bug fix, unless the
# commit also contains an anti-marker
BUG_MARKERS = ['fixed', 'bug']
BUG_ANTI_MARKERS = ['compile', 'compilation', 'debug', 'merge', 'revert']

if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog='bughunter', description=DESCRIPTION)
    parser.add_argument('mode', type=str, action='store',\
                        choices=['collect', 'preprocess', 'parse', 'analyse'])
    parser.add_argument('repository', type=str,
            help='path to the repository under investigation')
    parser.add_argument('--threads', action='store', dest='threads', type=int, default=1,
            help='number of threads to utilise during pre-processing')
    parser.add_argument('--force', action='store', dest='force', type=bool, default=False)
    args = parser.parse_args()

    if args.threads <= 0:
        raise "Illegal number of threads specified (should be >= 1)"
    try:
        db = Database(args.repository.strip(), threads=args.threads)
        ({
            'collect': (lambda: db.collect(force=args.force)),
            'preprocess': (lambda: db.preprocess(threads=args.threads)),
            'parse': (lambda: db.parse(threads=args.threads)),
            'analyse': (lambda: db.analyse(force=args.force))
        })[args.mode]()
    except (KeyboardInterrupt, SystemExit):
        pass

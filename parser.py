from utility import *
import shutil
import os.path

# Parses a source file at a given location to a GumTree AST, saving the results
# to a specified file. Throws an exception if an error occurred.
def parse_file(source_fn, dest_fn):
    ensure_dir(dest_fn)
    assert execute("gumtree parse %s > %s" % (source_fn, dest_fn)), \
        ("failed to parse source file: %s" % source_fn)

# Parses a list of source code files contained within a given source code
# directory, if they exist, writing the resulting ASTs to a specified
# destination directory. If a file does not exist within the source directory,
# it's simply ignored.
def parse_files(file_names, source_dir, dest_dir):
    for fn in file_names:
        src_fn = os.path.join(source_dir, fn)
        dest_fn = os.path.join(source_dir, ("%s.ast.json" % fn))
        if os.path.isfile(src_fn):
            parse_file(src_fn, dest_fn)

def generate_diff(fix_fn, fault_fn, diff_fn):
    ensure_dir(diff_fn)
    assert execute("gumtree jsondiff %s %s > %s" % (fix_fn, fault_fn, diff_fn)), \
        ("failed to generate diff file: %s" % diff_fn)

def generate_diffs(file_names, fix_dir, fault_dir, diff_dir):
    for fn in file_names:
        fix_fn = os.path.join(fix_dir, fn)
        fault_fn = os.path.join(fault_dir, fn)
        diff_fn = os.path.join(diff_dir, ('%s.diff.json' % fn))
        if os.path.isfile(fix_fn) and os.path.isfile(fault_fn):
            generate_diff(fix_fn, diff_fn, dest_fn)

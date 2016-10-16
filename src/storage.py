# The Storage class is responsible for abstracting away the details of how and
# where BugHunter's artefacts are stored, including pre-processed, parsed, and
# differenced files.

# - add zipped storage?
class Storage(object):

    def __init__(self, location):
        pass

    # copy?

    # Returns the absolute path of a particular file within this file, given
    # details of the fix it belongs to.
    def file_path(self, repo, fix, version, fn):
        pass

    # Adds a source code file for a particular fix version into storage.
    # Copies the file from the provided source into this storage.
    def add_source_file_from(self, repo, fix, version, fn, src_fn):
        pass

class FlatStorage(object):
    pass

class ZippedStorage(object):
    pass

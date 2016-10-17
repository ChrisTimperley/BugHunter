import storage
import os
import repository

class BugHunter(object):
    def __init__(self):
        storage_loc = os.path.join(os.path.expanduser('~'), 'bughunter')
        self.__storage = storage.Storage(storage_loc)

    # We could have a shared pool of repository (and fix) instances, but
    # since we're writing to disk directly, and contents are lazily fetched,
    # there shouldn't be any synchronisation issues.
    def repository(self, address):
        return repository.Repository(self.__storage, address)

# examples
#
# import bughunter
#
# bh = bughunter.BugHunter()
# bh.repository("https://github.com/php/php-src", docker_file)

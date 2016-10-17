import storage
import os
import repository
import fix

class BugHunter(object):
    def __init__(self):
        self.__storage = storage.Storage()

    # We could have a shared pool of repository (and fix) instances, but
    # since we're writing to disk directly, and contents are lazily fetched,
    # there shouldn't be any synchronisation issues.
    def repository(self, address):
        return repository.Repository(self.__storage, address)

# examples
#
# bh.repository("https://github.com/php/php-src", docker_file)

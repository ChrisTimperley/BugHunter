import storage
import scanner
import os
import repository
import fix

class BugHunter(object):
    def __init__(self):
        self.__storage = storage.Storage()
        self.__scanner = scanner.Scanner()

    # We could have a shared pool of repository (and fix) instances, but
    # since we're writing to disk directly, and contents are lazily fetched,
    # there shouldn't be any synchronisation issues.
    def repository(self, address):
        return repository.Repository(self.__storage, self.__scanner, address)

# examples
#
# bh.repository("https://github.com/php/php-src", docker_file)

import storage
import scanner
import os
import repository
import preprocessor
import fix

class BugHunter(object):
    def __init__(self):
        self.__storage = storage.Storage(self)
        self.__scanner = scanner.Scanner(self)
        self.__preprocessor = preprocessor.Preprocessor()

    # We could have a shared pool of repository (and fix) instances, but
    # since we're writing to disk directly, and contents are lazily fetched,
    # there shouldn't be any synchronisation issues.
    def repository(self, address):
        return repository.Repository(self.__storage, self.__scanner, address)

    # Returns the storage handler for this BugHunter server
    def storage(self):
        return self.__storage

    def preprocessor(self):
        return self.__preprocessor

# examples
#
# bh.repository("https://github.com/php/php-src", docker_file)

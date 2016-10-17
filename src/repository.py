import json
import git

class Repository(object):

    def __init__(self, storage, url):
        self.__storage = storage
        self.__url = url
        self.__location = location

    # Returns an 

    # Finds all bug fixes within this repository, then saves their details to a
    # JSON database file
    def find_fixes(self):
        pass

    # Compute list of fixes if necessary
    def fixes(self):
        indexFile = self.__storage.fixIndex(self)

        # generate fixes
        if not indexFile.exists():
            fixes = self.__scanner.scan(self)
            indexFile.write(fixes)
            
        # load from file
        else:
            indexFile = indexFile.as_readable_file()
            fixes = indexFile.read()
            fixes = json.load(indexFile)
            fixes = [Fix.from_json(fx) for fx in fixes]
            indexFile.close()

        return fixes

class DatabaseFile(object):

    # Returns a list of the bug fixes contained within this database file
    def read(self):
        jsn = json.load(storage.reader(self))
        return [Fix.from_json(fx) for fx in fixes]

    # Writes a list of bug fixes to this database file
    def write(self, fixes):
        f = storage.writer(self)
        json.dump([Fix.to_json(fx) for fx in self.__fixes], f, indent=2)


# Example
repo = BugHunter.repository("https://github.com/php/php-src")
for fix in repo.fixes():
    print(fix.before().preprocessed("abc.c"))

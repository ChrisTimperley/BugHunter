#!/usr/bin/python3
import cgum
import cgum.program
import random
import unittest
import bughunter
from bughunter.pool import DonorPool

class TestDonorPool(unittest.TestCase):
    def testConsistency(self):
        entries = frozenset([random.randint(-10000000, 10000000) for _ in range(100)])
        original = DonorPool("hello", entries)
        jsn = original.to_json()
        self.assertEqual(jsn, list(entries))
        
        loaded = DonorPool.from_json("hello", list(entries))
        self.assertEqual(loaded.contents(), entries)

    def testHashing(self):
        x = cgum.program.Program.from_json_file("random_hash.json")
        y = cgum.program.Program.from_json_file("random_hash.json")

        print(x.hash())

        self.assertEqual(x.hash(), y.hash())

if __name__ == "__main__":
    unittest.main()

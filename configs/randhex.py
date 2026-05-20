#!/usr/bin/python3

from sys import argv
from os import urandom
from math import ceil

def randhex(length=16):
    return urandom(ceil(length/2)).hex()

if __name__ == "__main__":
    if len(argv) == 2:
        print(randhex(int(argv[1])))
    else:
        print(randhex())

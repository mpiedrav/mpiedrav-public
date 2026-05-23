#!/usr/bin/python3

import sys
import os
import logging

from pypdf import PdfReader

logger = logging.getLogger("pypdf")
logger.setLevel(logging.ERROR)

def count_pages(filename):
    pagecount = 0
    reader = PdfReader(filename)
    return len(reader.pages)

if __name__ == "__main__":
    if len(sys.argv) == 2:
        pagecount = 0
        filelist = os.listdir(sys.argv[1])
        for filename in filelist:
            filepath = os.path.join(sys.argv[1], filename)
            pagecount += count_pages(filepath)
        print("Number of PDF files:", len(filelist))
        print("Total page count:", pagecount)

#!/usr/bin/python3
import os
import sys

if len(sys.argv) < 3:
    print("Usage: " + sys.argv[0] + " books_path bibliography_path")
    exit()

books_path = sys.argv[1]
bibliography_path = sys.argv[2]

booklist = sorted(os.listdir(books_path))
bibliography = ""

for item in booklist:
    book = item.removesuffix(".pdf").split(sep = " - ")
    if(len(book) != 4):
        print("Invalid filename: " + item)
        exit()
    bibid = book[0].replace(" and ", "").replace(" ", "").replace(",", "") + book[3]
    author = book[0]
    title = book[1].replace(" _", ":")
    year = book[3]
    publisher = book[2]
    bibliography += "@book{" + bibid + ",\n\t" +\
    "author = {" + author + "},\n\t" +\
    "title = {" + title + "},\n\t" +\
    "year = {" + year + "},\n\t" +\
    "publisher = {" + publisher + "}\n" +\
    "}\n\n"

with open(bibliography_path, "w") as file:
    file.write(bibliography)

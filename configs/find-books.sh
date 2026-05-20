#!/bin/sh
cd $HOME
find books -print0 | xargs -0 touch
find books -type f -print0 | xargs -0 md5sum | sort -k2

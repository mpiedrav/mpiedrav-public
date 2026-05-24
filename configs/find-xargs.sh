#!/bin/bash

find books -type d,f -print0 | xargs -0 touch

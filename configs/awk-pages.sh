#!/bin/bash
for i in *.pdf; do pdfinfo "$i" 2>/dev/null | grep -a Pages; done | awk '{sum += $2} END {print sum}'

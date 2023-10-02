#!/bin/bash
c_files=$(find . -maxdepth 1 -type f -name "*.c")

gcc -c $c_files

ar rcs liball.a *.o

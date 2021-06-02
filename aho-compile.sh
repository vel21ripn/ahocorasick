#!/bin/bash

#grep -v "^H_" aho-c2.dat | 
./aho-compile -N w1 aho-c1.dat  >aho-c1.h
# grep -v "^H_" aho-c2.dat | ./aho-compile -N w1 -A >aho-c1a.h
./aho-compile -N w1 -D aho-c2.dat >aho-c2.h
./aho-compile -N w1 -D -d aho-c3.dat >aho-c3.h
./aho-compile -N w1     aho-c4.dat >aho-c4.h

gcc -O2 -o aho-comp-1 -DC1 aho-compiled.c
gcc -O2 -o aho-comp-2 -DC2 aho-compiled.c
gcc -O0 -o aho-comp-3 -DC3 aho-compiled.c
gcc -O2 -o aho-comp-4 -DC4 aho-compiled.c

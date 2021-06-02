#!/bin/bash

for i1 in 1 2 3; do
  for i2 in 1 2 ; do
    i="aho-memleak-${i2}${i1}"
    for j in 1 2 3; do
	    echo -n "$i "; ./$i
    done
  done
  echo
done

#!/bin/bash

for i1 in 1 2 3; do
  for i2 in 1 2 ; do
    i="aho-search-${i2}${i1}"
    for j in 1 2 3; do
	    echo -n "$i "; ICASE=1 ./$i
    done
  done
  echo
done

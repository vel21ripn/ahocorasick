#!/bin/bash

#grep -v "^H_" aho-c2.dat | 
./aho-compile -N ndpi_http_str -IDp ndpi_http_hdr.dat > ndpi_http_hdr.h

gcc -O0 -g -Wall -o ndpi_http_hdr ndpi_http_hdr.c

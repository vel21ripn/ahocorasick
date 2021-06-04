
CC=gcc
#CC=clang

INC1=-I. -Isrc/include
INC2=-I. -Inew

CFLAGS=-ggdb3 -O3 -Wall -Wno-stringop-truncation -std=c99 #-rdynamic
CFLAGS=-ggdb3 -O2 -Wall -Wno-stringop-truncation -std=c99 #-rdynamic
#CFLAGS=-ggdb3 -O0 -Wall -Wno-stringop-truncation -std=c99 -rdynamic
#CFLAGS=-ggdb3 -O3 -Wall -std=c99 #-rdynamic
#-Wextra
# for pahole
# -femit-struct-debug-detailed=any

PERF=
#PERF=-fprofile-generate
#PERF=-fprofile-use
#PERF=-pg

PROG=
PROG += aho-search-11 aho-search-12 aho-search-13 
PROG += aho-search-21 aho-search-22 aho-search-23

PROG += aho-memleak-11 aho-memleak-12 aho-memleak-13
PROG += aho-memleak-21 aho-memleak-22 aho-memleak-23
PROG += aho-compile

all: $(PROG)

xmemchr: xmemchr.c
	$(CC) $(CFLAGS) -o $@ $^

aho-search-11: aho-search.c all_hosts2.h ahocorasick.a
	$(CC) $(PERF) $(CFLAGS) $(INC1) -o $@ aho-search.c ahocorasick.a
aho-search-12: aho-search.c bigram.h ahocorasick.a
	$(CC) $(PERF) $(CFLAGS) $(INC1) -DBIGRAM -o $@ aho-search.c ahocorasick.a
aho-search-13: aho-search.c all_hosts.h ahocorasick.a
	$(CC) $(PERF) $(CFLAGS) $(INC1) -DAHOST -o $@ aho-search.c ahocorasick.a

aho-search-21: aho-search.c all_hosts2.h libahocorasick.o
	$(CC) $(PERF) $(CFLAGS) $(INC2) -DNEW_AHO -o $@ aho-search.c libahocorasick.o
aho-search-22: aho-search.c bigram.h libahocorasick.o
	$(CC) $(PERF) $(CFLAGS) $(INC2) -DNEW_AHO -DBIGRAM -o $@ aho-search.c libahocorasick.o
aho-search-23: aho-search.c all_hosts.h libahocorasick.o
	$(CC) $(PERF) $(CFLAGS) $(INC2) -DNEW_AHO -DAHOST -o $@ aho-search.c libahocorasick.o

aho-memleak-11: aho-memleak.c all_hosts2.h ahocorasick.a
	$(CC) $(PERF) $(CFLAGS) $(INC1) -o $@ aho-memleak.c ahocorasick.a
aho-memleak-12: aho-memleak.c bigram.h ahocorasick.a
	$(CC) $(PERF) $(CFLAGS) $(INC1) -DBIGRAM -o $@ aho-memleak.c ahocorasick.a
aho-memleak-13: aho-memleak.c all_hosts.h ahocorasick.a
	$(CC) $(PERF) $(CFLAGS) $(INC1) -DAHOST -o $@ aho-memleak.c ahocorasick.a

aho-memleak-21: aho-memleak.c all_hosts2.h libahocorasick.o
	$(CC) $(PERF) $(CFLAGS) $(INC2) -DNEW_AHO -o $@ aho-memleak.c libahocorasick.o
aho-memleak-22: aho-memleak.c bigram.h libahocorasick.o
	$(CC) $(PERF) $(CFLAGS) $(INC2) -DNEW_AHO -DBIGRAM -o $@ aho-memleak.c libahocorasick.o
aho-memleak-23: aho-memleak.c all_hosts.h libahocorasick.o
	$(CC) $(PERF) $(CFLAGS) $(INC2) -DNEW_AHO -DAHOST -o $@ aho-memleak.c libahocorasick.o

aho-compile: aho-compile.c all_hosts.h libahocorasick.o libahocorasick-c.h
	$(CC) $(PERF) $(CFLAGS) $(INC2) -DNEW_AHO -DAHOST -o $@ aho-compile.c libahocorasick.o

libahocorasick.o: new/ahocorasick.c new/ahocorasick.h
	$(CC) -o $@ -c $(CFLAGS) $(PERF) $(INC2) $<
#
ahocorasick.a: ahocorasick.o node.o sort.o
	ar rvs $@ $^

ahocorasick.o: src/ahocorasick.c src/include/ahocorasick.h src/include/node.h src/include/sort.h
	$(CC) -o $@ -c $(CFLAGS) $(PERF) $(INC1) $<

node.o: src/node.c src/include/node.h src/include/ahocorasick.h
	$(CC) -o $@ -c $(CFLAGS) $(PERF) $(INC1) $<

sort.o: src/sort.c src/include/sort.h
	$(CC) -o $@ -c $(CFLAGS) $(PERF) $(INC1) $<


clean::
	rm -f *.o ahocorasick.a xmemchr $(PROG)

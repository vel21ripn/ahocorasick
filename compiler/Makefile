CC=gcc
#CC=clang

CFLAGS=-ggdb3 -O3 -Wall -Wno-stringop-truncation -std=c99 #-rdynamic
CFLAGS=-ggdb3 -O2 -Wall -Wno-stringop-truncation -std=c99 #-rdynamic

aho-compile: aho-compile.c ../libahocorasick.o aho-compiled-inc.o aho-compiled-lib.o
	$(CC) $(CFLAGS) -I.. -I../new -o $@ $^

aho-compiled-inc.o: aho-compiled-inc.h
	objcopy --input binary --output elf64-x86-64 $< $@

aho-compiled-lib.o: aho-compiled-lib.c
	objcopy --input binary --output elf64-x86-64 $< $@


clean::
	rm -f *.o aho-compile

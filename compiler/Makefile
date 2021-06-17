
aho-compile: aho-compile.c ../libahocorasick.o aho-compiled-inc.o aho-compiled-lib.o
	$(CC) $(PERF) $(CFLAGS) $(INC2) -I.. -I../new -o $@ $^

aho-compiled-inc.o: aho-compiled-inc.h
	objcopy --input binary --output elf64-x86-64 $< $@

aho-compiled-lib.o: aho-compiled-lib.c
	objcopy --input binary --output elf64-x86-64 $< $@


clean::
	rm -f *.o aho-compile

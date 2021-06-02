# ahocorasick
Aho-corasick library

New version of the ahocorasick library

1. The new version is about 25% faster with -O2 and 45% faster with -O3.
1. No recursion is used (smaller stack size required).
1. Uses less memory (by valgrind info)
   * bigram:
     * original 1796 allocs,   247864 bytes allocated
     * new      1232 allocs,   158880 bytes allocated
   * host\_match:
     * original 18038 allocs, 3004576 bytes allocated
     * new       6861 allocs,  396624 bytes allocated

1. The function ac\_automata\_search() is thread safe.
1. Optional case-insensitive comparison.
1. Matching at the beginning and at the end of the string is supported.
1. One code file and one header file.


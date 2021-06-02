# ahocorasick
Aho-corasick library

New version of the ahocorasick library (used in nDPI project)

The 'src' directory contains the original implementation of the aho-corasick algorithm (from nDPI project).

The 'new' directory contains the new implementation.
The API has barely changed. Almost all data structures have been changed.

1. The new version is up to about 25% faster (with optimization levels -O0 and -O2) and up to 45% faster (with optimization levels -O3). 
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

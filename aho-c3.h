#define H_Content_Encoding 1
#define H_Transfer_Encoding 2
// Match at end coding:
#define H_Coding 3
// Match at end Encoding:
#define H_Encoding 4

/*
---DUMP- all nodes 51 - max strlen 18 -ready---
root: 0x6f72d0x
0001:  d:0 +
  0: "C" -> 2
  1: "T" -> 19
  2: "c" -> 37
  3: "E" -> 44
0002:  failure 0001: d:1 + 'o' next->3
0003:  failure 0001: d:2 + 'n' next->4
0004:  failure 0001: d:3 + 't' next->5
0005:  failure 0001: d:4 + 'e' next->6
0006:  failure 0001: d:5 + 'n' next->7
0007:  failure 0001: d:6 + 't' next->8
0008:  failure 0001: d:7 + '-' next->9
0009:  failure 0001: d:8 + 'E' next->10
0010:  failure 0044: d:9 + 'n' next->11
0011:  failure 0045: d:10 + 'c' next->12
0012:  failure 0046: d:11 + 'o' next->13
0013:  failure 0047: d:12 + 'd' next->14
0014:  failure 0048: d:13 + 'i' next->15
0015:  failure 0049: d:14 + 'n' next->16
0016:  failure 0050: d:15 + 'g' next->17
0017:  failure 0051: d:16 + ':' next->18
0018:  failure 0052: d:17 -
'Content-Encoding:' N:3{1  Content-Encoding: , 4  Encoding: , 3  coding: }
0019:  failure 0001: d:1 + 'r' next->20
0020:  failure 0001: d:2 + 'a' next->21
0021:  failure 0001: d:3 + 'n' next->22
0022:  failure 0001: d:4 + 's' next->23
0023:  failure 0001: d:5 + 'f' next->24
0024:  failure 0001: d:6 + 'e' next->25
0025:  failure 0001: d:7 + 'r' next->26
0026:  failure 0001: d:8 + '-' next->27
0027:  failure 0001: d:9 + 'E' next->28
0028:  failure 0044: d:10 + 'n' next->29
0029:  failure 0045: d:11 + 'c' next->30
0030:  failure 0046: d:12 + 'o' next->31
0031:  failure 0047: d:13 + 'd' next->32
0032:  failure 0048: d:14 + 'i' next->33
0033:  failure 0049: d:15 + 'n' next->34
0034:  failure 0050: d:16 + 'g' next->35
0035:  failure 0051: d:17 + ':' next->36
0036:  failure 0052: d:18 -
'Transfer-Encoding:' N:3{2  Transfer-Encoding: , 4  Encoding: , 3  coding: }
0037:  failure 0001: d:1 + 'o' next->38
0038:  failure 0001: d:2 + 'd' next->39
0039:  failure 0001: d:3 + 'i' next->40
0040:  failure 0001: d:4 + 'n' next->41
0041:  failure 0001: d:5 + 'g' next->42
0042:  failure 0001: d:6 + ':' next->43
0043:  failure 0001: d:7 -
'coding:' N:1{3  coding: }
0044:  failure 0001: d:1 + 'n' next->45
0045:  failure 0001: d:2 + 'c' next->46
0046:  failure 0037: d:3 + 'o' next->47
0047:  failure 0038: d:4 + 'd' next->48
0048:  failure 0039: d:5 + 'i' next->49
0049:  failure 0040: d:6 + 'n' next->50
0050:  failure 0041: d:7 + 'g' next->51
0051:  failure 0042: d:8 + ':' next->52
0052:  failure 0043: d:9 -
'Encoding:' N:2{4  Encoding: , 3  coding: }
---
 mem size 2960 avg node size 56, node one char 47, <=8c 1, >8c 0, range 0
---DUMP-END-
 */
#include "libahocorasick-c.h"
struct aho_node a_node_w1[]= {
      { .f_node=0, .degree=0, .alpha=0x00, .outgoing=0, .patterns=0, .final=0, .range=0 },/* 0 */
      { .f_node=0, .degree=3, .alpha=0x00, .outgoing=1, .patterns=0, .final=0, .range=0 },/* 1 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3, .patterns=0, .final=0, .range=0 },/* 2 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=4, .patterns=0, .final=0, .range=0 },/* 3 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=5, .patterns=0, .final=0, .range=0 },/* 4 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=6, .patterns=0, .final=0, .range=0 },/* 5 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=7, .patterns=0, .final=0, .range=0 },/* 6 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=8, .patterns=0, .final=0, .range=0 },/* 7 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=9, .patterns=0, .final=0, .range=0 },/* 8 */
      { .f_node=1, .degree=0, .alpha=0x45/* 'E' */, .outgoing=10, .patterns=0, .final=0, .range=0 },/* 9 */
      { .f_node=44, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=11, .patterns=0, .final=0, .range=0 },/* 10 */
      { .f_node=45, .degree=0, .alpha=0x63/* 'c' */, .outgoing=12, .patterns=0, .final=0, .range=0 },/* 11 */
      { .f_node=46, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=13, .patterns=0, .final=0, .range=0 },/* 12 */
      { .f_node=47, .degree=0, .alpha=0x64/* 'd' */, .outgoing=14, .patterns=0, .final=0, .range=0 },/* 13 */
      { .f_node=48, .degree=0, .alpha=0x69/* 'i' */, .outgoing=15, .patterns=0, .final=0, .range=0 },/* 14 */
      { .f_node=49, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=16, .patterns=0, .final=0, .range=0 },/* 15 */
      { .f_node=50, .degree=0, .alpha=0x67/* 'g' */, .outgoing=17, .patterns=0, .final=0, .range=0 },/* 16 */
      { .f_node=51, .degree=0, .alpha=0x3a/* ':' */, .outgoing=18, .patterns=0, .final=0, .range=0 },/* 17 */
      { .f_node=52, .degree=0, .alpha=0x00, .outgoing=0, .patterns=1, .final=1, .range=0 },/* 18 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=20, .patterns=0, .final=0, .range=0 },/* 19 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=21, .patterns=0, .final=0, .range=0 },/* 20 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=22, .patterns=0, .final=0, .range=0 },/* 21 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=23, .patterns=0, .final=0, .range=0 },/* 22 */
      { .f_node=1, .degree=0, .alpha=0x66/* 'f' */, .outgoing=24, .patterns=0, .final=0, .range=0 },/* 23 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=25, .patterns=0, .final=0, .range=0 },/* 24 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=26, .patterns=0, .final=0, .range=0 },/* 25 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=27, .patterns=0, .final=0, .range=0 },/* 26 */
      { .f_node=1, .degree=0, .alpha=0x45/* 'E' */, .outgoing=28, .patterns=0, .final=0, .range=0 },/* 27 */
      { .f_node=44, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=29, .patterns=0, .final=0, .range=0 },/* 28 */
      { .f_node=45, .degree=0, .alpha=0x63/* 'c' */, .outgoing=30, .patterns=0, .final=0, .range=0 },/* 29 */
      { .f_node=46, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=31, .patterns=0, .final=0, .range=0 },/* 30 */
      { .f_node=47, .degree=0, .alpha=0x64/* 'd' */, .outgoing=32, .patterns=0, .final=0, .range=0 },/* 31 */
      { .f_node=48, .degree=0, .alpha=0x69/* 'i' */, .outgoing=33, .patterns=0, .final=0, .range=0 },/* 32 */
      { .f_node=49, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=34, .patterns=0, .final=0, .range=0 },/* 33 */
      { .f_node=50, .degree=0, .alpha=0x67/* 'g' */, .outgoing=35, .patterns=0, .final=0, .range=0 },/* 34 */
      { .f_node=51, .degree=0, .alpha=0x3a/* ':' */, .outgoing=36, .patterns=0, .final=0, .range=0 },/* 35 */
      { .f_node=52, .degree=0, .alpha=0x00, .outgoing=0, .patterns=4, .final=1, .range=0 },/* 36 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=38, .patterns=0, .final=0, .range=0 },/* 37 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=39, .patterns=0, .final=0, .range=0 },/* 38 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=40, .patterns=0, .final=0, .range=0 },/* 39 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=41, .patterns=0, .final=0, .range=0 },/* 40 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=42, .patterns=0, .final=0, .range=0 },/* 41 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=43, .patterns=0, .final=0, .range=0 },/* 42 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=7, .final=1, .range=0 },/* 43 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=45, .patterns=0, .final=0, .range=0 },/* 44 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=46, .patterns=0, .final=0, .range=0 },/* 45 */
      { .f_node=37, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=47, .patterns=0, .final=0, .range=0 },/* 46 */
      { .f_node=38, .degree=0, .alpha=0x64/* 'd' */, .outgoing=48, .patterns=0, .final=0, .range=0 },/* 47 */
      { .f_node=39, .degree=0, .alpha=0x69/* 'i' */, .outgoing=49, .patterns=0, .final=0, .range=0 },/* 48 */
      { .f_node=40, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=50, .patterns=0, .final=0, .range=0 },/* 49 */
      { .f_node=41, .degree=0, .alpha=0x67/* 'g' */, .outgoing=51, .patterns=0, .final=0, .range=0 },/* 50 */
      { .f_node=42, .degree=0, .alpha=0x3a/* ':' */, .outgoing=52, .patterns=0, .final=0, .range=0 },/* 51 */
      { .f_node=43, .degree=0, .alpha=0x00, .outgoing=0, .patterns=8, .final=1, .range=0 },/* 52 */
      {} };
    struct aho_patterns pattern_list_w1[]= {
      { .len=0, .from_start=0, .at_end=0, .last=0, .code=0, .pattern=0 }, /* 0 */
      { .len=17, .from_start=0, .at_end=0, .last=0, .code=1, .pattern=1 }, /* 1 */
      { .len=9, .from_start=0, .at_end=1, .last=0, .code=4, .pattern=2 }, /* 2 */
      { .len=7, .from_start=0, .at_end=1, .last=1, .code=3, .pattern=3 }, /* 3 */
      { .len=18, .from_start=0, .at_end=0, .last=0, .code=2, .pattern=4 }, /* 4 */
      { .len=9, .from_start=0, .at_end=1, .last=0, .code=4, .pattern=2 }, /* 5 */
      { .len=7, .from_start=0, .at_end=1, .last=1, .code=3, .pattern=3 }, /* 6 */
      { .len=7, .from_start=0, .at_end=1, .last=1, .code=3, .pattern=3 }, /* 7 */
      { .len=9, .from_start=0, .at_end=1, .last=0, .code=4, .pattern=2 }, /* 8 */
      { .len=7, .from_start=0, .at_end=1, .last=1, .code=3, .pattern=3 }, /* 9 */
      {}};
    char outgoings_w1[] = "#CTcE";
    unsigned short next_w1[]= {
      0,2,19,37,44,};
/* patterns length 51 */
    char *patterns_w1[]= { NULL,
      "Content-Encoding:", /* 1 */
      "Encoding:", /* 2 */
      "coding:", /* 3 */
      "Transfer-Encoding:", /* 4 */
      NULL };

    struct aho_compiled w1 = {
        .a_node       = &a_node_w1[0],
        .pattern_list = &pattern_list_w1[0],
        .next         = &next_w1[0],
        .outgoings    = &outgoings_w1[0],
       .patterns     = &patterns_w1[0]
    };

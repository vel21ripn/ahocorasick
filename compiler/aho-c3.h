
/* ./aho-compile -N w1 -D -d -p aho-c3.dat */

#define H_Content_Encoding 1
#define H_Transfer_Encoding 2
// Match at end CoD:
#define H_Cod 3
// Match at end Coding:
#define H_Coding 4
// Match at end Encoding:
#define H_Encoding 5

/*
---DUMP- all nodes 51 - max strlen 18 -ready---
0001:  d:0 + RANGE
  0: "C" -> 2
  1: "D" -> -1
  2: "E" -> 26
  3: "F" -> -1
  4: "G" -> -1
  5: "H" -> -1
  6: "I" -> -1
  7: "J" -> -1
  8: "K" -> -1
  9: "L" -> -1
  10: "M" -> -1
  11: "N" -> -1
  12: "O" -> -1
  13: "P" -> -1
  14: "Q" -> -1
  15: "R" -> -1
  16: "S" -> -1
  17: "T" -> 35
0002:  failure 0001: d:1 + 'o' next->3
0003:  failure 0001: d:2 +
  0: "n" -> 4
  1: "D" -> 19
  2: "d" -> 21
0004:  failure 0001: d:3 + 't' next->5
0005:  failure 0001: d:4 + 'e' next->6
0006:  failure 0001: d:5 + 'n' next->7
0007:  failure 0001: d:6 + 't' next->8
0008:  failure 0001: d:7 + '-' next->9
0009:  failure 0001: d:8 + 'E' next->10
0010:  failure 0026: d:9 + 'n' next->11
0011:  failure 0027: d:10 + 'c' next->12
0012:  failure 0028: d:11 + 'o' next->13
0013:  failure 0029: d:12 + 'd' next->14
0014:  failure 0030: d:13 + 'i' next->15
0015:  failure 0031: d:14 + 'n' next->16
0016:  failure 0032: d:15 + 'g' next->17
0017:  failure 0033: d:16 + ':' next->18
0018:  failure 0034: d:17 -
'Content-Encoding:' N:2{1  Content-Encoding: , 5  Encoding: }
0019:  failure 0001: d:3 + ':' next->20
0020:  failure 0001: d:4 -
'CoD:' N:1{3  CoD: }
0021:  failure 0001: d:3 + 'i' next->22
0022:  failure 0001: d:4 + 'n' next->23
0023:  failure 0001: d:5 + 'g' next->24
0024:  failure 0001: d:6 + ':' next->25
0025:  failure 0001: d:7 -
'Coding:' N:1{4  Coding: }
0026:  failure 0001: d:1 + 'n' next->27
0027:  failure 0001: d:2 + 'c' next->28
0028:  failure 0001: d:3 + 'o' next->29
0029:  failure 0001: d:4 + 'd' next->30
0030:  failure 0001: d:5 + 'i' next->31
0031:  failure 0001: d:6 + 'n' next->32
0032:  failure 0001: d:7 + 'g' next->33
0033:  failure 0001: d:8 + ':' next->34
0034:  failure 0001: d:9 -
'Encoding:' N:1{5  Encoding: }
0035:  failure 0001: d:1 + 'r' next->36
0036:  failure 0001: d:2 + 'a' next->37
0037:  failure 0001: d:3 + 'n' next->38
0038:  failure 0001: d:4 + 's' next->39
0039:  failure 0001: d:5 + 'f' next->40
0040:  failure 0001: d:6 + 'e' next->41
0041:  failure 0001: d:7 + 'r' next->42
0042:  failure 0001: d:8 + '-' next->43
0043:  failure 0001: d:9 + 'E' next->44
0044:  failure 0026: d:10 + 'n' next->45
0045:  failure 0027: d:11 + 'c' next->46
0046:  failure 0028: d:12 + 'o' next->47
0047:  failure 0029: d:13 + 'd' next->48
0048:  failure 0030: d:14 + 'i' next->49
0049:  failure 0031: d:15 + 'n' next->50
0050:  failure 0032: d:16 + 'g' next->51
0051:  failure 0033: d:17 + ':' next->52
0052:  failure 0034: d:18 -
'Transfer-Encoding:' N:2{2  Transfer-Encoding: , 5  Encoding: }
---
 mem size 3336 avg node size 64, node one char 45, <=8c 1, >8c 1, range 1
---DUMP-END-
 */

#ifndef AHO_COMPILED_INC_H
#define AHO_COMPILED_INC_H
struct aho_patterns {
    unsigned short int	len:13,from_start:1,at_end:1,last:1,
			code,
			pattern; // index in patterns array
};

struct aho_node {
    unsigned short f_node; // != 0, index of aho_node array
    unsigned char  degree, // unused if outgoing == 0 
		   alpha;  // unused if outgoing == 0
                           // if outgoing && degree == 0 -> one char alpha
			   // if outgoing && degree != 0 && !range -> outgoing string
			   // if outgoing && degree != 0 && range -> range [alpha : alpha+degree]
    unsigned short outgoing; // offset in outgoing array
    unsigned short patterns:14,final:1,range:1; // index in aho_patterns array
};

struct aho_compiled {
    struct aho_node *a_node;
    struct aho_patterns *pattern_list;
    unsigned short  *next;
    char            *outgoings;
    char            **patterns;
};


#endif

#ifndef AHO_COMPILED_LIB_H
#define AHO_COMPILED_LIB_H

/* toupper()^tolower() from glibc */
static uint8_t aho_xc[256] = {
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,0,0,0,0,0,
  0,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
static char **_patt_ptr = NULL;
static char *_x_txt[] = { "?","FULL","START","END","MATCH" };

static int exact_match(struct aho_patterns *patterns,int pos, int length,
        struct aho_patterns *matched[4]) {
    int i=0;
    int x=0,xr=0;
    while(1) {
        x=0;
        if(patterns->from_start && patterns->at_end) {
            x = 1;
            if(patterns->len == pos && pos == length)
                matched[0] = patterns;
        } else
          if(patterns->from_start) {
            x = 2;
            if(patterns->len == pos) {
                if(!matched[1] || patterns->len > matched[1]->len)
                    matched[1] = patterns;
            }
          } else
            if(patterns->at_end) {
              x = 3;
              if(pos == length) {
                if(!matched[2] || patterns->len > matched[2]->len)
                    matched[2] = patterns;
              }
            } else {
              x = 4;
              if(!matched[3] || patterns->len > matched[3]->len) {
                  matched[3] = patterns;
              }
            }
        if(1 & x) printf("|      %s: len %d code %d '%.*s'%s\n",_x_txt[x],
                      patterns->len,patterns->code,patterns->len,
                      _patt_ptr ? _patt_ptr[patterns->pattern]:"",
                      patterns->last ? " !":"");
        if(x) xr++;
        if(patterns->last) break;
        patterns++;
        i++;
    }
    return xr;
}

int find_aho_str(struct aho_compiled *ac,char *str,int icase) {
  struct aho_node *n;
  struct aho_patterns *apl = ac->pattern_list;
  unsigned short int *n_next = ac->next;
  char c_l,*outg = ac->outgoings,*str0 = str;
  unsigned char c;
  int l = strlen(str),llen = 0;
  int i = 1,next = 0,l0 = l;
  struct aho_patterns *matched[4] = { NULL,NULL,NULL,NULL };
  n = &ac->a_node[i];

  _patt_ptr = ac->patterns;

  while(l != 0) {
    next = 0;
    c = (unsigned char)*str;
    c_l = icase ? aho_xc[c]:0;
    if(n->outgoing) {
        if(!n->degree) {
            next = n->alpha == c ? n->outgoing : 0;
            if(!next && c_l)
                    next = n->alpha == (c ^ c_l) ? n->outgoing : 0;
        } else {
            if(n->range) {
                next = c >= n->alpha && c <= n->alpha+n->degree ?
                            n_next[n->outgoing + c-n->alpha]:0;
                if(!next && c_l) {
                        c ^= c_l;
                		next = c >= n->alpha && c <= n->alpha+n->degree ?
                        		    n_next[n->outgoing + c - n->alpha]:0;
                }
            } else {
                char *x = memchr(&outg[n->outgoing],c,n->degree+1);
                if(!x && c_l)
                        x = memchr(&outg[n->outgoing],c ^ c_l,n->degree+1);
                
                if(x) next = n_next[n->outgoing + (x - &outg[n->outgoing])];
            }
        }
    }
    if(next) {
        i = next; str++; l--;
    } else {
        if(n->f_node)
            i = n->f_node;
         else { 
            str++; l--; 
         }
    }
    n = &ac->a_node[i];
    if(n->final && n->patterns && next) {
        if(exact_match(&apl[n->patterns],str-str0,l0,matched))
            if(0) printf("|     exact_match %s %u/%d\n",str0,str-str0,l0);
    }
  }
  for(i=0; i < 4; i++) {
      if(matched[i]) return matched[i]->code;
  }
  return 0;
}

#endif

struct aho_node a_node_w1[]= {
      { .f_node=0, .degree=0, .alpha=0x00, .outgoing=0, .patterns=0, .final=0, .range=0 },/* 0 */
      { .f_node=0, .degree=17, .alpha=0x43, .outgoing=1, .patterns=0, .final=0, .range=1 },/* 1 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=3, .patterns=0, .final=0, .range=0 },/* 2 */
      { .f_node=1, .degree=2, .alpha=0x00, .outgoing=19, .patterns=0, .final=0, .range=0 },/* 3 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=5, .patterns=0, .final=0, .range=0 },/* 4 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=6, .patterns=0, .final=0, .range=0 },/* 5 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=7, .patterns=0, .final=0, .range=0 },/* 6 */
      { .f_node=1, .degree=0, .alpha=0x74/* 't' */, .outgoing=8, .patterns=0, .final=0, .range=0 },/* 7 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=9, .patterns=0, .final=0, .range=0 },/* 8 */
      { .f_node=1, .degree=0, .alpha=0x45/* 'E' */, .outgoing=10, .patterns=0, .final=0, .range=0 },/* 9 */
      { .f_node=26, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=11, .patterns=0, .final=0, .range=0 },/* 10 */
      { .f_node=27, .degree=0, .alpha=0x63/* 'c' */, .outgoing=12, .patterns=0, .final=0, .range=0 },/* 11 */
      { .f_node=28, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=13, .patterns=0, .final=0, .range=0 },/* 12 */
      { .f_node=29, .degree=0, .alpha=0x64/* 'd' */, .outgoing=14, .patterns=0, .final=0, .range=0 },/* 13 */
      { .f_node=30, .degree=0, .alpha=0x69/* 'i' */, .outgoing=15, .patterns=0, .final=0, .range=0 },/* 14 */
      { .f_node=31, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=16, .patterns=0, .final=0, .range=0 },/* 15 */
      { .f_node=32, .degree=0, .alpha=0x67/* 'g' */, .outgoing=17, .patterns=0, .final=0, .range=0 },/* 16 */
      { .f_node=33, .degree=0, .alpha=0x3a/* ':' */, .outgoing=18, .patterns=0, .final=0, .range=0 },/* 17 */
      { .f_node=34, .degree=0, .alpha=0x00, .outgoing=0, .patterns=1, .final=1, .range=0 },/* 18 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=20, .patterns=0, .final=0, .range=0 },/* 19 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=3, .final=1, .range=0 },/* 20 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=22, .patterns=0, .final=0, .range=0 },/* 21 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=23, .patterns=0, .final=0, .range=0 },/* 22 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=24, .patterns=0, .final=0, .range=0 },/* 23 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=25, .patterns=0, .final=0, .range=0 },/* 24 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=4, .final=1, .range=0 },/* 25 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=27, .patterns=0, .final=0, .range=0 },/* 26 */
      { .f_node=1, .degree=0, .alpha=0x63/* 'c' */, .outgoing=28, .patterns=0, .final=0, .range=0 },/* 27 */
      { .f_node=1, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=29, .patterns=0, .final=0, .range=0 },/* 28 */
      { .f_node=1, .degree=0, .alpha=0x64/* 'd' */, .outgoing=30, .patterns=0, .final=0, .range=0 },/* 29 */
      { .f_node=1, .degree=0, .alpha=0x69/* 'i' */, .outgoing=31, .patterns=0, .final=0, .range=0 },/* 30 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=32, .patterns=0, .final=0, .range=0 },/* 31 */
      { .f_node=1, .degree=0, .alpha=0x67/* 'g' */, .outgoing=33, .patterns=0, .final=0, .range=0 },/* 32 */
      { .f_node=1, .degree=0, .alpha=0x3a/* ':' */, .outgoing=34, .patterns=0, .final=0, .range=0 },/* 33 */
      { .f_node=1, .degree=0, .alpha=0x00, .outgoing=0, .patterns=5, .final=1, .range=0 },/* 34 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=36, .patterns=0, .final=0, .range=0 },/* 35 */
      { .f_node=1, .degree=0, .alpha=0x61/* 'a' */, .outgoing=37, .patterns=0, .final=0, .range=0 },/* 36 */
      { .f_node=1, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=38, .patterns=0, .final=0, .range=0 },/* 37 */
      { .f_node=1, .degree=0, .alpha=0x73/* 's' */, .outgoing=39, .patterns=0, .final=0, .range=0 },/* 38 */
      { .f_node=1, .degree=0, .alpha=0x66/* 'f' */, .outgoing=40, .patterns=0, .final=0, .range=0 },/* 39 */
      { .f_node=1, .degree=0, .alpha=0x65/* 'e' */, .outgoing=41, .patterns=0, .final=0, .range=0 },/* 40 */
      { .f_node=1, .degree=0, .alpha=0x72/* 'r' */, .outgoing=42, .patterns=0, .final=0, .range=0 },/* 41 */
      { .f_node=1, .degree=0, .alpha=0x2d/* '-' */, .outgoing=43, .patterns=0, .final=0, .range=0 },/* 42 */
      { .f_node=1, .degree=0, .alpha=0x45/* 'E' */, .outgoing=44, .patterns=0, .final=0, .range=0 },/* 43 */
      { .f_node=26, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=45, .patterns=0, .final=0, .range=0 },/* 44 */
      { .f_node=27, .degree=0, .alpha=0x63/* 'c' */, .outgoing=46, .patterns=0, .final=0, .range=0 },/* 45 */
      { .f_node=28, .degree=0, .alpha=0x6f/* 'o' */, .outgoing=47, .patterns=0, .final=0, .range=0 },/* 46 */
      { .f_node=29, .degree=0, .alpha=0x64/* 'd' */, .outgoing=48, .patterns=0, .final=0, .range=0 },/* 47 */
      { .f_node=30, .degree=0, .alpha=0x69/* 'i' */, .outgoing=49, .patterns=0, .final=0, .range=0 },/* 48 */
      { .f_node=31, .degree=0, .alpha=0x6e/* 'n' */, .outgoing=50, .patterns=0, .final=0, .range=0 },/* 49 */
      { .f_node=32, .degree=0, .alpha=0x67/* 'g' */, .outgoing=51, .patterns=0, .final=0, .range=0 },/* 50 */
      { .f_node=33, .degree=0, .alpha=0x3a/* ':' */, .outgoing=52, .patterns=0, .final=0, .range=0 },/* 51 */
      { .f_node=34, .degree=0, .alpha=0x00, .outgoing=0, .patterns=6, .final=1, .range=0 },/* 52 */
      {} };
    struct aho_patterns pattern_list_w1[]= {
      { .len=0, .from_start=0, .at_end=0, .last=0, .code=0, .pattern=0 }, /* 0 */
      { .len=17, .from_start=0, .at_end=0, .last=0, .code=1, .pattern=1 }, /* 1 */
      { .len=9, .from_start=0, .at_end=1, .last=1, .code=5, .pattern=2 }, /* 2 */
      { .len=4, .from_start=0, .at_end=1, .last=1, .code=3, .pattern=3 }, /* 3 */
      { .len=7, .from_start=0, .at_end=1, .last=1, .code=4, .pattern=4 }, /* 4 */
      { .len=9, .from_start=0, .at_end=1, .last=1, .code=5, .pattern=2 }, /* 5 */
      { .len=18, .from_start=0, .at_end=0, .last=0, .code=2, .pattern=5 }, /* 6 */
      { .len=9, .from_start=0, .at_end=1, .last=1, .code=5, .pattern=2 }, /* 7 */
      {}};
    char outgoings_w1[] =
		"#CDEFGHIJKLMNOPQRSTnDd";
    unsigned short next_w1[]= {
      0,2,0,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,4,19,21,};
    char *patterns_w1[]= { NULL,
      "Content-Encoding:", /* 1 */
      "Encoding:", /* 2 */
      "CoD:", /* 3 */
      "Coding:", /* 4 */
      "Transfer-Encoding:", /* 5 */
      NULL };

    struct aho_compiled w1 = {
        .a_node       = &a_node_w1[0],
        .pattern_list = &pattern_list_w1[0],
        .next         = &next_w1[0],
        .outgoings    = &outgoings_w1[0],
        .patterns     = &patterns_w1[0]
    };
    /*
       Total length of all patterns 60 bytes
       sizeof a_node_w1		52*8 -> 416 bytes
       sizeof pattern_list_w1	9*6 -> 54 bytes
       sizeof next_w1		22*2 -> 46 bytes
       sizeof patterns_w1	7*8 -> 56 bytes
       sizeof outgoings_w1	23 bytes
     */

#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <sys/time.h>

#if defined(C1)
#include "aho-c1.h"
#define DATAFILE "aho-c1.dat"
#elif defined(C2)
#include "aho-c2.h"
#define DATAFILE "aho-c2.dat"
#elif defined(C3)
#include "aho-c3.h"
#define DATAFILE "aho-c3.dat"
#elif defined(C4)
#include "aho-c4.h"
#define DATAFILE "aho-c4.dat"
#else
#error C1-C4 undefined
#endif


/* toupper()^tolower() from glibc */
static uint8_t aho_xc[256] = {
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
 32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,   0,   0,   0,   0,   0,
  0,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,
 32,  32,  32,  32,  32,  32,  32,  32,  32,  32,  32,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
};
static char **_patt_ptr = NULL;
static char *_x_txt[] = { "?","FULL","START","END","MATCH" };

static int exact_match(struct aho_patterns *patterns,int pos, int length,
        int *matched) {
    int i;
    int x=0,xr=0;
    while(1) {
        x=0;
        if(patterns->from_start && patterns->at_end) {
            x = 1;
            if(patterns->len == pos && pos == length) {
                matched[0] = patterns->len;
                matched[1] = patterns->code;
            }
        } else
          if(patterns->from_start) {
            x = 2;
            if(patterns->len == pos) {
                if(patterns->len > matched[2]) {
                    matched[2] = patterns->len;
                    matched[3] = patterns->code;
                }
            }
          } else
            if(patterns->at_end) {
              x = 3;
              if(pos == length) {
                if(patterns->len > matched[4]) {
                    matched[4] = patterns->len;
                    matched[5] = patterns->code;
                }
              }
            } else {
              x = 4;
              if(patterns->len > matched[6]) {
                  matched[6] = patterns->len;
                  matched[7] = patterns->code;
              }
            }
        if(1 & x) printf("|      %s: len %d code %d '%.*s'%s\n",_x_txt[x],
                      patterns->len,patterns->code,patterns->len,
                      _patt_ptr ? _patt_ptr[patterns->pattern]:"",
                      patterns->last ? " !":"");
        if(x) xr++;
        if(patterns->last) break;
        patterns++;
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
  int matched[8] = { 0,0,0,0,0,0,0,0 };
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
  for(i=0; i < 8; i+=2) {
      if(matched[i]) return matched[i+1];
  }
  return 0;
}

char *chomp(char *buf) {
    char *c;
    if(!buf) return NULL;
    if(!*buf) return buf;
    c = buf + strlen(buf);
    do {
        c--;
        if(*c == '\n' || *c == '\r' || *c == '\t' || *c == ' ') *c = '\0';
    } while(!*c && c != buf);
    if((*buf == '"' || *buf == '\'') && *c == *buf) {
        *c = 0;
        buf++;
        c--;
    }
    if(*buf == '|') buf++;
    if(*c == '|') *c = 0;
    return buf;
}

int find_pattern(struct aho_compiled *ac,char *str,int lineno) {
    struct aho_patterns *apl = ac->pattern_list;
    int n = sizeof(pattern_list_w1)/sizeof(pattern_list_w1[0]);
    int l = strlen(str);
    int i;
    if(!ac->patterns) return lineno;
    for(i = 1; i < n ; i++,apl++) {
        if(l != apl->len) continue;
        if(!strcmp(ac->patterns[apl->pattern],str))
            return apl->code;
    }
    return 0;
}

int main(int argc,char **argv) {
int i,l,r0,r1,r2,nolc,lineno;
FILE *ifd;
char *c,*c0,buf[256];

nolc = getenv("NOLC") ? 1:0;
ifd = fopen(DATAFILE,"r");
i=0;
r2 = 0;
lineno = 0;
while((c = fgets(buf,sizeof(buf)-1,ifd)) != NULL) {
    if(!strncmp(buf,"H_",2)) continue;
    c0 = chomp(buf);
    if(!c0[0]) continue;

    lineno++;
    i = find_pattern(&w1,c0,lineno);
//    printf("=>%3d %s\n",i,c0);
    r0 = find_aho_str(&w1,c0,0);
    printf("%s> %3d %3d %s\n",r0 != i ? "!":"",r0,i,c0);
    if(r0 != i) r2++;
    if(nolc) continue;
    for(c = c0; *c; c++) *c = tolower(*c);
    r1 = find_aho_str(&w1,c0,1);
    printf("%s> %3d %s\n",i != r1 ? "!":"",r1,c0);
    for(c = c0; *c; c++) *c = toupper(*c);
    r1 = find_aho_str(&w1,c0,1);
    printf("%s> %3d %s\n",i != r1 ? "!":"",r1,c0);
}
fclose(ifd);
printf("%d\n",r2);
return 0;
}


/* vim: set ts=4 sw=4 et foldmarker={{{{,}}}} foldmethod=marker :  */


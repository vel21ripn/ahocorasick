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

#include "aho-compiled-lib.c"

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
int i,l,r2,nolc,lineno;
struct aho_patterns *r0,*r1;
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
    printf("%s> %3d %3d %s\n",(r0 && r0->code == i) ? "":"!",r0 ? r0->code:-1,i,c0);
    if(!r0 || r0->code != i) r2++;
    if(nolc) continue;
    for(c = c0; *c; c++) *c = tolower(*c);
    r1 = find_aho_str(&w1,c0,1);
    printf("%s> %3d %s\n",!(r1 && r1->code == i) ? "!":"",r1 ? r0->code:-1,c0);
    for(c = c0; *c; c++) *c = toupper(*c);
    r1 = find_aho_str(&w1,c0,1);
    printf("%s> %3d %s\n",!(r1 && r1->code == i) ? "!":"",r1 ? r0->code:-1,c0);
}
fclose(ifd);
printf("%d\n",r2);
return 0;
}


/* vim: set ts=4 sw=4 et foldmarker={{{{,}}}} foldmethod=marker :  */


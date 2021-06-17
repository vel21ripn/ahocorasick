#define _DEFAULT_SOURCE
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <sys/time.h>
#include <sched.h>

struct host_info {
	char *host;
	int   loc;
	char *LO;
};

#ifdef BIGRAM
#include "bigram.h"
#define HOSTINFO(a)  ndpi_en_bigrams[a]
#define HOSTLOC(a)  1
#else
 #ifdef AHOST
 #include "all_hosts.h"
 #define HOSTINFO(a)  host_match[a].host
 #define HOSTLOC(a)  host_match[a].loc
 #else
 #include "all_hosts2.h"
 #define HOSTINFO(a)  host_list[a].host
 #define HOSTLOC(a)  host_list[a].loc
 #endif
#endif


#include "ndpi_api.h"

#include "ahocorasick.h"

#if 0
// for pahole
AC_PATTERNS_t xxx1 = { 0 };
AC_PATTERN_t xxx2 = { 0 };
AC_REP_t xxx3 = { 0 };
AC_MATCH_t xxx4 = { 0 };
AC_TEXT_t xxx5 = { 0 };
#endif

void *ndpi_malloc(size_t size) {
	return malloc(size);
}

void *ndpi_calloc(size_t n, size_t size) {
	return calloc(n,size);
}

void ndpi_free(void *ptr) {
	free(ptr);
}
void *ndpi_realloc(void *ptr, size_t osize, size_t nsize) {
	return realloc(ptr,nsize);
}

int ac_automata_cb(AC_MATCH_t *m, AC_TEXT_t *t,AC_REP_t *data) {

	data->number = m->patterns[0].rep.number;
//	((struct ret_id *)data)->position = m->position;

//	*(int *)data = m->patterns[0].rep.number;
//	_last_id = m->patterns[0].rep.number;
//	printf("CB %s %lu\n",m->patterns[0].astring,m->patterns[0].rep.number);
	return 0;
}

int add_str(AC_AUTOMATA_t *ac,char *str,int n) {
AC_PATTERN_t patt;
AC_ERROR_t r;
	bzero((char *)&patt,sizeof(patt));
	patt.astring = (AC_ALPHABET_t *)str;
	patt.length = strlen(str);
	patt.rep.number = n;
	r = ac_automata_add(ac,&patt);
	if(r != ACERR_SUCCESS)
		printf("Add %s %d\n",str,r);
	return r == ACERR_SUCCESS;
}

int find_str(AC_AUTOMATA_t *ac,char *str,int ic) {
AC_TEXT_t text;
int r;
AC_REP_t id;

	text.astring = (AC_ALPHABET_t *)str;
	text.length = strlen(str);
#ifdef NEW_AHO
	text.ignore_case = ic;
#endif
	id.number = -1;

	r = ac_automata_search(ac,&text,&id);

//	if(r < 0 || id.number == -1)
//		printf("%s NOT FOUND\n",str);
	return r >= 0 && id.number != -1;
}

static inline int is_skipped(int i,int p) {
  return (i % 10) < p;
}

char s_buf[512];

int main(int argc,char **argv) {

AC_AUTOMATA_t *ac,*acx[11];
char **up_str;
int x,p,i,c = 0,c1,max_j,max_p;
int icase = 0;
struct sched_param sch;
int cpid;
cpu_set_t set;
struct timeval tv1,tv2;
#ifdef BIGRAM
int max_i = sizeof(ndpi_en_bigrams)/sizeof(ndpi_en_bigrams[0]);
#define L0 3200
#else
  #ifdef AHOST
  int max_i = sizeof(host_match)/sizeof(host_match[0]);
  #define L0 900
  #else
  int max_i = sizeof(host_list)/sizeof(host_list[0]);
  #define L0 20
  #endif
#endif
 max_j = L0;
 max_p = 10;
 if(argv[1] && atoi(argv[1]) > 0 && atoi(argv[1]) < max_i) max_i = atoi(argv[1]);
 if(argc > 2 && argv[2] && atoi(argv[2]) >= 0) max_j = atoi(argv[2]);
 if(argc > 3 && argv[3] && atoi(argv[3]) > 0 && atoi(argv[3]) <= 10 ) max_p = atoi(argv[3]);

// c256 = getenv("C256") ? 1:0;
#ifdef NEW_AHO
icase = getenv("ICASE") ? 1:0;
#else
icase = 0;
#endif
nice(20);
bzero((char *)&sch,sizeof(sch));
cpid = getpid();
sch.sched_priority = sched_get_priority_max(SCHED_FIFO);
sched_setscheduler(cpid,SCHED_FIFO,&sch);
CPU_ZERO(&set);
CPU_SET(7, &set);
if(sched_setaffinity(cpid,sizeof(set), &set) == -1)
	perror("sched_setaffinity");
up_str = calloc(max_i,sizeof(char *));

srandom(time(NULL));
c1 = 0;
for(p=0; p < max_p; p++) {
  ac = ac_automata_init(NULL /*ac_automata_cb*/);
  if(!ac) abort();
#ifdef NEW_AHO
//  if(ac_automata_feature(ac,AC_FEATURE_NO_ROOT_RANGE) != ACERR_SUCCESS) abort();
#endif
  c1 = 0;
  for(i=0; i < max_i && HOSTINFO(i); i++) {
  	char *sc;
	if(is_skipped(i,p)) continue;
	if(!add_str(ac,HOSTINFO(i),HOSTLOC(i)))
		abort();
	c1++;
	if(!icase) continue;
	strncpy(s_buf,HOSTINFO(i),sizeof(s_buf));
	for(sc = s_buf; *sc; sc++) *sc = toupper(*sc);
	up_str[i] = strdup(s_buf);
}
  ac_automata_finalize(ac);
  acx[p] = ac;
#ifdef NEW_AHO
  if(0 && p <= 0) {
	  printf("P=%d\n",p);
	  ac_automata_dump(ac,NULL);
  }
#endif
 }
gettimeofday(&tv1,NULL);
c=0;
for(x=0; x < max_j; x++) {
 for(p=0; p < max_p; p++) {
  ac = acx[p];
    for(i=0; i < max_i && HOSTINFO(i); i++) {
	if(icase) {
	    if(!find_str(ac,up_str[i],1)) {
  		if(!is_skipped(i,p))
  			c++;
  	    }
	} else {
	    if(!find_str(ac,HOSTINFO(i),0)) {
  		if(!is_skipped(i,p))
  			c++;
  	    }
	}
    }
 }
}
gettimeofday(&tv2,NULL);
printf("time %lld usec ",(tv2.tv_sec*1000000ll + tv2.tv_usec) -
		(tv1.tv_sec*1000000ll + tv1.tv_usec));
if(c) printf("error %d/%d max_j %d max_p %d",c/(max_j*max_p),c1,max_j,max_p);

printf("\n");

for(p=0; p < max_p; p++) {
  ac_automata_release(acx[p],0);
}
if(icase) {
  for(i=0; i < max_i && HOSTINFO(i); i++) {
	if(up_str[i]) free(up_str[i]);
  }
}
free(up_str);
return 0;
}


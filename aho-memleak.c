#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <execinfo.h>

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

#define BT_BUF_SIZE 128

int debug_alloc_flag=0;

char *pr_call(char *rbuf,size_t rb_size) {
   int nptrs;
   void *buffer[BT_BUF_SIZE];
   char **strings;

   nptrs = backtrace(buffer, BT_BUF_SIZE);

   /* The call backtrace_symbols_fd(buffer, nptrs, STDOUT_FILENO)
      would produce similar output to the following: */

   strings = backtrace_symbols(buffer, nptrs);
   if (strings == NULL) {
       perror("backtrace_symbols");
       exit(EXIT_FAILURE);
   }
   if(nptrs > 5) nptrs = 5;
   for (int j = 2, l=0; j < nptrs; j++)
       l += snprintf(rbuf + l,rb_size - l,"%s%s",strings[j]?strings[j]:NULL,j < nptrs-1 ? ",":"");

   free(strings);
   return rbuf;
}

void *ndpi_malloc(size_t size) {
  void *r = malloc(size);
  char buf[256];
  if(debug_alloc_flag) printf("malloc(%d)=%lx %s\n",(int)size,(unsigned long)r,
	 pr_call(buf,sizeof(buf)-1));
  return r;
}

void *ndpi_calloc(size_t n, size_t size) {
  void *r = calloc(n,size);
  char buf[256];
  if(debug_alloc_flag) printf("calloc(%d,%d)=%lx %s\n",(int)n,(int)size,(unsigned long)r,
	 pr_call(buf,sizeof(buf)-1));
  return r;
}

void ndpi_free(void *ptr) {
  char buf[256];
  if(debug_alloc_flag) printf("free(%lx) %s\n",(unsigned long)ptr,
	 pr_call(buf,sizeof(buf)-1));
  free(ptr);
}
void *ndpi_realloc(void *ptr, size_t osize, size_t nsize) {
  void *r = realloc(ptr,nsize);
  char buf[256];
  if(debug_alloc_flag) printf("realloc(%lx,%d,%d)=%lx %s\n",
	(unsigned long)ptr,(int)osize,(int)nsize,(unsigned long)r,
	 pr_call(buf,sizeof(buf)-1));
  return r;
}

int ac_automata_cb(AC_MATCH_t *m, AC_TEXT_t *t,AC_REP_t *data) {

	data->number = m->patterns[0].rep.number;
	return 0;
}

int add_str(AC_AUTOMATA_t *ac,char *str,int n) {
AC_PATTERN_t patt;
AC_ERROR_t r;
	bzero((char*)&patt,sizeof(patt));
	patt.astring = (AC_ALPHABET_t *)str;
	patt.length = strlen(str);
	patt.rep.number = n;
	r = ac_automata_add(ac,&patt);
	if(r != ACERR_SUCCESS)
		printf("Add %s %d\n",str,r);
	return r == ACERR_SUCCESS;
}

int find_str(AC_AUTOMATA_t *ac,char *str) {
AC_TEXT_t text;
int r;
AC_REP_t id;

	text.astring = (AC_ALPHABET_t *)str;
	text.length = strlen(str);
	id.number = -1;

	r = ac_automata_search(ac,&text,&id);

//	if(r < 0 || id.number == -1)
//		printf("%s NOT FOUND\n",str);
	return r >= 0 && id.number != -1;
}

int main(int argc,char **argv) {

AC_AUTOMATA_t *ac;
int i,j,max_j,c256;
struct timeval tv1,tv2;
#ifdef BIGRAM
int max_i = sizeof(ndpi_en_bigrams)/sizeof(ndpi_en_bigrams[0]);
#define L0 2400
#else
  #ifdef AHOST
  int max_i = sizeof(host_match)/sizeof(host_match[0]);
  #define L0 400
  #else
  int max_i = sizeof(host_list)/sizeof(host_list[0]);
  #define L0 10
  #endif
#endif
  max_j = L0;
  if(argv[1] && atoi(argv[1]) > 0 && atoi(argv[1]) < max_i) max_i = atoi(argv[1]);
  if(argc > 2 && argv[2] && atoi(argv[2]) > 0) max_j = atoi(argv[2]);
  c256 = getenv("C256") ? 1:0;
  gettimeofday(&tv1,NULL);
i=0;
for(j=0; j < max_j; j++) {
  ac = ac_automata_init(ac_automata_cb);
//  if(c256 && ac_automata_feature(ac,AC_FEATURE_8BIT) != ACERR_SUCCESS) abort();
  if(!ac) abort();
  for(i=0; i < max_i && HOSTINFO(i); i++) {
	if(!add_str(ac,HOSTINFO(i),HOSTLOC(i)))
		abort();
  }
  ac_automata_finalize(ac);
#ifdef NEW_AHO
  if(j == 0) {
	  printf("all:%d one:%d range:%d find:%d\t",
		ac->all_nodes_num,ac->n_oc,ac->n_range,ac->n_find);
  }
  {
    char buf[256];
    if(max_j == 1 && getenv("DUMP")) ac_automata_dump(ac,buf,sizeof(buf)-1,1);
  }
#endif
  ac_automata_release(ac,0);
}
  gettimeofday(&tv2,NULL);
  printf("time %lld usec ",(tv2.tv_sec*1000000ll + tv2.tv_usec) -
                (tv1.tv_sec*1000000ll + tv1.tv_usec));
  printf("i=%d %s max_j %d max_i %d\n",i,c256 ? "256":"128",max_j,max_i);

return 0;
}


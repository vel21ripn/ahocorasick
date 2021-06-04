#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <sys/time.h>
#include <execinfo.h>

#include "ndpi_api.h"

#include "ahocorasick.h"

#include "libahocorasick-c.h"
struct aho_compile {
    int             outgoing_count;
    int             pattern_count;
    int             pattern_list_count;
    int				pattern_length;
    int             last_outgoing;
    int             last_pattern;
    int             last_pattern_list;
    struct aho_node *a_node;
    struct aho_patterns *pattern_list;
    int             *next;
    char            *outgoings;
    char            **patterns;
};

struct lines_list {
    struct lines_list *next;
    char *str;
    int len;
    int code;
} *lines = NULL;

static inline AC_ALPHABET_t *edge_get_alpha(struct edge *e) {
        return (AC_ALPHABET_t *)(&e->next[e->max]);
}

void x_automata_compile(AC_AUTOMATA_t * thiz, char *rstr, size_t rstr_size,const char *name,int do_patt);

// {{{{
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
	return 0;
}

int add_str(AC_AUTOMATA_t *ac,char *str,int n) {
AC_PATTERN_t patt;
AC_ERROR_t r;
struct lines_list *ll;
char *s;
int l;

    bzero((char *)&patt,sizeof(patt));
    l = strlen(str);
    s = str;
    if(l > 2 && (*s == '"' || *s == '\'')) {
        if(s[l-1] == *s) {
            s[l-1] = '\0';
            s++;
            l -= 2;
        }
    }
    if(*s == '|') {
        patt.rep.from_start = 1;
        s++;
        l--;
    }
    if(l > 1 && s[l-1] == '|') {
        s[l-1] = 0;
        patt.rep.at_end = 1;
        l--;
    }
    if(l < 1) return ACERR_ZERO_PATTERN;

    if(patt.rep.from_start) printf("// Match from start %.*s\n",l,s);

    if(patt.rep.at_end) printf("// Match at end %.*s\n",l,s);

	patt.length = l;
	patt.rep.number = n;
    patt.astring = (AC_ALPHABET_t *)s;
	r = ac_automata_add(ac,&patt);
	if(r != ACERR_SUCCESS)
		printf("// ac_automata_add error: %s %d\n",str,r);
    ll = malloc(sizeof(*ll));
    if(!ll) abort();
    ll->next = lines;
    ll->str = strdup(str);
    ll->len = l;
    ll->code = n;
    lines = ll;
	return r == ACERR_SUCCESS;
}

int find_str(AC_AUTOMATA_t *ac,char *str,int len) {
AC_TEXT_t text;
int r;
AC_REP_t id;

    memset((char *)&text,0,sizeof(text));
	text.astring = (AC_ALPHABET_t *)str;
	text.length = len;
	id.number = -1;

	r = ac_automata_search(ac,&text,&id);

	return r >= 0 && id.number != -1 ? id.number:-1;
}
// }}}}

void chomp(char *buf) {
    char *c;
    if(!buf || !*buf) return;
    c = buf + strlen(buf);
    do {
        c--;
        if(*c == '\n' || *c == '\r' || *c == '\t' || *c == ' ') *c = '\0';
    } while(!*c && c != buf);
}

void usage(char *s) {
    if(s) printf("%s\n",s);
     else {
         printf("aho-compile -N name [-D] [-A] [-I] [-d] [-p] [-h] file\n\
   -A           - no auto numbering\n\
   -d           - dump tree (for debug)\n\
   -D           - with define\n\
   -I           - ignore case by default\n\
   -p           - no patterns output\n\
   -h           - help\n");
     }
     exit(0);
}

int main(int argc,char **argv) {

char buf[256],buf2[256],ac_name[256];
AC_AUTOMATA_t *ac;
struct lines_list *ll;
int i,c;
int with_def = 0;
int is_hex = 0;
int no_inc = 0;
int to_lc = 0;
int do_dump = 0;
int do_patt = 1;
FILE *ifd;

  ac_name[0] = 0;

  while ((c = getopt(argc, argv, "hN:DAIdp")) != -1) {
    switch(c) {
      case 'h':
          usage(NULL);
      case 'N':
          strncpy(ac_name,optarg,sizeof(ac_name));
          break;
      case 'D':
          with_def = 1;
          break;
      case 'A':
          no_inc = 1;
          break;
      case 'I':
          to_lc = 1;
          break;
      case 'd':
          do_dump = 1;
          break;
      case 'p':
          do_patt = 0;
          break;
    }
  }
  if(!ac_name[0]) usage(NULL);
  if (optind < argc) {
      ifd = fopen(argv[optind],"r");
      if(!ifd) abort();
  } else
      ifd = stdin;
  ac = ac_automata_init(ac_automata_cb);
  if(!ac) abort();
  ac_automata_feature(ac,AC_FEATURE_NO_ROOT_RANGE | (to_lc ? AC_FEATURE_LC:0));
  i=1;
  while(1) {
    if(!fgets(buf,sizeof(buf)-1,ifd)) break;
    if(buf[0] == '#') continue;
    chomp(buf);
    if(!buf[0]) continue;
      if(with_def) {
        if(!fgets(buf2,sizeof(buf2)-1,ifd)) break;
        chomp(buf2);
        if(!buf2[0]) break;
        {
            int n;
            char *w1 = strtok(buf," \t");
            char *w2 = strtok(NULL," \t");
            char w2b[32],*e;
            strtok(NULL," \t");
            if(!w1) { printf("!w1\n"); abort();}
            if(w2) {
                n = strtoul(w2,&e,0);
                if(e && *e) { printf("strtoul\n"); abort(); }
                i = n;
                if(w2[1] == 'x') is_hex = 1;
            } else {
                snprintf(w2b,sizeof(w2b)-1,is_hex ? "0x%x":"%d",i);
                w2 = w2b;
            }
            if(!add_str(ac,strdup(buf2),i))	{ printf("add_str '%s' %d\n",buf2,i); abort(); };
            printf("#define %s %s\n",w1,w2);
        }
      } else {
    	if(!add_str(ac,strdup(buf),i)) { printf("add_str '%s' %d\n",buf,i); abort(); };
//        printf("// %s %d\n",buf,i);
      }
    if(!no_inc) i++;
  }
  if(with_def) printf("\n");
  if(ifd != stdin) fclose(ifd);
  ac_automata_finalize(ac);
  if(do_dump) {
        printf("/*\n");
        ac_automata_dump(ac,buf,sizeof(buf)-1,1);
        printf(" */\n");
  }
  for(ll = lines; ll; ll = ll->next) {
      int num = find_str(ac,ll->str,ll->len);
      if(num != ll->code)
          fprintf(stderr,"%.*s %d != %d\n",ll->len,ll->str,num,ll->code);
  }
  x_automata_compile(ac,buf,sizeof(buf)-1,ac_name,do_patt);

  ac_automata_release(ac,0);
  return 0;
}

int xlen(int n) {
    int r = 1;
    while(n >= 10) {
        r++;
        n /= 10;
    }
    return r;
}

// debug stuff {{{{
#if 0
static void xdump_node_header(AC_NODE_t * n) {
    char *c;
    int i;
    printf("%04d: ",n->id);
    if(n->failure_node) printf(" failure %04d:",n->failure_node->id);
    printf(" d:%d %c",n->depth, n->use ? '+':'-');
    if(n->final && n->matched_patterns) {
        printf(" (F:%d)",n->matched_patterns->num);
    }
    if(!n->use) { printf("\n"); return; }
    if(n->one) {
            printf(" '%c' next->%d\n",n->one_alpha,
                n->outgoing ? ((AC_NODE_t *)n->outgoing)->id : -1);
            return;
    }
    if(!n->outgoing) {
            printf(" BUG! !outgoing\n");
            return;
    }
    printf("%s\n",n->range ? " RANGE":"");
    c = (char *)edge_get_alpha(n->outgoing);
    for(i=0; i < n->outgoing->degree; i++) {
            printf("  %d: \"%c\" -> %d\n",i,c[i],
                    n->outgoing->next[i] ? n->outgoing->next[i]->id:-1);
    }

}
#endif
// }}}}

static AC_ERROR_t ac_automata_count_cb(AC_AUTOMATA_t * thiz, AC_NODE_t * n, int idx, void *data ) {
    struct aho_compile *ac = (struct aho_compile *)data;
    if(n->use) {
        if(!n->one && n->outgoing->degree > 1) {
            ac->outgoing_count += n->outgoing->degree;
        }
    }
    if (n->matched_patterns && n->matched_patterns->num && n->final) {
        int j;

        ac->pattern_list_count += n->matched_patterns->num;
        for(j = 0; j < n->matched_patterns->num; j++) {
            AC_PATTERN_t *sid = &n->matched_patterns->patterns[j];
            if(!sid->is_existing) {
				ac->pattern_count++;
				ac->pattern_length += sid->length;
			}
        }
    }
    return ACERR_SUCCESS;
}

int aho_find_pattern(struct aho_compile *ac, char *str,size_t strlen) {
int i,j;
for(i = 1; i < ac->last_pattern_list; i++) {
    j = ac->pattern_list[i].pattern;
    if(ac->pattern_list[i].len == strlen &&
            !memcmp(ac->patterns[j],str,strlen)) {
            return j;
    }
}
return 0;
}

void x_automata_compile(AC_AUTOMATA_t * thiz, char *rstr, size_t rstr_size,const char *name,int do_patt) {
  unsigned int i, j, ip, l;

  struct aho_compile ac;
  struct ac_path *path;
  struct aho_node *an;
  AC_NODE_t * n, *next;
  AC_ALPHABET_t alpha;
  struct aho_patterns *apl;

  bzero((char *)&ac,sizeof(ac));
  ac_automata_walk(thiz,ac_automata_count_cb,NULL,&ac);
  ac.a_node    = calloc(thiz->all_nodes_num+2,sizeof(struct aho_node));
  ac.outgoings = calloc(1,ac.outgoing_count+2);
  ac.next      = calloc(ac.outgoing_count+1,sizeof(int));
  ac.patterns  = calloc(ac.pattern_count+1,sizeof(char *));
  ac.pattern_list = calloc(ac.pattern_list_count+1,sizeof(struct aho_patterns));

  ac.last_pattern=1;
  ac.last_pattern_list=1;
  ac.last_outgoing=1;
  *ac.outgoings = '#';

  if(!ac.a_node) abort();

  path  = thiz->ac_path;

  if(0) printf("---DUMP- all nodes %u - max strlen %u -%s-  outgoung %d, pattern_list %d, pattern %d --\n",
          (unsigned int)thiz->all_nodes_num,
          (unsigned int)thiz->max_str_len,
          thiz->automata_open ? "open":"ready",
          ac.outgoing_count,
          ac.pattern_list_count,
          ac.pattern_count
          );
//  printf("root: %d\n",thiz->root->id);
  path[1].n = thiz->root;
  path[1].idx = 0;
  path[1].l = 0;
  ip = 1;
  *rstr = '\0';
  while(ip != 0) {

    n = path[ip].n;
    if(!path[ip].idx) {
        // xdump_node_header(n);
        an = &ac.a_node[n->id];
        an->f_node = n->failure_node ? n->failure_node->id : 0;
        if(n->use) {
            an->range = n->range;
            if(n->one) {
                an->degree = 0;
                an->alpha = n->one_alpha;
                an->outgoing = ((AC_NODE_t *)n->outgoing)->id;
            } else {
                int nn;
                char *c = (char *)edge_get_alpha(n->outgoing);
                uint8_t c_x,c_f=0;
                an->degree = n->outgoing->degree - 1;
                an->alpha = n->range ? n->one_alpha:0;
                an->outgoing = ac.last_outgoing;
                for(nn = 0; nn < n->outgoing->degree; nn++,ac.last_outgoing++) {
                    ac.outgoings[ac.last_outgoing] = c[nn];
                    ac.next[ac.last_outgoing] = n->outgoing->next[nn] ? n->outgoing->next[nn]->id:0;
                    c_x = toupper(c[nn]) ^ tolower(c[nn]);
                    if(c_x) {
                        char *c_d = memchr(c,c[nn]^c_x,n->outgoing->degree);
                        if(c_d && !c_f) {
                            if(n->outgoing->next[nn] != n->outgoing->next[c_d-c]) {
                                fprintf(stderr,"Warning! node %d '%c' and '%c' not equal\n",n->id,c[nn],c[nn]^c_x);
                                c_f = 1;
                            }
                        }
                    }
                }
            }
        }
    
        if (n->matched_patterns && n->matched_patterns->num && n->final) {
        AC_PATTERN_t *sid;
        char lbuf[300];
        int nl = 0;

        apl = &ac.pattern_list[ac.last_pattern_list];
        an->final = 1;
        an->patterns = ac.last_pattern_list;

        nl = snprintf(lbuf,sizeof(lbuf),"'%.100s' N:%d{",rstr,n->matched_patterns->num);
        for (j=0; j<n->matched_patterns->num; j++,apl++)
          {
            sid = &n->matched_patterns->patterns[j];
            apl->len = sid->length;
            apl->from_start = sid->rep.from_start;
            apl->at_end = sid->rep.at_end;
            apl->last = j == n->matched_patterns->num - 1;
            apl->code = sid->rep.number;

            apl->pattern = aho_find_pattern(&ac,sid->astring,sid->length);
            if(!apl->pattern) {
                apl->pattern = ac.last_pattern;
                ac.patterns[ac.last_pattern] = sid->astring;
                ac.last_pattern++;
            }
            ac.last_pattern_list++;

            if(j) nl += snprintf(&lbuf[nl],sizeof(lbuf)-nl-1,", ");
            nl += snprintf(&lbuf[nl],sizeof(lbuf)-nl-1,"%d %c%.100s%c",
                            sid->rep.number & 0x3fff,
                            sid->rep.number & 0x8000 ? '^':' ',
                            sid->astring,
                            sid->rep.number & 0x4000 ? '$':' ');
          }
        if(0) printf("%s}\n",lbuf);
      }
    }
    if(!n->use) {
        ip--;
        continue;
    }

    l = path[ip].l;

    if( l >= rstr_size-1) {
        ip--; continue;
    }

    i = path[ip].idx;

    if(!n->use || (n->one && i > 0) || !n->outgoing) {
        ip--; continue;
    }
    if(n->one && !i) {
        next = (AC_NODE_t *)n->outgoing;
        alpha = n->one_alpha;
    } else {
        next = NULL;
        while(i < n->outgoing->degree) {
            next = n->outgoing->next[i];
            if(next) break;
            i++;
        }
        if(!next) {
            ip--; continue;
        }
        alpha = edge_get_alpha(n->outgoing)[i];
    }

    path[ip].idx = i+1;

    if(ip >= AC_PATTRN_MAX_LENGTH)
        continue;
    ip++;

    rstr[l] = alpha;
    rstr[l+1] = '\0';

    path[ip].n = next;
    path[ip].idx = 0;
    path[ip].l = l+1;
  }

// printf("---DUMP-END-\n");

  printf("#include \"libahocorasick-c.h\"\n");
  printf("struct aho_node a_node_%s[]= {\n",name);
  for(i=0,an = ac.a_node; i <= thiz->all_nodes_num+1; i++,an++) {
      char buf[12];
      if(an->outgoing && !an->degree) 
          snprintf(buf,sizeof(buf)-1,"/* '%c' */",an->alpha);
        else buf[0] = '\0';
      printf("      { .f_node=%d, .degree=%d, .alpha=0x%02x%s, .outgoing=%d, .patterns=%d, .final=%d, .range=%d },/* %d */\n",
            an->f_node, an->degree, an->alpha, buf, an->outgoing, an->patterns, an->final & 1, an->range & 1, i);
      if(0) {
          if(an->outgoing && an->degree) {
              printf("// ");
              for(j=0; j <= an->degree; j++) printf("%c:%d ",ac.outgoings[an->outgoing+j],ac.next[an->outgoing+j]);
              printf("\n");
          }
          if(an->patterns) {
              printf("// RET:%d %s\n",ac.pattern_list[an->patterns].code,
                      ac.patterns[ac.pattern_list[an->patterns].pattern]);
          }
      }
  }
  printf("      {} };\n    struct aho_patterns pattern_list_%s[]= {\n",name);
  apl = &ac.pattern_list[0];
  for(i=0; i < ac.last_pattern_list; i++,apl++) {
      printf("      { .len=%d, .from_start=%d, .at_end=%d, .last=%d, .code=%d, .pattern=%d }, /* %d */\n",
              apl->len,apl->from_start,apl->at_end,apl->last,apl->code,apl->pattern,i);
  }
  printf("      {}};\n    char outgoings_%s[] = \"",name);
  for(i=0; i < ac.last_outgoing; i++) {
      switch(ac.outgoings[i]) {
        case  '\0' : printf("\\0"); break;
        case  '\t' : printf("\\t"); break;
        case  '\r' : printf("\\r"); break;
        case  '\n' : printf("\\n"); break;
        case  '"' : printf("\\\""); break;
        default: printf("%c",ac.outgoings[i]);
      }
  }
  printf("\";\n    unsigned short next_%s[]= {\n",name);
  for(i=0,j=0; i < ac.last_outgoing; i++) {
      if(!j) printf("%s      ",i ? "\n":"");
      printf("%d,",ac.next[i]);
      j += xlen(ac.next[i])+1;
      if(j > 80) j = 0;
  }

  printf("};\n");
  if(do_patt) {
    printf("/* patterns length %d */\n    char *patterns_%s[]= { NULL,\n",ac.pattern_length,name);
    for(i=1; i < ac.last_pattern; i++) {
        printf("      \"%s\", /* %d */\n",ac.patterns[i],i);
    }
    printf("      NULL };\n\n");
  }

  printf("    struct aho_compiled %s = {\n\
        .a_node       = &a_node_%s[0],\n\
        .pattern_list = &pattern_list_%s[0],\n\
        .next         = &next_%s[0],\n\
        .outgoings    = &outgoings_%s[0],\n", name,name,name,name,name);
  if(do_patt) printf("       .patterns     = &patterns_%s[0]\n",name);
  printf("    };\n");
}

/* vim: set ts=4 sw=4 et foldmarker={{{{,}}}} foldmethod=marker :  */


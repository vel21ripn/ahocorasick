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

#include "aho-compiled-inc.h"
struct aho_compile {
    int             outgoing_count;
    int             pattern_count;
    int             pattern_list_count;
    int				pattern_length;
    int             last_outgoing;
    int             last_pattern;
    int             last_pattern_list;
    int             rstr_size;
    char            rstr[AC_PATTRN_MAX_LENGTH+4];
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

extern uint8_t _binary_aho_compiled_inc_h_start[];
extern uint8_t _binary_aho_compiled_inc_h_end[];
extern uint8_t _binary_aho_compiled_lib_c_start[];
extern uint8_t _binary_aho_compiled_lib_c_end[];

static inline AC_ALPHABET_t *edge_get_alpha(struct edge *e) {
        return (AC_ALPHABET_t *)(&e->next[e->max]);
}

void ac_automata_compile(AC_AUTOMATA_t * thiz, const char *name,int do_patt,int to_lc);

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
    ll->str = malloc(l+1);
    if(!ll->str) abort();
    memcpy(ll->str,s,l);
    ll->str[l] = '\0';
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
         printf("aho-compile -N name [-D] [-A] [-I] [-d] [-p] [-h] [-H str] file\n\
   -A           - no auto numbering\n\
   -d           - dump tree (for debug)\n\
   -D           - with define\n\
   -H str       - define starting from str ('H_' by default)\n\
   -I           - ignore case by default\n\
   -N name      - name of structs\n\
   -p           - patterns output\n\
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
int do_patt = 0;
int def_str_len;
char *def_str = NULL;
FILE *ifd;

  printf("\n/*");
  for(i=0; i < argc; i++) printf(" %s",argv[i]);
  printf(" */\n\n");

  ac_name[0] = 0;

  while ((c = getopt(argc, argv, "hN:H:DAIdp")) != -1) {
    switch(c) {
      case 'h':
          usage(NULL);
      case 'N':
          strncpy(ac_name,optarg,sizeof(ac_name));
          break;
      case 'H':
          def_str = strdup(optarg);
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
          do_patt = 1;
          break;
    }
  }
  if(!def_str) def_str = strdup("H_");
  def_str_len = strlen(def_str);
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
        if(strncmp(buf,def_str,def_str_len)) {
            fprintf(stderr,"Bad define '%s' not start from '%s'\n",
                    buf,def_str);
            exit(1);
        }
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
        ac_automata_dump(ac,NULL);
        printf(" */\n");
  }
  for(ll = lines; ll; ll = ll->next) {
      int num = find_str(ac,ll->str,ll->len);
      if(num != ll->code)
          fprintf(stderr,"%.*s %d != %d\n",ll->len,ll->str,num,ll->code);
  }
  ac_automata_compile(ac,ac_name,do_patt,to_lc);

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
    int last = !n->one && n->outgoing &&  idx > 0;

    if(last) return ACERR_SUCCESS;

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
				ac->pattern_length += sid->length+1;
			}
        }
    }
    return ACERR_SUCCESS;
}

static int aho_find_pattern(struct aho_compile *ac, char *str,size_t strlen) {
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

static AC_ERROR_t ac_automata_compile_node(AC_AUTOMATA_t * thiz, AC_NODE_t *n, int idx, void *data ) {
  struct aho_compile *ac = (struct aho_compile *)data;
  struct aho_node *an;
  struct aho_patterns *apl;
  int last = !n->one && n->outgoing &&  idx > 0;

  if(last) return ACERR_SUCCESS;

    //xdump_node_header(n)
    an = &ac->a_node[n->id];
    an->f_node = n->failure_node ? n->failure_node->id : 0;
    if(n->use) {
        an->range = n->range;
        if(n->one) {
            an->degree = 0;
            an->alpha = n->one_alpha;
            an->outgoing = ((AC_NODE_t *)n->outgoing)->id;
        } else {
            int nn;
            char *c_d;
            char *c = (char *)edge_get_alpha(n->outgoing);
            uint8_t c_x;
            /* Is it possible to search for a characters case-insensitive? */
            an->degree = n->outgoing->degree - 1;
            an->alpha = n->range ? n->one_alpha:0;
            an->outgoing = ac->last_outgoing;
            for(nn = 0; nn < n->outgoing->degree; nn++,ac->last_outgoing++) {
                ac->outgoings[ac->last_outgoing] = c[nn];
                ac->next[ac->last_outgoing] = n->outgoing->next[nn] ? n->outgoing->next[nn]->id : 0;
                if(thiz->to_lc) continue;
                c_x = toupper(c[nn]) ^ tolower(c[nn]);
                if(!c_x) continue;
                c_d = memchr(c,c[nn]^c_x,n->outgoing->degree);
                if(!c_d) continue;
                if(n->outgoing->next[nn] != n->outgoing->next[c_d-c] &&
                   n->outgoing->next[nn] && n->outgoing->next[c_d-c] && c_d-c > nn) {
                    fprintf(stderr,"Warning! String '%s%c' and '%s%c' is different by case (pos %d, node_id %d)\n",
                            ac->rstr,c[nn],ac->rstr,c[nn]^c_x,n->depth,n->id);
                }
            }
        }
    }

    if (n->matched_patterns && n->matched_patterns->num && n->final) {
    char lbuf[300];
    int nl = 0, j;

    apl = &ac->pattern_list[ac->last_pattern_list];
    an->final = 1;
    an->patterns = ac->last_pattern_list;

    nl = snprintf(lbuf,sizeof(lbuf),"'%.100s' N:%d{",ac->rstr,n->matched_patterns->num);
    for (j=0; j<n->matched_patterns->num; j++,apl++)
      {
        AC_PATTERN_t *sid = &n->matched_patterns->patterns[j];
        apl->len = sid->length;
        apl->from_start = sid->rep.from_start;
        apl->at_end = sid->rep.at_end;
        apl->last = j == n->matched_patterns->num - 1;
        apl->code = sid->rep.number;

        apl->pattern = aho_find_pattern(ac,sid->astring,sid->length);
        if(!apl->pattern) {
            apl->pattern = ac->last_pattern;
            ac->patterns[ac->last_pattern] = sid->astring;
            ac->last_pattern++;
        }
        ac->last_pattern_list++;

        if(j) nl += snprintf(&lbuf[nl],sizeof(lbuf)-nl-1,", ");
        nl += snprintf(&lbuf[nl],sizeof(lbuf)-nl-1,"%d %c%.100s%c",
                        sid->rep.number & 0x3fff,
                        sid->rep.number & 0x8000 ? '^':' ',
                        sid->astring,
                        sid->rep.number & 0x4000 ? '$':' ');
      }
    if(0) printf("%s}\n",lbuf);
    }
    return ACERR_SUCCESS;
}

static void ac_automata_compile_nextchar(AC_AUTOMATA_t * thiz, AC_NODE_t * n, AC_NODE_t * next,int idx, void *data ) {
    struct aho_compile *ac = (struct aho_compile *)data;
    ac->rstr[n->depth] = thiz->ac_path[n->depth].l;
    ac->rstr[n->depth+1] = 0;
}

void ac_automata_compile(AC_AUTOMATA_t * thiz, const char *name,int do_patt,int to_lc) {
  unsigned int i, j;

  struct aho_compile ac;
  struct aho_node *an;
  struct aho_patterns *apl;

  bzero((char *)&ac,sizeof(ac));
  ac_automata_walk(thiz,ac_automata_count_cb,NULL,&ac);
  ac.a_node    = calloc(thiz->all_nodes_num+2,sizeof(struct aho_node));
  if(!ac.a_node) { perror("malloc"); exit(1); }
  ac.outgoings = calloc(1,ac.outgoing_count+2);
  if(!ac.outgoings) { perror("malloc"); exit(1); }
  ac.next      = calloc(ac.outgoing_count+1,sizeof(int));
  if(!ac.next) { perror("malloc"); exit(1); }
  ac.patterns  = calloc(ac.pattern_count+1,sizeof(char *));
  if(!ac.patterns) { perror("malloc"); exit(1); }
  ac.pattern_list = calloc(ac.pattern_list_count+1,sizeof(struct aho_patterns));
  if(!ac.pattern_list) { perror("malloc"); exit(1); }

  ac.last_pattern=1;
  ac.last_pattern_list=1;
  ac.last_outgoing=1;
  *ac.outgoings = '#';

  ac.rstr[0] = '\0';

  if(ac_automata_walk(thiz,ac_automata_compile_node,ac_automata_compile_nextchar,&ac) != ACERR_SUCCESS) {
      fprintf(stderr,"Can't compile ahocorasick structs\n");
      exit(1);
  }
  if(thiz->all_nodes_num >= 65535) {
      fprintf(stderr,"Too many nodes (%d)\n",thiz->all_nodes_num+1);
      exit(1);
  }
  {
  int size = _binary_aho_compiled_inc_h_end - _binary_aho_compiled_inc_h_start;
  printf("%.*s\n",size, (char *)_binary_aho_compiled_inc_h_start);
  size = _binary_aho_compiled_lib_c_end - _binary_aho_compiled_lib_c_start;
  printf("%.*s\n",size, (char *)_binary_aho_compiled_lib_c_start);
  }
  printf("struct aho_node a_node_%s[]= {\n",name);
  for(i=0,an = ac.a_node; i <= thiz->all_nodes_num+1; i++,an++) {
      char buf[12];
      if(an->outgoing && !an->degree) 
          snprintf(buf,sizeof(buf)-1,"/* '%c' */",an->alpha);
        else buf[0] = '\0';
      printf("      { .f_node=%d, .degree=%d, .alpha=0x%02x%s, .outgoing=%d, .patterns=%d, .final=%d, .range=%d },/* %d */\n",
            an->f_node, an->degree, an->alpha, buf, an->outgoing, an->patterns, an->final & 1, an->range & 1, i);
// {{{{ debug stuff
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
// }}}}
  }
  printf("      {} };\n");
  {
    printf("    struct aho_patterns pattern_list_%s[]= {\n",name);
    apl = &ac.pattern_list[0];
    for(i=0; i < ac.last_pattern_list; i++,apl++) {
        printf("      { .len=%d, .from_start=%d, .at_end=%d, .last=%d, .code=%d, .pattern=%d }, /* %d */\n",
              apl->len,apl->from_start,apl->at_end,apl->last,apl->code,apl->pattern,i);
    }
  }
  {
    char buf[128],*eb,*o;
    printf("      {}};\n    char outgoings_%s[] =\n",name);
    for(i=0,eb = &buf[sizeof(buf)-1],o = buf; i < ac.last_outgoing; i++) {
      switch(ac.outgoings[i]) {
        case  '\0' : *o++ = '\\'; *o++ = '0'; break;
        case  '\t' : *o++ = '\\'; *o++ = 't'; break;
        case  '\r' : *o++ = '\\'; *o++ = 'r'; break;
        case  '\n' : *o++ = '\\'; *o++ = 'n'; break;
        case  '"'  : *o++ = '\\'; *o++ = '\\'; break;
        default: if((unsigned char)ac.outgoings[i] < 32) {
                     o += snprintf(o,5,"\\x%2x",(unsigned char)ac.outgoings[i]);
                 } else 
                     *o++ = ac.outgoings[i];
      }
      if(eb - o < 5 || i == ac.last_outgoing-1) {
          *o = '\0';
          printf("\t\t\"%s\"%s\n",buf,i == ac.last_outgoing-1 ? ";":" \\");
          o = buf;
      }
    }
  }
  printf("    unsigned short next_%s[]= {\n",name);
  for(i=0,j=0; i < ac.last_outgoing; i++) {
      if(!j) printf("%s      ",i ? "\n":"");
      printf("%d,",ac.next[i]);
      j += xlen(ac.next[i])+1;
      if(j > 80) j = 0;
  }
  printf("};\n");

  if(do_patt) {
    printf("    char *patterns_%s[]= { NULL,\n",name);
    for(i=1; i < ac.last_pattern; i++) {
        printf("      \"%s\", /* %d */\n",ac.patterns[i],i);
    }
    printf("      NULL };\n\n");
  }

  printf("    struct aho_compiled %s = {\n\
        .a_node       = &a_node_%s[0],\n\
        .pattern_list = &pattern_list_%s[0],\n\
        .next         = &next_%s[0],\n\
        .outgoings    = &outgoings_%s[0],\n\
        .patterns     = ", name,name,name,name,name);
  if(do_patt) printf("&patterns_%s[0],\n",name);
      else printf("NULL,");
  printf("        .to_lc     = %d\n",to_lc);
  printf("    };\n");
  printf("    /*\n       Total length of all patterns %d bytes\n",ac.pattern_length);
  printf("       sizeof a_node_%s\t\t%u*%lu -> %lu bytes\n",name,
                        thiz->all_nodes_num + 1,sizeof(struct aho_node),(thiz->all_nodes_num + 1 ) * sizeof(struct aho_node));
  printf("       sizeof pattern_list_%s\t%d*%lu -> %lu bytes\n",name,
                        ac.last_pattern_list + 1,sizeof(struct aho_patterns),(ac.last_pattern_list + 1 ) * sizeof(struct aho_patterns));
  printf("       sizeof next_%s\t\t%d*%lu -> %lu bytes\n",name,
                        ac.last_outgoing,sizeof(short),(ac.last_outgoing + 1) * sizeof(short));
  if(do_patt)
    printf("       sizeof patterns_%s\t%d*%lu -> %lu bytes\n",name,
                        ac.last_pattern + 1,sizeof(char*),(ac.last_pattern + 1) * sizeof(char*));
  printf("       sizeof outgoings_%s\t%u bytes\n",name,ac.last_outgoing + 1);
  printf("     */\n");
}

/* vim: set ts=4 sw=4 et foldmarker={{{{,}}}} foldmethod=marker :  */


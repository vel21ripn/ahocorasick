#ifndef AHO_COMPILED_LIB_H
#define AHO_COMPILED_LIB_H

/* tolower() from glibc */
static unsigned char aho_lc[256] = {
  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,
 16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
 32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,
 48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,
 64, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',  91,  92,  93,  94,  95,
 96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

/* toupper()^tolower() from glibc */
static unsigned char aho_xc[256] = {
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

struct aho_patterns *find_aho_str(struct aho_compiled *ac,char *str,int icase) {
  struct aho_node *n;
  struct aho_patterns *apl = ac->pattern_list;
  unsigned short int *n_next = ac->next;
  char c_l,*outg = ac->outgoings,*str0 = str;
  unsigned char c;
  int l = strlen(str);
  int i = 1,next = 0,l0 = l;
  struct aho_patterns *matched[4] = { NULL,NULL,NULL,NULL };
  n = &ac->a_node[i];

  _patt_ptr = ac->patterns;

  while(l != 0) {
    next = 0;
    c = (unsigned char)*str;
    if(ac->to_lc) c = aho_lc[c];
    c_l = !ac->to_lc && icase ? aho_xc[c]:0;
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
            if(0) printf("|     exact_match %s %u/%d\n",str0,(unsigned int)(str-str0),l0);
    }
  }
  for(i=0; i < 4; i++) {
      if(matched[i]) return matched[i];
  }
  return NULL;
}

#endif

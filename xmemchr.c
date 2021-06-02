
#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
//#include <immintrin.h>

/* Nonzero if X is not aligned on a "long" boundary.  */
#define UNALIGNED(X) ((long)X & (__SIZEOF_LONG__ - 1))
#define LBLOCKSIZE __SIZEOF_LONG__ 

#if __SIZEOF_LONG__ == 4
#define DETECTNULL(X) (((X) - 0x01010101UL) & ~(X) & 0x80808080UL)
#define DUPC 0x01010101L
size_t bsf(uint32_t bits)
{
#ifdef __GNUC__
    return __builtin_ctz(bits);
#else
    size_t i;
    for(i=7; i < 32; i+=8,bits >>=8)
	if((uint8_t)bits) return i;
    return 0;
#endif
}

#else
#define DETECTNULL(X) (((X) - 0x0101010101010101ULL) & ~(X) & 0x8080808080808080ULL)
#define DUPC 0x0101010101010101UL

size_t __attribute__ ((noinline)) bsf(uint64_t bits)
{
#ifdef __GNUC__
//    return __builtin_ctzll(bits);
//#else
    size_t i=0;
    if(!bits) return i;
    if((int32_t)bits == 0) { i+=32; bits >>=32; }
    if((int16_t)bits == 0) { i+=16; bits >>=16; }
    if((int8_t)bits == 0) i+=8;
    return i;
#endif
}
#endif


static char * __attribute__ ((noinline))
xmemchr(char *s, char i,int n)
{
  unsigned char c = (unsigned char)i;

  while(n > 0) {
    if (n >= LBLOCKSIZE && !UNALIGNED (s)) {
      unsigned long int mask,nc;
      mask = c * DUPC;

      while (n >= LBLOCKSIZE) {
        nc = DETECTNULL((*(unsigned long int *)s) ^ mask);
        if(nc) {
	    printf("bsf(%lx)=%d\n",nc,(int)bsf(nc));
            return s + (bsf(nc) >> 3);
	}
        s += LBLOCKSIZE;
        n -= LBLOCKSIZE;
      }
    }
    if (*s == c) return s;
    s++;
    n--;
  }
  return NULL;
}


int main(int argc,char **argv) {
int i,l;
char *r,*buf=malloc(64);
bzero(buf,64);
strcpy(buf,"abcdefghijklmnopqrstuvwxyz");
l = strlen(buf);
printf("len %d\n",l);
for(i=0; i <= l && buf[i]; i++) { 
	r =  xmemchr(buf,buf[i],l);
	printf(">%3d:%c -> %c\n",i,buf[i],r ? *r : '?');
}
return 0;
}

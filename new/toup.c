

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(void) {
int i,c;
for(i=0;i < 256; i++) {
	printf("%3d,%s",tolower(i) ^ toupper(i),(i & 15) == 15 ? "\n":" ");
}
return  0;
}

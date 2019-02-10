#include<stdio.h>
#include "stdlib.h"
int main(int argc,char* argv[])
{
   int c;
   FILE* p,*s;
   p=fopen(argv[1],"rb");
   s=fopen(argv[2],"wb");

while ( ( c = getc(p))!=EOF )
   putc(c, s);
  fclose(p);
fclose(s); 
   return(0);
}

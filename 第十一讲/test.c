#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    /* code */
    char *p1;
    p1 = (char *)malloc(10);
    strcpy(p1, "123456");
    char p[]="123456";
    printf("%x\n",p1 );
    printf("%x\n",&p );
    return 0;
}
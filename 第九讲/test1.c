#include <stdio.h>

float a;

int main()
{
     float i;
     static float b;
     static int str[10];
     int str1[100];
     printf("%f\n", i);
     printf("%f\n",b );
     printf("%d\n",str1[0] );
     printf("integer: %f; string: (begin)%d(end)", a, str[0]);
     return 0;
}
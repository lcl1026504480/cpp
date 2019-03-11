#include <stdio.h>
int a(int n)
{
    if(n==2)
        {
            printf("lcl%d\n",n);
            return n;
        }
    else
    {
        a(n-1);
        printf("lcl%d\n",n);
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    printf("%d\n",a(5) );
    return 0;
}
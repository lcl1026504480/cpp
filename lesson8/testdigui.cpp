#include <stdio.h>
int a(int n)
{
    int p;
    if(n==2)
        {
            return 2;
        }
    else
    {
        a(n-1);
        p=100;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    printf("%d\n",a(5) );
    return 0;
}
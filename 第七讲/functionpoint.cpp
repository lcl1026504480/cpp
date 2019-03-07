#include <iostream>
using namespace std;
int a(int *b,char c)
{
    *b=100;
    int a=1;
    return 0;
}
void c()
{
    cout <<2;
}
int main(int argc, char const *argv[])
{
    /* code */
    int b=2;
    char d='1';
    int (*p)(int *b,char c);
    void (*p1)();
    p1=c;
    cout <<(int*)p1<<endl<<(int*)p1+1<<endl;
    p=a;
    (*p)(&b,d);
    printf("%p\n", (void(*)())p);
    printf("%p\n", (void(*)())p+1);
    cout <<sizeof(p)<<endl<<sizeof(*p);
    // cout <<a << ":"<<&a<< ":"<<*a<<endl;
    // printf("%x\n",a );
    // printf("%x\n",&a );
    // printf("%x\n",*a );
    // printf("%x\n",a +1);
    // printf("%x\n",&a +1);
    // printf("%x\n",*a +1);
    // printf("%p\n",c );
    // cout <<(int *)c << ":"<<(int *)&c<< ":"<<(int *)*c<<endl;
    // cout <<(int *)p<<endl<<(int *)p+1<<endl;
    // cout <<b<<endl;
    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=1;
    char b='a';
    float c=1.2;
    // int *p=&a;
    // char *p1=&b;
    // float *p2=&c
    void *p=&a;
    void *p1=&b;
    void *p2=&c;
    void** p3=&p;
    cout <<&a<<endl<<&b<<endl<<&c<<endl;
    printf("%p\n", p1);
    printf("%p\n",p2 );
    printf("%p\n",p2+1 );
    cout <<*p3;
    cout <<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(c)<<endl;
    cout <<p<<":"<<*(int *)p<<";"<<sizeof(p)<<endl;
    cout <<p1<<":"<<*(char *)p1<<";"<<sizeof(p1)<<endl;
    cout <<p2<<":"<<*(float *)p2<<";"<<sizeof(p2)<<endl;
    cout <<p+1<<endl;
    cout <<p1+1<<endl;
    cout <<p2+1<<endl;
    return 0;
}
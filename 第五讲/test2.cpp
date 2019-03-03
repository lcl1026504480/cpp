#include <iostream>
#include <string>
using namespace std;
void a(int c,int *b)
{
    c=1;
    *b=1;
    cout <<"function:"<<c<<*b<<endl;
}
int main(int argc, char const *argv[])
{
    // int b,c;
    // b=c=2;
    // a(c,&b);
    // cout <<c<<b;
    string a="012";
    char b[5]="0123";
    int c[3]={0,1,2};
    string *p1=&a;
    char *p2=&a[0];
    char (*p3)[5]=&b;
    char *p4=b;
    int (*p5)[3]=&c;
    int *p6=&c[0];
    // char o='1';
    // char *o1=&o;
    // printf("%p\n",p4 );
    // printf("%p\n",p4+1 );
    //     printf("%p\n",o1 );
    // printf("%p\n",o1+1 );
    cout <<"字符串："<<p1<<endl<<*p1<<endl<<(void *)&a[0]<<endl<<(void *)&a[1]<<endl<<p1+1<<endl;
    cout <<(void *)p2<<endl<<a<<endl<<(void *)p2+1<<endl<<*(p2+1)<<endl;
    printf("%p\n",p2 );
    cout <<"字符数组"<<p3<<endl<<*p3<<endl<<(void *)&b[0]<<endl<<(void *)&b[1]<<endl<<p3+1<<endl;
    cout <<(void *)p4<<endl<<b<<endl<<(void *)p4+1<<endl<<*(p4+1)<<endl;
    printf("%p\n",p4 );
    cout <<"数组"<<p5<<endl<<*p5<<endl<<&c[0]<<endl<<&c[1]<<endl<<p5+1<<endl;
    cout <<p6<<endl<<c<<endl<<p6+1<<endl<<*(p6+1)<<endl;
    printf("%p\n",p6);
}
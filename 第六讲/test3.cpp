#include <iostream>
using namespace std;
int main()
{
    long long a=1;
    int *b=(int *)(&a);
    cout << *b;
   // int a[4]={1,2,3,4};
   // int *ptr1=(int *)(&a+1);
   // cout << ptr1 << endl;
   // int *ptr2=(int *)((long long)a+1);
   // printf("%x,%x\n",ptr1[-1],*ptr2);
   // cout<< &a[4];
    // char a='1';
    // int b[]={1,2,3};
    // cout << (int *)&a <<endl;
    // cout << (long*)(&a+1)<<endl;
    // cout << (long long )&a+1<<endl;
    // cout << (long*)&a+1 <<endl;
    // cout <<b <<endl;
    // cout <<b+1<<endl;
    // cout <<(long long)b+1<<endl;
    // cout <<(long long *)b+1<<endl;
    // cout << &b<<endl;
    // cout <<&b+1;
    // char a[5]={'a','b','c','d'};
    // char (*p1)[5]= &a;
    // char (*p2)[5]=(char (*)[5])a;

    // printf("a=%d\n",a);
    // printf("a=%c\n",a[0]);
    // printf("p1=%c\n",**p1);
    // printf("p2=%c\n",**p2);
    // printf("p1+1=%c\n",*(*p1+1));
    // printf("p2+1=%c\n",*(*p2+1));


    return 0;
}
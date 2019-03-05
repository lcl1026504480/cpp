#include <iostream>
#include <string>
using namespace std;
template <typename e>
void print(e *a,e* b)
{
    while(a!=b)
    {
        cout<<*a;
        a++;
    }
}
int main(int argc, char const *argv[])
{
    // int a[5]={1,2,3,4,5};
    // char b[6]="12345";
    // string c="12345";
    // print(a,a+5);
    // cout <<endl;
    // print(b,b+5);
    // cout <<endl;
    // print(&c[0],&c[5]);
    // return 0;
    // char a='1';
    // long long b=109;
    // cout <<sizeof(b)<<endl;
    // cout <<&a<<endl;
    // cout <<reinterpret_cast<long long>(&a) <<endl;
    // cout <<(void *)(&a);
}
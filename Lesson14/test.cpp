#include <iostream>
using namespace std;
class A
{
public:
    int m=1;
};
class B: public A
{
public:
    int m=1;
};
class C:virtual public A
{
public:
    // int m=3;
    p1()
    {
        cout <<3;
    }
};
int main(int argc, char const *argv[])
{
    C c;
    cout <<sizeof(A)<<sizeof(B);
    return 0;
}

// class D:public B,public C
// {
// public:
//     p()
//     {
//         cout <<4;
//     }
// };
// int main(int argc, char const *argv[])
// {
//     /* code */
//     D d;
//     cout <<d.m;
//     // cout <<&d <<endl;
//     // A *p=&d;
//     // cout <<p<<endl ;
//     // B *p1=&d;
//     // cout <<p1<<endl;
//     // C *p2=&d;
//     // cout <<p2<<endl;
//     return 0;
// }
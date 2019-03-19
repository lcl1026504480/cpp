#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B:public A
{
public:
    B(int m1)
    {
        cout <<"B"<< m1 <<endl;
        a=m1;
    }
};
class C:public A
{
public:
    C(int m1)
    {
        cout <<"C"<< m1 <<endl;
        a=m1;
    }
};
class D:public B,public C
{
public:
    D(int m,int n):B(m),C(n)
    {
        cout <<"D"<<m<<n<<endl;
    }
};
int main(int argc, char const *argv[])
{
    D d(3,2);
    cout <<d.a << endl ;
}
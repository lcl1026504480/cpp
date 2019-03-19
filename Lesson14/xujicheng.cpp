#include <iostream>
using namespace std;
class SuperBase
{
public:
    int m_nValue;
    SuperBase(int m):m_nValue(m)
    {
        cout <<"s" <<endl;
    }
};
class Base1: virtual public SuperBase
{
public:
    Base1(int m):SuperBase(m)
    {
cout <<"s1"<<endl;
    }
    p1()
    {
        cout <<"1:"<<m_nValue;
    }
};
class Base2: virtual public SuperBase
{
public:
    Base2(int m):SuperBase(m)
    {
cout <<"s2"<<endl;
    }
    p2()
    {
        cout <<"2:"<<m_nValue;
    }
};
class Der:public Base1, public Base2
{
public:
    Der(int m,int n,int a):SuperBase(a),Base1(m),Base2(n)
    {

    }
};
int main(int argc, char const *argv[])
{
    Der d(2,3,4);
    d.p1();
    cout <<endl;
    d.p2();
}
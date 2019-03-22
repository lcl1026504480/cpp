#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <typeinfo>
using namespace std;
class A
{
public:
    int n=1;
    virtual f()
    {}
};
class B:public A
{
public:
};
int main(int argc, char const *argv[])
{
    A *p=new A;
    B* p1=static_cast<B*>(p);
    if (p1==NULL)
        cout <<"omg"<<endl;
    const type_info &t1=typeid(p);
    const type_info &t2=typeid(*p);
    const type_info &t3=typeid(p1);
    const type_info &t4=typeid(*p1);
    cout << t1.name()<<endl<<t2.name()<<endl;
    cout << t3.name()<<endl<<t4.name()<<endl;
    cout <<p1->n;
}
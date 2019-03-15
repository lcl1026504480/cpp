#include <iostream>
using namespace std;
class A
{
public:
    static A()
    {
        cout << "A";
    }
    static ~A()
    {
        cout << "~A";
    }
};
class B:public A
{
public:
    B()
    {
        cout << "B";
    }
    ~B()
    {
        cout << "~B";
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    A *p=new B;
    delete p;
    return 0;
}
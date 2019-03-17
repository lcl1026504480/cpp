#include <iostream>
using namespace std;
class A
{
public:
    virtual p()
    {
        cout <<"A";
    }
};
class B:public A
{
public:
    long long  p()
    {
        cout <<"B";
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    A *a=new B;
    a->p();
    return 0;
}
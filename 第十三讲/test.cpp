#include <iostream>
using namespace std;
class A
{
protected:
    virtual p()
    {
        cout <<"A";
    }
};
class B:public A
{
private:
    p()
    {
        cout <<"B";
    }
};
int main(int argc, char const *argv[])
{
    A *a=new B;
    a->p();
    return 0;
}
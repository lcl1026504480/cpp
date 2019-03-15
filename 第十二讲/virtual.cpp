#include <iostream>
using namespace std;
class A
{
protected:
     virtual p(int n)
    {
        cout <<"A"<<endl;
    }
};
class B:public A
{
public:
    p(int n)
    {
        cout << "B"<<n<<endl;
    }
};
class C:public B
{
public:
    p(int n)
    {
        cout <<"C"<<endl;
    }
};
void fun(A &cl)
{
    cl.p(5);
}
int main(int argc, char const *argv[])
{
    A a;
    B b;
    C c;
    // fun(a);
    fun(b);
    fun(c);
}
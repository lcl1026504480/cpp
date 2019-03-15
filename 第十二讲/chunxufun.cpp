#include <iostream>
using namespace std;
class A
{
public:
     virtual p(int n)=0;
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
    B b;
    C c;
    fun(b);
    fun(c);
}
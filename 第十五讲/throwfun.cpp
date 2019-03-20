#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <exception>
using namespace std;
class A
{
public:
    A(){cout <<"a"<<endl;}
    ~A(){cout <<"b"<<endl;}
};
void f(int n) noexcept

{
    if(n)
        throw 123;
}
int main(int argc, char const *argv[])
{
    /* code */
    A a;
    int m;
    try
    {
        cin >>m;
        f(m);
    }
    catch(int &e)
    {
        cout <<e;
    }
    return 0;
}
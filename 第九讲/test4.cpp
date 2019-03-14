#include <iostream>
using namespace std;
class A
{
private:
    int n=0;
    p()
    {
        cout <<"A";
    }
};
class B:public A
{
public:
    int n=10;
    int m=A::n;
};
int main(int argc, char const *argv[])
{
    B b;
    cout << b.n << b.m;
    return 0;
}
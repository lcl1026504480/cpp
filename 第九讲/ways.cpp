#include <iostream>
using namespace std;
class A
{
public:
    p()
    {
        cout <<"A"<<endl;
    }
};
class B:public A
{
public:
    p(int num)
    {
        cout <<num;
        cout <<"B"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    B b;
    b.p();
    return 0;
}
#include <iostream>
using namespace std;
class A
{
private:
    // int a;
    virtual int p()
    {
        cout <<"A";
        return 0;
    }
};
A *pa;
int main(int argc, char const *argv[])
{
A a;
pa=&a;
pa->p();
}
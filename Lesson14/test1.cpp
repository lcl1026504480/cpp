#include <iostream>
using namespace std;
class A
{
public:
    A();
    ~A();
    int m=1;

};
class B:public A
{
public:
    B();
    ~B();
    int m=2;
};
int main(int argc, char const *argv[])
{
    /* code */
    cout <<sizeof(A) <<sizeof(B);
    return 0;
}
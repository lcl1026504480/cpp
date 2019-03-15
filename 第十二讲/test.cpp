#include <iostream>
using namespace std;
class A
{
public:
    p()
    {
        cout <<this <<endl;
    }
};
class B:public A
{
public:
    q()
    {
        cout <<this <<endl;
    }
    int a[100];
};
int main(int argc, char const *argv[])
{
    /* code */
    cout <<sizeof(A)<<endl;
    B b;
    cout <<&b <<endl;
    cout <<sizeof(b)<<endl;
    b.p();
    A *pb=&b;
    (*pb).p();
    cout <<sizeof(*pb)<<endl;
    cout <<pb;
    return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
class A
{
public:
    A(int m):n(m)
    {
        cout <<"A"<<endl;
    }
    int n;
    int *p=&n;
    A ( A &rhs)
    {
        cout <<"copy"<<endl;
        *this=rhs;
    }
#if 0
    A operator=(A rhs)
    {
        cout <<"="<<endl;
        if (this!=&rhs)
        {
            /* code */
            n=rhs.n;
            p=new int(n);
        }
        return rhs;
    }
#endif
    A& operator=( A &rhs)
    {
        cout <<"="<<endl;
        if (this!=&rhs)
        {
            /* code */
            n=rhs.n;
            p=new int(n);
        }
        return rhs;
    }
    ~A()
    {
        delete p;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    A a1(2);
    A a2=a1;
    cout << &a1<<a1.n <<endl << &a2<<a2.n <<endl<<a1.p<<endl<<a2.p<<endl;
    // a1=a2;
    cout << &a1<<a1.n <<endl << &a2<<a2.n <<endl<<a1.p<<endl<<a2.p;
    return 0;
}
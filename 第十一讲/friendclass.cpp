#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    class A
    {
    private:
        int n=1;
        p()
        {
            cout <<"A";
        }
        friend class B;
    };
    class B
    {
    public:
        pb(A &a)
        {
            a.p();
            cout << a.n;
        }
    };
    A a1;
    B b;
    b.pb(a1);
    return 0;
}
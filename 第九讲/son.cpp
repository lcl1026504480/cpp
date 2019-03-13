#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    class A
    {
    public:
        int n=1;
        A()
        {
            cout <<"constructorA"<<endl;
        }
        ~A()
        {
            cout <<"xigouqiA"<<endl;
        }
        pu()
        {
            cout <<"public"<<endl;
        }
    protected:
        int m=4;
        pr()
        {
            cout << "protected"<<endl;
        }

    private:
        int b=10;
        pri()
        {
            cout << "private"<<endl;
        }
    };
    class B: public A
    {
    public:
        s()
        {
            cout <<n<<endl<<m<<endl;
        }
    };
    A a;
    cout << a.n;
    B b;
    cout <<b.n;
}
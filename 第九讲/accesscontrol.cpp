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
    A a;
    cout << a.n<<endl;
    a.pu();
    // cout << a.m<<endl;
    // a.pr();
    // cout << a.b<<endl;
    // a.pri();
}
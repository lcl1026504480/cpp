#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    static int a;
    static double b;
    static string c;
    static p()
    {
        cout <<&a<<endl<<&b<<endl<<&c <<endl;
    }
};
int A::a=2;
int A::b=3;
string A::c="233";
int main(int argc, char const *argv[])
{

    A::p();
    cout << A::a<<endl << A::b <<endl << A::c<<endl;
    cout <<&(A::a)<<endl << &(A::b) <<endl << &(A::c);
    return 0;
}
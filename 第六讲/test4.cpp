#include <iostream>
using namespace std;
void p(int  &b)
{
    b=2;
    cout <<&b<<endl;
    cout <<b;
}
int main(int argc, char const *argv[])
{
    /* code */
    int a=0;
    cout << &a<<endl;
    p(a);
    cout <<endl;
    cout <<a<<endl<<&a;
    return 0;
}
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int b=1;
    cout << b<<endl << &b<<endl;
    {
        b=2;
    cout <<b<<endl<< &b<<endl;
    }
    cout << b<<endl<< &b<<endl;
    return 0;
}
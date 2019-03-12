#include <iostream>
using namespace std;
class test
{
public:
    int a=1;
    int b=10;
    test(int n):a(b),b(n)
    {
        cout <<"###";
    }
}t1(5);

int main(int argc, char const *argv[])
{
    /* code */
    cout <<t1.a<<endl<<t1.b;
    return 0;
}
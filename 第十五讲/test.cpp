#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <assert.h>
using namespace std;
class test
{
public:
    test()
    {
        cout <<"-"<<endl;
    }
    ~test()
    {
        cout <<"+"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    test t;
    double a,b;
    cout <<"�����뱻����:";
    cin >>a;
    cout <<"���������:";
    cin >>b;
    assert(b!=0);
    cout <<a<<"/"<<b<<"="<<a/b;
    return 0;
}
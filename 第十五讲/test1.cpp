#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
class test1
{
public:
    test1()
    {
        cout <<"a"<<endl;
    }
    ~test1()
    {
        cout <<"b"<<endl;
    }

};
int main(int argc, char const *argv[])
{
    /* code */
    test1 t;
    int a=1,b=0;
    if (a)
            throw 12.0;
    try
    {
        cout <<"ok"<<endl;
    }
    catch(int e)
    {
        cerr <<"all";
    }
    catch(double )
    {
        cerr <<"double";
    }
    cout <<"end";
    return 0;
}
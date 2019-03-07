#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    enum name
    {
        b1,c1
    };
    enum a
    {
        b,c
    } a1=b;
    cout <<b<<endl<<a1;
    switch(a1)
    {
        case b:
        cout <<"今天是周一";
        break;
        case c:
        cout <<"今天是周二";
        break;
    }
    return 0;
}
/*
* @Author: lenovouser
* @Date:   2019-03-28 14:13:14
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 14:24:04
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<typename T> class A
{
public:
    A()
    {
        cout <<"template"<<endl;
    }
};
template<typename T> class A<T*>
{
public:
    A()
    {
        cout <<"templatepointer"<<endl;
    }
};
template<typename T> class A<const T*>
{
public:
    A()
    {
        cout <<"templatepointerconst"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    A<int> a;
    A <int*> a1;
    A <int const*> a2;
    return 0;
}
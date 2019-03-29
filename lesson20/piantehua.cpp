/*
* @Author: lcl1026504480
* @Date:   2019-03-27 20:56:36
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-27 21:14:27
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<typename T,typename U> class A
{
public:
    A()
    {
        cout <<"模板"<<endl;
    }
};
template<> class A <int,float>
{
public:
    A()
    {
        cout <<"特化"<<endl;
    }
};
template<typename T> class A <int,T>
{
public:
    A()
    {
        cout <<"偏特化"<<endl;
    }
};
template<typename T,typename U> fun(T a,U b)
{
    cout <<"模板函数"<<endl;
}
template<> fun (int a,float b)
{
    cout <<"特化"<<endl;
}
template<typename T> fun (int a,T b)
{
    cout <<"重载"<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    fun(1,1.2);
    fun(1,1);
    fun(1.2,1);
    return 0;
}
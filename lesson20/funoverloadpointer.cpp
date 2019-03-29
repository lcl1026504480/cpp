/*
* @Author: lenovouser
* @Date:   2019-03-28 14:25:42
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 14:38:58
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<class T>  T max1(T a,T b)
{
    cout <<"value"<<endl;
    cout <<a <<"&" <<b<<endl;
    return (a>b)?a:b;
}
template<class T>  T max1(T* a,T* b)
{
    cout <<"pointer";
    return (*a>*b)?(*a):(*b);
}
int main(int argc, char const *argv[])
{
    /* code */
    int *p,*p1;
    int a=1,b=2;
    p=&a;
    p1=&b;
    cout <<max1(a,b) <<endl;
    cout <<max1(p,p1);
    return 0;
}
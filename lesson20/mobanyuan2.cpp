/*
* @Author: lcl1026504480
* @Date:   2019-03-28 10:52:44
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 13:02:46
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<unsigned N>
struct Power
{
    template<class T>
    static double value(T x)
    {
        return x*Power<N-1>::value(x);
    }
};
template<>
struct Power<1>
{
    template<class T>
    static double value(T x)
    {
        return (double)x;
    }
};
template<unsigned N,typename T> inline double power(T v)
{
    return Power<N>::value(v);
}
int main(int argc, char const *argv[])
{
    /* code */
    const int a=1000;
    cout << power<a>(10.0);
    return 0;
}
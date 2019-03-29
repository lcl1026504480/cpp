/*
* @Author: lenovouser
* @Date:   2019-03-28 10:37:16
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 12:09:47
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<unsigned N> inline double power(double v)
{
    return v*power<N-1>(v);
}
template<> inline double power<1>(double v)
{
    return v;
}
int main(int argc, char const *argv[])
{
    /* code */
    const int a=6;
    cout <<power<4>(a);
    return 0;
}
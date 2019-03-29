/*
* @Author: lenovouser
* @Date:   2019-03-27 21:38:31
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 10:14:36
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<int n>
struct Fac
{
        const static int value=n*Fac<n-1>::value;

};
template<>
struct Fac<0>
{
        const static int value=1;
};
int main(int argc, char const *argv[])
{
    /* code */
     int a=6;
    int array[Fac<a>::value];
    cout <<Fac<a>::value;
   return 0;
}
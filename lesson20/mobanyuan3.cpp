/*/*
* @Author: lenovouser
* @Date:   2019-03-28 10:37:16
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 13:01:17
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<typename T> inline double power(T v,unsigned n)
{
    if (n==1)
    {
        return v;
    }
    else
    return v*power(v,n-1);
}

int main(int argc, char const *argv[])
{
    /* code */
    int a=1000;
    cout <<power(a,10);
    return 0;
}
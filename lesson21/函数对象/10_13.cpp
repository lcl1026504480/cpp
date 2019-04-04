/*
* @Author: lcl1026504480
* @Date:   2019-03-31 16:52:49
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 17:00:27
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <numeric>
using namespace std;
int mult(int x,int y)
{
    return x*y;
}
class Mult
{
public:
    int operator () (int x,int y) const
    {
        return x*y;
    }

};
int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,5};
    const int N=sizeof(a)/sizeof(int);
    cout <<"½á¹ûÎª"<<accumulate(a,a+N,1,Mult())<<endl;
    return 0;
}
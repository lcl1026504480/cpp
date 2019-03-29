/*
* @Author: lcl1026504480
* @Date:   2019-03-28 20:20:33
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 20:25:42
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<class T=int,class U>
class A
{
public:
};
void fun(int a,int b=1,int c=2,int d)
{
    cout << a <<endl << b <<endl << c <<endl << d;
}
int main(int argc, char const *argv[])
{
    /* code */
    // fun(10,20);
    A <int > a;
    return 0;
}
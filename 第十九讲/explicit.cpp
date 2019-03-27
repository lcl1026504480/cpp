/*
* @Author: lcl1026504480
* @Date:   2019-03-26 10:39:18
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-26 11:09:35
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
class A
{
public:
    int m;
    A(int n,int a):m(n)
    {
        cout <<"A"<<n<<endl;
    }

};
class B
{
public:
    B(A a1,A a2)
    {
        cout <<a1.m-a2.m;
    }
};
int main(int argc, char const *argv[])
{
    B((1,2),(3,4))
    return 0;
}
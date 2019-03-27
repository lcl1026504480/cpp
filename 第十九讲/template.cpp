/*
* @Author: lcl1026504480
* @Date:   2019-03-27 16:22:03
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-27 16:26:32
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<typename T>
class A
{
public:
    A(T a)
    {
        cout <<a;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    A<int> a(2);
    return 0;
}
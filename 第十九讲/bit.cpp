/*
* @Author: lenovouser
* @Date:   2019-03-26 10:17:23
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-26 10:35:18
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    enum A
    {
        a1,b1
    };
    class bit
    {
    public:
         int a : 1;
        bool b : 1;
        char c : 2;
        string d:4;
        A a1 : 1;
    }bit1;
    // cout << &bit1.a;
    // cout <<sizeof(bit1.a);
    bit1.a=4;
    cout << bit1.a;
    return 0;
}
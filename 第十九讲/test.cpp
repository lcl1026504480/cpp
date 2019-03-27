/*
* @Author: lenovouser
* @Date:   2019-03-26 21:29:15
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-27 10:50:34
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
class test
{
public:
    test()
    {
        cout <<"ok";
    }

};
int &fun(int &n)
{
    return n;
}

int main(int argc, char const *argv[])
{
    test *p=new test;
    return 0;
}
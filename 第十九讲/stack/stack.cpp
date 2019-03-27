/*
* @Author: lcl1026504480
* @Date:   2019-03-26 14:48:20
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-26 16:15:42
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "stack.h"
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    try
    {
    stack<int> s(1),s1(1);
    s.top();
    cout <<s.push(2) <<endl;
    cout << s.sp()<<endl;
    s1=s;
    cout << s1.sp()<<endl;
    cout << s1.top()<<endl;
    cout <<s1.push(2) <<endl;
    stack<int> s2=s;
    cout << s2.sp()<<endl;
    cout << s2.top()<<endl;
    }
    catch(const char* e)
    {
        cout <<e;
    }
    return 0;
}
/*
* @Author: lcl1026504480
* @Date:   2019-03-31 10:06:47
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 10:15:05
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<char> s;
    string str;
    cout <<"ÊäÈëÒ»¾ä»°";
    cin>>str;
    cout <<str;
    for (string::iterator iter=str.begin(); iter!= str.end(); ++iter)
    {
        s.push(*iter);
    }
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout <<endl;
    return 0;
}
/*
* @Author: lcl1026504480
* @Date:   2019-03-31 16:13:42
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 16:21:43
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    std::map<string, int> courses;
    courses.insert(make_pair("CSAPP",3));
    courses.insert(make_pair("C++",2));
    courses.insert(make_pair("CSARCH",4));
    courses.insert(make_pair("OS",5));
    int n=3;
    int sum=0;
    while(n>0)
    {
        string name;
        cin>>name;
        std::map<string, int>::iterator iter=courses.find(name);
        if (iter==courses.end())
        {
            cout << name <<"is not available\n";
        }
        else
        {
            sum+=iter->second;
            courses.erase(iter);
            n--;
        }
    }
    cout <<"Total credit:"<<sum<<endl;
    return 0;
}
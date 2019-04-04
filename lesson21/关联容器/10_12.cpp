/*
* @Author: lcl1026504480
* @Date:   2019-03-31 16:35:56
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 16:47:59
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
    multimap<string,string>courses;
    typedef multimap<string,string>::iterator CourseIter;
    courses.insert(make_pair("C++","2-6"));
    courses.insert(make_pair("C++","3-6"));
    courses.insert(make_pair("COMPLIER","3-1"));
    string name;
    int count;
    do
    {
        cin>>name;
        count=courses.count(name);
        if (count==0)
        {
            cout << "Cannot find this course\n";
        }
    }while(count==0);
    cout<<count<<"lesson(s) per week";
    pair<CourseIter,CourseIter>range=courses.equal_range(name);
    for (CourseIter iter=range.first; iter!=range.second; ++iter)
    {
        cout << iter->second<<" ";
    }
    cout <<endl;
    return 0;
}
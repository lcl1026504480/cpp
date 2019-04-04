/*
* @Author: lcl1026504480
* @Date:   2019-03-30 16:52:26
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-30 16:54:23
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    std::list<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_front(0);
    std::list<int>::iterator iter1=s.begin();
    int *p1=&s[0];
    std::list<int>::iterator iter2=s.begin()+1;
    int *p2=&s[1];
    s.insert(s.begin()+1,4);
    cout << *iter1 << " "<<*p1<<endl;
    cout << *iter2 << " "<<*p2<<endl;
    return 0;
}
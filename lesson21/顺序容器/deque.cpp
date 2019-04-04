/*
* @Author: lcl1026504480
* @Date:   2019-03-30 16:47:57
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-30 16:57:53
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
    std::deque<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_front(0);
    std::deque<int>::iterator iter1=s.begin();
    // int *p1=&s[0];
    std::deque<int>::iterator iter2=s.begin()+1;
    // int *p2=&s[1];
    s.insert(s.begin()+1,4);
    cout << *iter1 << " "<<endl;
    cout << *iter2 << " "<<endl;
    return 0;
}
/*
* @Author: lcl1026504480
* @Date:   2019-03-30 16:18:13
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 09:58:33
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    std::vector<int> v(5);
    cout << v.size() <<endl << v.capacity();
    std::vector<int> s;
    s.reserve(3);
    s.push_back(1);
    s.push_back(2);
    copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(s));
    std::vector<int>::iterator iter1=s.begin();
    int *p1=&s[0];
    std::vector<int>::iterator iter2=s.begin()+1;
    int *p2=&s[1];
    s.insert(s.begin()+1,3);
    cout << *iter1 << " "<<*p1<<endl;
    cout << *iter2 << " "<<*p2<<endl;
    //向量只要不扩容就不会重新分配空间
    return 0;
}
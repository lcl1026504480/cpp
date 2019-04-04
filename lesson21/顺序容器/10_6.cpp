/*
* @Author: lcl1026504480
* @Date:   2019-03-30 17:07:52
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 09:53:38
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <list>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string names1[]={"Alice","Helen","Lucy","Susan"};
    string name2[]={"Bob","David","Levin","Mike"};
    list<string>s1(names1,names1+4);
    list<string>s2(name2,name2+4);
    //将s1的第一个元素放到s2的最后
    s2.splice(s2.end(),s1,s1.begin());
    list<string>::iterator iter1=s1.begin();//iter1指向s1首
    advance(iter1,2);
    list<string>::iterator iter2=s2.begin();
    ++iter2;
    list<string>::iterator iter3=iter2;
    advance(iter3,2);
    s1.splice(iter1,s2,iter2,iter3);
    copy(s1.begin(),s1.end(),ostream_iterator<string>(cout," "));
    cout <<endl;
    copy(s2.begin(),s2vk.end(),ostream_iterator<string>(cout," "));
    return 0;
}
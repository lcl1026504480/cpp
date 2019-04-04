/*
* @Author: lcl1026504480
* @Date:   2019-03-30 12:02:54
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-30 16:14:16
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include<list>
#include <iterator>
#include <algorithm>
#include <deque>
using namespace std;
//输出指定的整型顺序容器的元素
template<class T>
void printContainer(const char *msg,const T&s)
{
    cout << msg <<":";
    copy(s.begin(),s.end(),ostream_iterator<int>(cout," "));
    cout <<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    //从标准输入10个整数，将它们分别从s的头加入
    deque<int>s;
    for (int i = 0; i < 10; ++i)
    {
        int x;
        cin>>x;
        s.push_front(x);
    }
    printContainer("deque at first",s);
    //用s容器的内容的逆序列列表容器l
    list<int>l(s.rbegin(),s.rend());
    printContainer("list at first",l);
    //将列表l的每相邻两个容器顺序颠倒
    list<int>::iterator iter=l.begin();
    while(iter!=l.end())
    {
        int v=*iter;
        iter=l.erase(iter);
        l.insert(++iter,v);
    }
    printContainer("list at Last",l);
    //用列表容器1的内容给s赋值，将s输出
    s.assign(l.begin(),l.end());
    printContainer("deque at Last",s);
    return 0;
}
//说明顺序容器可以相互assign。
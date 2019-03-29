/*
* @Author: lenovouser
* @Date:   2019-03-29 18:52:49
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-29 20:42:25
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
//将来自输入迭代器p的n个T类型的数值排序，将结果通过输出迭代器result输出
template<class T,class in,class out>
void mySort(in first,in Last,out result)
{
    //通过输入迭代器p将输入数据存入向量容器s中
    //为什么需要这一步呢？因为我们不想自己写排序程序，要用STL中的排序算法，那么就需要先把数据放到STL容器中
    vector<T> s;
    for (; first!=Last; ++first )
    {
        s.push_back(*first);
    }
    sort(s.begin(),s.end());//对s进行排序，sort函数的参数必须是随机访问迭代器
    copy(s.begin(), s.end(),result);//将s序列通过输出迭代器result输出
}
int main(int argc, char const *argv[])
{
    double a[5]={1.2,2.4,0.8,3.3};
    sort(a,a+5);
    for (int i = 0; i < 5; ++i)
    {
        cout << a[i] <<endl;
    }
    // mySort<double> (a,a+5,ostream_iterator<double>(cout," "));
    // cout <<endl;
    //从标准输入读取若干个整数，将排序后的结果输出
    // mySort<int> (istream_iterator<int>(cin),istream_iterator<int>(),ostream_iterator<int>(cout," "));
    // cout <<endl;
    return 0;
}
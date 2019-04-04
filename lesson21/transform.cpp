/*
* @Author: lenovouser
* @Date:   2019-03-29 21:30:29
* @Last Modified by:   lenovouser
* @Last Modified time: 2019-03-30 10:04:55
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<int> v;
    for (int i = 0; i < 6; ++i)
    {
        v.push_back(i);
    }
    std::vector<int>::iterator first=v.begin();
    std::vector<int>::iterator Last=v.end();
    for (; first!=Last; ++first)
    {
        cout <<*first<<" ";
    }
    return 0;
}
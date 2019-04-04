/*
* @Author: lcl1026504480
* @Date:   2019-03-30 10:05:35
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-30 12:01:13
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
    std::vector<int> v;
    // std::vector<int>::reverse_iterator iter;
    // iter=std::vector<int>::reverse_iterator(v.begin());
    // cout <<*--iter <<endl;
    // iter=std::vector<int>::reverse_iterator(iter);
    // cout <<*iter-- <<endl;
    for (int i = 0; i < 6; ++i)
    {
        v.push_back(i);
    }
    for (std::vector<int>::reverse_iterator i = v.rbegin(); i != v.rend(); ++i)
    {
        cout <<*i << " ";
    }
    cout <<"\n\n";
    copy( v.rbegin(),v.rend(),ostream_iterator<int>(cout," "));
    return 0;
}
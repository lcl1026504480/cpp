/*
* @Author: lenovouser
* @Date:   2019-03-29 21:30:29
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-29 21:46:54
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5]={1,2,3,4,5};
    *(transform(a,a+4,ostream_iterator<int>(cout," "),negate<int>()))=10;
    return 0;
}
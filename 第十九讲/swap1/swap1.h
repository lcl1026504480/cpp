/*
* @Author: lenovouser
* @Date:   2019-03-26 13:40:52
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-26 14:20:35
*/
#ifndef SWAP1_H
#define SWAP1_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
namespace swap
{
    template<typename T>
    void swap1(T a,T b);
    template<typename T>
    void swap1(T a,T b)
    {
        T temp=a;
        a=b;
        b=temp;
    }
}
#endif

/*
* @Author: lcl1026504480
* @Date:   2019-03-28 15:24:46
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 15:34:09
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    std::vector<string> v;
    v.push_back("alice");
    v.push_back("bob");
    v.push_back("cindy");
    for (int i = 0; i < v.size(); ++i)
    {
        /* code */
        cout << v[i] <<" : "<<&v[i]<<endl;
    }
    v[0]="lihua";
    v[1]="tom";
    v[2]="jerry";
    cout <<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        /* code */
        cout << v[i] <<" : "<<&v[i]<<endl;
    }
    // std::vector<string> v(10);
    // v[0]="alice";
    // v[1]="bob";
    // v[2]="cindy";
    // v[3]="lihua";
    // v[4]="tom";
    // v[5]="jerry";
    // cout <<v.size()<<endl;
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     /* code */
    //     cout << v[i] <<" : "<<&v[i]<<endl;
    // }
    return 0;
}
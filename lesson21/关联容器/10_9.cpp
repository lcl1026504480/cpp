/*
* @Author: lcl1026504480
* @Date:   2019-03-31 15:59:04
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 16:10:07
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <set>
#include <utility>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    set<double> s;
    while(true)
    {
        double v;
        cin >> v;
        if(v==0)
            break;
        pair<set<double>::iterator,bool>r=s.insert(v);
        if (!r.second)
            cout << v<<"is duplicated"<<endl;
    }
    set<double>::iterator iter1=s.begin();
    set<double>::iterator iter2=s.end();
    double medium=(*iter1+*(--iter2))/2;
    cout <<"<=medium:";
    copy(s.begin(),s.upper_bound(medium),ostream_iterator<double>(cout," "));
    cout <<endl;
    cout <<">=medium";
    copy(s.lower_bound(medium),s.end(),ostream_iterator<double>(cout," "));
    return 0;
}
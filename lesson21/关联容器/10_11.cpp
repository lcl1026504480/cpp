/*
* @Author: lcl1026504480
* @Date:   2019-03-31 16:25:16
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 16:32:36
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <map>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    std::map<char, int> s;
    char c;
    do
    {
        cin >>c;
        if (isalpha(c))
        {
            c=tolower(c);
            s[c]++;
        }
    }while(c!='.');
    for (std::map<char,int >::iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        cout << iter->first<<" "<<iter->second<<" ";
    }
    cout << endl;
    return 0;
}
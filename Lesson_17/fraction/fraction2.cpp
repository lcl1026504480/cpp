#include "iostream"
#include <cstdlib>
#include "./fraction.h"
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int n1,n2,d1,d2,c,c1;
    fraction f1,f2,f3;
    cout <<"欢迎进入分数四则运算系统，请根据提示操作!"<<endl;
    cout <<"------------------------------"<<endl;
    input2(n1,n2,d1,d2,f1,f2,f3,c);
    while(1)
    {
        fun(c,c1,n1,n2,d1,d2,f1,f2,f3);
    }
    return 0;
}
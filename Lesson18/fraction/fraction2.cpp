#include "iostream"
#include <cstdlib>
#include "./fraction.h"
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int n1,n2,d1,d2,c,c1;
    fraction f1,f2,f3;
    cout <<"��ӭ���������������ϵͳ���������ʾ����!"<<endl;
    cout <<"------------------------------"<<endl;
    input2(n1,n2,d1,d2,f1,f2,f3,c);
    while(1)
    {
        fun(c,c1,n1,n2,d1,d2,f1,f2,f3);
    }
    return 0;
}
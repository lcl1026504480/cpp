#include <iostream>
#include <cstdlib>
using namespace std;
double calc(double a)
{
    return a*a;
}
double calc(double a,double b)
{
    return a*b;
}
double calc(double a,double b,double c)
{
    return a+b+c;
}
int main(int argc, char const *argv[])
{
    switch(argc)
    {
        case(1):
        cout <<"结果是"<<calc((double)argv[0])<<endl;
        break;
        case(2):
        cout <<"结果是"<<calc((double)argv[0],(double)argv[1])<<endl;
        break;
        case(3):
        cout <<"结果是"<<calc((double)argv[0],(double)argv[1],(double)argv[2])<<endl;
        break;
        default:
        cerr <<"输入个数错误！"<<endl;
        break;
    }
    return 0;
}
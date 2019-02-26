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
int main()
{
    /* code */
    cout << "请输入一个数计算平方，两个数计算乘积，三个数计算和，数字之间以空格隔开,如果输入3个数以上，以前三个数为准,q退出"<<endl;
    char a;
    while (1)
    {
        cin.clear();
        cin.sync();
        a=cin.peek();
        if (a==('q'|'Q'))
        {
            cout << "程序结束" <<endl;
            exit(0);
        }
        double n[3];
        int i=0;
        double nu;
        while(cin >> nu)
        {
            n[i]=nu;
            i++;
            if (i==4 || cin.get()=='\n')
            {
                break;
            }
        }
        if (cin.good()==0)
        {
            cerr << "输入格式错误，请重新输入！"<<endl;
        }
        else
        {
            switch(i)
            {
                case(1):
                cout <<"结果是"<<calc(n[0])<<endl;
                break;
                case(2):
                cout <<"结果是"<<calc(n[0],n[1])<<endl;
                break;
                case(3):
                cout <<"结果是"<<calc(n[0],n[1],n[2])<<endl;
                break;
                default:
                cerr << "输入格式错误，请重新输入！"<<endl;
                break;
            }
        }
    }
    return 0;
}
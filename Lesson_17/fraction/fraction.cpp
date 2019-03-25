#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "./fraction.h"
using namespace std;
void fraction::fraction(int a=1,int b=1):num(a),den(b)
{
}
fraction fraction::operator+(fraction f)
{
    return output(fraction(num*f.den+f.num*den,den*f.den));
}
fraction fraction::operator-(fraction f)
{
    return output(fraction(num*f.den-f.num*den,den*f.den));
}
fraction fraction::operator*(fraction f)
{
    return output(fraction(num*f.num,den*f.den));
}
fraction fraction::operator/(fraction f)
{
    return output(fraction(num*f.den,den*f.num));
}
fraction fraction::output(fraction f)
    {
        int m,n;
        m=(f.num>0)?f.num:-f.num;
        n=(f.den>0)?f.den:-f.den;
        if (!m)
            return fraction(0,1);
        if(m<n)
        {
            m^=n;
            n^=m;
            m^=n;
        }
        int r=m%n;
        while(r)
        {//用n来除以m，直到m被n整除，循环终止，此时r的值为0，在c++中只有0才为假，任何非0的值都判断为真
        m=n;//辗转相除法的核心就是用较大的数m去除较小的数n，如果刚好能整除，则m与n的最大公约数为n，如果不能整除，则将n的值赋给m，余数r赋给n，再进行下一次的相除，以此循环，直到整除为止
        n=r;
        r=m%n;
        }
        return fraction(f.num/n,f.den/n);
    }
ostream & operator<<(ostream &os,fraction f)
{
    if (f.num==0)
    {
        os <<0;
    }
    else if (f.den==1)
        {
            os <<f.num;
        }
        else
            os <<f.num<<"/"<<f.den;
}
fraction calc(int &c,fraction &f1,fraction &f2)
{
    fraction r;
    switch(c)
    {
        case 1:
        r=f1+f2;
        cout <<f1;
        cout <<"+";
        cout <<f2;
        cout <<"=";
        cout <<r;
        cout <<endl;
        break;
        case 2:
        r=f1-f2;
        cout <<f1<<"-"<<f2<<"="<<r;
        cout <<endl;
        break;
        case 3:
        r=f1*f2;
         cout <<f1<<"×"<<f2<<"="<<r;
        cout <<endl;
        break;
        case 4:
        r=f1/f2;
        cout <<f1<<"÷"<<f2<<"="<<r;
        cout <<endl;
        break;
        default:
        break;
    }
    return r;
}
void numinput(int &n1)
{
    while(1)
    {
        cin.clear();
        cin.sync();
        cout <<"请输入分数的分子：";
        cin >> n1;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"输入错误,请重新输入"<<endl;
        else
            break;
    }
}
void deninput(int &d1)
{
    while(1)
    {
        cin.clear();
        cin.sync();
        cout <<"请输入分数的分母：";
        cin >> d1;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"输入错误,请重新输入"<<endl;
        else
        {
            if (d1==0)
            {
                cerr <<"分母不能为0!请重新输入"<<endl;
            }
            else
                break;
        }
    }
}
void choose(int &c)
{
    while(1)
    {
        cout <<"请选择操作："<<endl <<"1:加法"<<endl <<"2:减法"<<endl<<"3:乘法"<<endl<<"4:除法"<<endl;
        cin.clear();
        cin.sync();
        cin >> c;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"输入错误,请重新输入"<<endl;
        else
        {
            if (c==1 || c==2 || c==3 || c==4)
                break;
            else
                cerr <<"输入错误,请重新输入"<<endl;
        }
    }
}
void input1(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c)
{
        f1=f3;
        cout <<"请输入第二个分数"<<endl;
        numinput(n2);
        deninput(d2);
        f2=fraction(n2,d2);
        choose(c);
        f3=calc(c,f1,f2);
    }
void input2(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c)
{
        cout <<"请输入第一个分数"<<endl;
        numinput(n1);
        deninput(d1);
        f1=fraction(n1,d1);
        cout <<"请输入第二个分数"<<endl;
        numinput(n2);
        deninput(d2);
        f2=fraction(n2,d2);
        choose(c);
        f3=calc(c,f1,f2);
}
void fun(int &c,int &c1,int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3)
{
    while(1)
    {
        cout <<"请选择你的行为:"<<endl;
        cout <<"1:在上一次的结果下运算"<<endl;
        cout <<"2:重新开始"<<endl;
        cout <<"3:退出"<<endl;
        cin.clear();
        cin.sync();
        cin >> c1;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"输入错误,请重新输入"<<endl;
        else
        {
            if (c1==1 || c1==2 || c1==3)
                break;
            else
                cerr <<"输入错误,请重新输入"<<endl;
        }
    }
    switch(c1)
    {
        case 1:
        input1(n1,n2,d1,d2,f1,f2,f3,c);
        break;
        case 2:
        input2(n1,n2,d1,d2,f1,f2,f3,c);
        break;
        case 3:
        exit(0);
    }
}
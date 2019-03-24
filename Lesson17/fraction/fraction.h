# ifndef FRACTION_H
#define FRACTION_H
//定义计算分数的类
#include <iostream>
using namespace std;
class fraction;
class fraction
{
private:
    int num,den;
public:
    friend ostream & operator<<(ostream &os,fraction f);
    fraction(int a=1,int b=1):num(a),den(b)
    {
    }
    fraction output(fraction f)
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
    fraction operator+(fraction f)
    {
        return output(fraction(num*f.den+f.num*den,den*f.den));
    }
    fraction operator-(fraction f)
    {
        return output(fraction(num*f.den-f.num*den,den*f.den));
    }
    fraction operator*(fraction f)
    {
        return output(fraction(num*f.num,den*f.den));
    }
    fraction operator/(fraction f)
    {
        return output(fraction(num*f.den,den*f.num));
    }
};
//重载<<
ostream & operator<<(ostream &os,fraction f);
fraction calc(int &c,fraction &f1,fraction &f2);
//分子输入函数
void numinput(int &n1);
//分母输入函数
void deninput(int &d1);
//选择四则运算
void choose(int &c);
//第一种计算模式输入函数
void input1(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c);
//第二种计算模式输入函数
void input2(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c);
//选择后续功能
void fun(int &c,int &c1,int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3);
#endif



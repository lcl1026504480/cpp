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
    fraction(int a=1,int b=1);
    fraction output(fraction f);
    fraction operator+(fraction f);
    fraction operator-(fraction f);
    fraction operator*(fraction f);
    fraction operator/(fraction f);
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



# ifndef FRACTION_H
#define FRACTION_H
//��������������
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
        {//��n������m��ֱ��m��n������ѭ����ֹ����ʱr��ֵΪ0����c++��ֻ��0��Ϊ�٣��κη�0��ֵ���ж�Ϊ��
        m=n;//շת������ĺ��ľ����ýϴ����mȥ����С����n������պ�����������m��n�����Լ��Ϊn�����������������n��ֵ����m������r����n���ٽ�����һ�ε�������Դ�ѭ����ֱ������Ϊֹ
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
//����<<
ostream & operator<<(ostream &os,fraction f);
fraction calc(int &c,fraction &f1,fraction &f2);
//�������뺯��
void numinput(int &n1);
//��ĸ���뺯��
void deninput(int &d1);
//ѡ����������
void choose(int &c);
//��һ�ּ���ģʽ���뺯��
void input1(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c);
//�ڶ��ּ���ģʽ���뺯��
void input2(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c);
//ѡ���������
void fun(int &c,int &c1,int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3);
#endif



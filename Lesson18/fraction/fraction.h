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
    fraction(int a=1,int b=1);
    fraction output(fraction f);
    fraction operator+(fraction f);
    fraction operator-(fraction f);
    fraction operator*(fraction f);
    fraction operator/(fraction f);
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



#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "./fraction.h"
using namespace std;

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
         cout <<f1<<"��"<<f2<<"="<<r;
        cout <<endl;
        break;
        case 4:
        r=f1/f2;
        cout <<f1<<"��"<<f2<<"="<<r;
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
        cout <<"����������ķ��ӣ�";
        cin >> n1;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"�������,����������"<<endl;
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
        cout <<"����������ķ�ĸ��";
        cin >> d1;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"�������,����������"<<endl;
        else
        {
            if (d1==0)
            {
                cerr <<"��ĸ����Ϊ0!����������"<<endl;
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
        cout <<"��ѡ�������"<<endl <<"1:�ӷ�"<<endl <<"2:����"<<endl<<"3:�˷�"<<endl<<"4:����"<<endl;
        cin.clear();
        cin.sync();
        cin >> c;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"�������,����������"<<endl;
        else
        {
            if (c==1 || c==2 || c==3 || c==4)
                break;
            else
                cerr <<"�������,����������"<<endl;
        }
    }
}
void input1(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c)
{
        f1=f3;
        cout <<"������ڶ�������"<<endl;
        numinput(n2);
        deninput(d2);
        f2=fraction(n2,d2);
        choose(c);
        f3=calc(c,f1,f2);
    }
void input2(int &n1,int &n2,int &d1,int &d2,fraction &f1,fraction &f2,fraction &f3,int &c)
{
        cout <<"�������һ������"<<endl;
        numinput(n1);
        deninput(d1);
        f1=fraction(n1,d1);
        cout <<"������ڶ�������"<<endl;
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
        cout <<"��ѡ�������Ϊ:"<<endl;
        cout <<"1:����һ�εĽ��������"<<endl;
        cout <<"2:���¿�ʼ"<<endl;
        cout <<"3:�˳�"<<endl;
        cin.clear();
        cin.sync();
        cin >> c1;
        if (cin.get()!='\n' || cin.good()==0)
            cerr <<"�������,����������"<<endl;
        else
        {
            if (c1==1 || c1==2 || c1==3)
                break;
            else
                cerr <<"�������,����������"<<endl;
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
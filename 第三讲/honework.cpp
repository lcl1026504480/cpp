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
    cout << "������һ��������ƽ��������������˻�������������ͣ�����֮���Կո����,�������3�������ϣ���ǰ������Ϊ׼,q�˳�"<<endl;
    char a;
    while (1)
    {
        cin.clear();
        cin.sync();
        a=cin.peek();
        if (a==('q'|'Q'))
        {
            cout << "�������" <<endl;
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
            cerr << "�����ʽ�������������룡"<<endl;
        }
        else
        {
            switch(i)
            {
                case(1):
                cout <<"�����"<<calc(n[0])<<endl;
                break;
                case(2):
                cout <<"�����"<<calc(n[0],n[1])<<endl;
                break;
                case(3):
                cout <<"�����"<<calc(n[0],n[1],n[2])<<endl;
                break;
                default:
                cerr << "�����ʽ�������������룡"<<endl;
                break;
            }
        }
    }
    return 0;
}
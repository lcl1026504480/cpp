#include <iostream>
#include <cstdlib>
using namespace std;
void convertTemperature(double in,char ti);
int main()
{
    /* code */
    //�����¶�=���϶�*9/5+32
    char a;
    cout << "�����뻪�϶Ȼ������϶ȣ���ʽxx.x c/f��q�˳�"<< endl;
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
        double in;
        char ti;
        cin >> in >> ti;
        if (cin.good()==0)
        {
            cerr << "�����ʽ�������������룡"<<endl;
        }
        else
        {
            convertTemperature(in,ti);
        }
        cout << "�����뻪�϶Ȼ������϶ȣ���ʽxx.x c/f��q�˳�"<< endl;
    }
    return 0;
}
void convertTemperature(double in,char ti)
{
    const int n=32;
    const double r=9.0/5;
    double out;
    char to;
    switch(ti)
            {
                case('C'):
                case('c'):
                out=in*r+n;
                to='F';
                cout <<in<<ti<<"="<<out<<to<<endl;
                break;
                case('f'):
                case('F'):
                out=(in-n)/r;
                to='C';
                cout <<in<<ti<<"="<<out<<to<<endl;
                break;
                default:
                cerr<<"�����ʽ�������������룡"<<endl;
                break;
            }
}
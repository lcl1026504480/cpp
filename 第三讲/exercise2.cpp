#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /* code */
    //�����¶�=���϶�*9/5+32
    const int n=32;
    const double r=9.0/5;
    char a;
    cout << "�����뻪�϶Ȼ������϶ȣ���ʽxx.x c/f��q�˳�"<< endl;
    while (1)
    {
        a=cin.peek();
        if (a==('q'|'Q'))
        {
            cout << "�������" <<endl;
            exit(0);
        }
        double in,out;
        char ti,to;
        cin >> in >> ti;
        if (cin.good()==0)
        {
            cin.clear();
            cerr << "�����ʽ�������������룡"<<endl;
        }
        else
        {
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
        cout << "�����뻪�϶Ȼ������϶ȣ���ʽxx.x c/f��q�˳�"<< endl;
    }
    return 0;
}
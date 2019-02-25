#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /* code */
    //华氏温度=摄氏度*9/5+32
    const int n=32;
    const double r=9.0/5;
    char a;
    cout << "请输入华氏度或者摄氏度，格式xx.x c/f，q退出"<< endl;
    while (1)
    {
        a=cin.peek();
        if (a==('q'|'Q'))
        {
            cout << "程序结束" <<endl;
            exit(0);
        }
        double in,out;
        char ti,to;
        cin >> in >> ti;
        if (cin.good()==0)
        {
            cin.clear();
            cerr << "输入格式错误，请重新输入！"<<endl;
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
                cerr<<"输入格式错误，请重新输入！"<<endl;
                break;
            }
        }
        cout << "请输入华氏度或者摄氏度，格式xx.x c/f，q退出"<< endl;
    }
    return 0;
}
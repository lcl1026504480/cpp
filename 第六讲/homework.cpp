#include<iostream>
#include <string>
#include "fstream"
#include<Windows.h>//Sleep调用
using namespace std;
struct s
{
    string ac;
    int id;
    char sex;
};
int main()
{
    cout <<ios::beg;
    fstream f("homework.txt",ios::in |ios::out|ios::app);
    int a;
    s s1;
    int f1=1;
    int n=0;
    char se;
    while(1)
        {
            cin.clear();
            cin.sync();
            cout << "欢迎进入系统\n请根据下面的提示操作\n1:创建新的账户\n"
            <<"2:修改现有账户\n3:退出\n";
            cin >>a;
            switch(a)
            {
                case(1):
                while(f1)
                {
                cin.clear();
                cin.sync();
                cout <<"请输入账号(其中不能有空格)："<<endl;
                cin >>s1.ac;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"输入错误，请重新输入!"<<endl;
                else
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cin.clear();
                cin.sync();
                cout <<"请输入身份(纯数字)："<<endl;
                cin >>s1.id;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"输入错误，请重新输入!"<<endl;
                else
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cin.clear();
                cin.sync();
                cout <<"请输入性别(F表示女，M表示男)："<<endl;
                cin >>se;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"输入错误，请重新输入!"<<endl;
                else
                    if (se=='F'|| se== 'f'|| se=='m'||se=='M')
                    {
                        s1.sex=se;
                        f1=0;
                    }
                    else
                    cout <<"输入错误，请重新输入!"<<endl;
                }
                f1=1;
                n+=1;
                cout << "当前账户个数:"<<n;
                cout << "\n正在输出记录数据...... ";
                for( int i=0; i <= 100; i++ )      // 打印百分比
                {
                    cout.width(3);//i的输出为3位宽
                    cout << i << "%";
                    Sleep(5);
                    cout << "\b\b\b\b";//回删字符，使数字在原地变化
                }
                cout << "\n\n";
                cout <<"账户" <<"    "<<"身份证"<< "    "<<"性别"<< endl;
                if (!f)
                {
                cerr<<"打开文件错误"<<endl;
                }
                else
                    {
                        cout <<"创建账户并保存成功!"<<endl;
                        f << s1.ac <<"    "<<s1.id << "    "<<s1.sex <<endl;
                        f.seekg(0);
                        while((se=f.get())!=EOF)
                        {
                            cout <<se;
                        }
                    }
                break;
                case(2):
                if (!n)
                    cout<<"请先创建新的账户"<<endl;
                else
                    break;
                break;
                case(3):
                return 0;
                break;
                default:
                cerr << "输入错误，请重新输入!" << endl;
            }
        }
        f.close();
        return 0;
}

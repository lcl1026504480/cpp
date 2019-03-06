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
void ac(int &n,int &f1,s* s1)
{
    while(f1)
    {
    cin.clear();
    cin.sync();
    cout <<"请输入账号(其中不能有空格)："<<endl;
    cin >>s1[n].ac;
    if (cin.get()!='\n' || cin.good()==0)
        cout <<"输入错误，请重新输入!"<<endl;
    else
        f1=0;
    }
    f1=1;
}
void id(int &n,int &f1,s* s1)
{
    while(f1)
    {
    cin.clear();
    cin.sync();
    cout <<"请输入身份(纯数字)："<<endl;
    cin >>s1[n].id;
    if (cin.get()!='\n' || cin.good()==0)
        cout <<"输入错误，请重新输入!"<<endl;
    else
        f1=0;
    }
    f1=1;
}
void sex(int &n,int &f1,s* s1)
{
    while(f1)
    {
    cin.clear();
    cin.sync();
    cout <<"请输入性别(F表示女，M表示男)："<<endl;
    cin >>s1[n].sex;
    if (cin.get()!='\n' || cin.good()==0)
        cout <<"输入错误，请重新输入!"<<endl;
    else
        if (s1[n].sex=='F'|| s1[n].sex== 'f'|| s1[n].sex=='m'||s1[n].sex=='M')
        {
            f1=0;
        }
        else
        cout <<"输入错误，请重新输入!"<<endl;
    }
}
int main()
{
    ofstream f("homework.txt");
    int a;
    s s1[1000];//最多容纳1000个
    s xg;
    int f1=1;
    int n=0;
    int j;
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
                ac(n,f1,s1);
                id(n,f1,s1);
                sex(n,f1,s1);
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
                cout <<"创建账户成功!"<<endl;
                cout <<"账户" <<"    "<<"身份证"<< "    "<<"性别"<< endl;
                for (int i = 0; i < n; ++i)
                {
                    /* code */
                    cout << s1[i].ac << "    "<< s1[i].id <<"    "<<s1[i].sex <<endl;
                }
                if (!f)
                {
                cerr<<"打开文件错误"<<endl;
                }
                else
                    {
                        cout <<"创建账户并保存成功!"<<endl;
                        f << s1[n-1].ac <<"    "<<s1[n-1].id << "    "<<s1[n-1].sex <<endl;
                    }
                break;
                case(2):
                if (!n)
                    cout<<"请先创建新的账户!"<<endl;
                else
                    {
                        while(f1)
                            {
                            cin.clear();
                            cin.sync();
                            cout <<"请输入需要修改的账号(其中不能有空格)："<<endl;
                            cin >>xg.ac;
                            if (cin.get()!='\n' || cin.good()==0)
                                cout <<"输入错误，请重新输入!"<<endl;
                            else
                                {
                                    for (int i = 0; i < n; ++i)
                                    {
                                        /* code */
                                        if (xg.ac==s1[i].ac)
                                            {
                                                f1=0;
                                                j=i;
                                                break;
                                            }
                                    }
                                    if (f1)
                                    {
                                        cout << "输入的账号不存在!"<<endl;
                                    }
                                    else
                                    {
                                        xg.id=s1[j].id;
                                        xg.sex=s1[j].sex;
                                        f1=1;
                                        id(j,f1,s1);
                                        sex(j,f1,s1);
                                        cout <<"账户" <<"    "<<"身份证"<< "    "<<"性别"<< endl;
                                        cout << "修改前:" << xg.ac<<"-"<<xg.id<<"-"<<xg.sex<<endl;
                                        cout <<"修改后："<< s1[j].ac<<"-"<<s1[j].id<<"-"<<s1[j].sex<<endl;
                                    }
                                }
                            }
                        f1=1;
                    }
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

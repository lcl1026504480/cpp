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
    char a;
    ofstream f("homework.txt",ios:app);
    s s1;
    int f1=1;
    int n=0;
    while(1)
        {
            cout << "欢迎进入系统\n请根据下面的提示操作\n1:创建新的账户\n
            2:修改现有账户\n3:退出\n";
            a=cin.get();
            switch(a)
            {
                case('1'):
                while(f1)
                {
                cin.clear();
                cin.rsync();
                cout <<"请输入账号(其中不能有空格)："<<endl;
                cin >>s1.ac;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"输入错误，请重新输入!";
                else：
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cout <<"请输入身份(纯数字)："<<endl;
                cin >>s1.id;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"输入错误，请重新输入!";
                else：
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cout <<"请输入性别(F表示女，M表示男)："<<endl;
                cin >>s1.sex;
                if (cin.get()!='\n' || cin.good()==0 || s1.sex!='f' || s1.sex!='F' ||s1.sex!='M'||s1.sex!='m')
                    cout <<"输入错误，请重新输入!";
                else：
                    f1=0;
                }
                n+=1;
                cout << "当前账户个数:"<<n;
                if (!f)
                {
                cerr<<"打不开文件"<<endl;
                }
                else
                    f << s1.ac <<" "<<s1.id << " "<<
                break;
                case(2):
                if (!n)
                    cout<<"请先创建新的账户";
                else


            }
                cout << "\n正在输出记录数据...... ";
                for( int i=0; i <= 100; i++ )      // 打印百分比
                {
                    std::cout.width(3);//i的输出为3位宽
                    std::cout << i << "%";
                    Sleep(50);
                    std::cout << "\b\b\b\b";//回删字符，使数字在原地变化
                }
                std::cout << "\n\n";
        }
        return 0;
}

#include<iostream>
#include <string>
#include "fstream"
#include<Windows.h>//Sleep����
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
    cout <<"�������˺�(���в����пո�)��"<<endl;
    cin >>s1[n].ac;
    if (cin.get()!='\n' || cin.good()==0)
        cout <<"�����������������!"<<endl;
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
    cout <<"���������(������)��"<<endl;
    cin >>s1[n].id;
    if (cin.get()!='\n' || cin.good()==0)
        cout <<"�����������������!"<<endl;
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
    cout <<"�������Ա�(F��ʾŮ��M��ʾ��)��"<<endl;
    cin >>s1[n].sex;
    if (cin.get()!='\n' || cin.good()==0)
        cout <<"�����������������!"<<endl;
    else
        if (s1[n].sex=='F'|| s1[n].sex== 'f'|| s1[n].sex=='m'||s1[n].sex=='M')
        {
            f1=0;
        }
        else
        cout <<"�����������������!"<<endl;
    }
}
int main()
{
    ofstream f("homework.txt");
    int a;
    s s1[1000];//�������1000��
    s xg;
    int f1=1;
    int n=0;
    int j;
    while(1)
        {
            cin.clear();
            cin.sync();
            cout << "��ӭ����ϵͳ\n������������ʾ����\n1:�����µ��˻�\n"
            <<"2:�޸������˻�\n3:�˳�\n";
            cin >>a;
            switch(a)
            {
                case(1):
                ac(n,f1,s1);
                id(n,f1,s1);
                sex(n,f1,s1);
                f1=1;
                n+=1;
                cout << "��ǰ�˻�����:"<<n;
                cout << "\n���������¼����...... ";
                for( int i=0; i <= 100; i++ )      // ��ӡ�ٷֱ�
                {
                    cout.width(3);//i�����Ϊ3λ��
                    cout << i << "%";
                    Sleep(5);
                    cout << "\b\b\b\b";//��ɾ�ַ���ʹ������ԭ�ر仯
                }
                cout << "\n\n";
                cout <<"�����˻��ɹ�!"<<endl;
                cout <<"�˻�" <<"    "<<"���֤"<< "    "<<"�Ա�"<< endl;
                for (int i = 0; i < n; ++i)
                {
                    /* code */
                    cout << s1[i].ac << "    "<< s1[i].id <<"    "<<s1[i].sex <<endl;
                }
                if (!f)
                {
                cerr<<"���ļ�����"<<endl;
                }
                else
                    {
                        cout <<"�����˻�������ɹ�!"<<endl;
                        f << s1[n-1].ac <<"    "<<s1[n-1].id << "    "<<s1[n-1].sex <<endl;
                    }
                break;
                case(2):
                if (!n)
                    cout<<"���ȴ����µ��˻�!"<<endl;
                else
                    {
                        while(f1)
                            {
                            cin.clear();
                            cin.sync();
                            cout <<"��������Ҫ�޸ĵ��˺�(���в����пո�)��"<<endl;
                            cin >>xg.ac;
                            if (cin.get()!='\n' || cin.good()==0)
                                cout <<"�����������������!"<<endl;
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
                                        cout << "������˺Ų�����!"<<endl;
                                    }
                                    else
                                    {
                                        xg.id=s1[j].id;
                                        xg.sex=s1[j].sex;
                                        f1=1;
                                        id(j,f1,s1);
                                        sex(j,f1,s1);
                                        cout <<"�˻�" <<"    "<<"���֤"<< "    "<<"�Ա�"<< endl;
                                        cout << "�޸�ǰ:" << xg.ac<<"-"<<xg.id<<"-"<<xg.sex<<endl;
                                        cout <<"�޸ĺ�"<< s1[j].ac<<"-"<<s1[j].id<<"-"<<s1[j].sex<<endl;
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
                cerr << "�����������������!" << endl;
            }
        }
        f.close();
        return 0;
}

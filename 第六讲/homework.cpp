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
            cout << "��ӭ����ϵͳ\n������������ʾ����\n1:�����µ��˻�\n"
            <<"2:�޸������˻�\n3:�˳�\n";
            cin >>a;
            switch(a)
            {
                case(1):
                while(f1)
                {
                cin.clear();
                cin.sync();
                cout <<"�������˺�(���в����пո�)��"<<endl;
                cin >>s1.ac;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"�����������������!"<<endl;
                else
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cin.clear();
                cin.sync();
                cout <<"���������(������)��"<<endl;
                cin >>s1.id;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"�����������������!"<<endl;
                else
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cin.clear();
                cin.sync();
                cout <<"�������Ա�(F��ʾŮ��M��ʾ��)��"<<endl;
                cin >>se;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"�����������������!"<<endl;
                else
                    if (se=='F'|| se== 'f'|| se=='m'||se=='M')
                    {
                        s1.sex=se;
                        f1=0;
                    }
                    else
                    cout <<"�����������������!"<<endl;
                }
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
                cout <<"�˻�" <<"    "<<"���֤"<< "    "<<"�Ա�"<< endl;
                if (!f)
                {
                cerr<<"���ļ�����"<<endl;
                }
                else
                    {
                        cout <<"�����˻�������ɹ�!"<<endl;
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
                    cout<<"���ȴ����µ��˻�"<<endl;
                else
                    break;
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

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
    char a;
    ofstream f("homework.txt",ios:app);
    s s1;
    int f1=1;
    int n=0;
    while(1)
        {
            cout << "��ӭ����ϵͳ\n������������ʾ����\n1:�����µ��˻�\n
            2:�޸������˻�\n3:�˳�\n";
            a=cin.get();
            switch(a)
            {
                case('1'):
                while(f1)
                {
                cin.clear();
                cin.rsync();
                cout <<"�������˺�(���в����пո�)��"<<endl;
                cin >>s1.ac;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"�����������������!";
                else��
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cout <<"���������(������)��"<<endl;
                cin >>s1.id;
                if (cin.get()!='\n' || cin.good()==0)
                    cout <<"�����������������!";
                else��
                    f1=0;
                }
                f1=1;
                while(f1)
                {
                cout <<"�������Ա�(F��ʾŮ��M��ʾ��)��"<<endl;
                cin >>s1.sex;
                if (cin.get()!='\n' || cin.good()==0 || s1.sex!='f' || s1.sex!='F' ||s1.sex!='M'||s1.sex!='m')
                    cout <<"�����������������!";
                else��
                    f1=0;
                }
                n+=1;
                cout << "��ǰ�˻�����:"<<n;
                if (!f)
                {
                cerr<<"�򲻿��ļ�"<<endl;
                }
                else
                    f << s1.ac <<" "<<s1.id << " "<<
                break;
                case(2):
                if (!n)
                    cout<<"���ȴ����µ��˻�";
                else


            }
                cout << "\n���������¼����...... ";
                for( int i=0; i <= 100; i++ )      // ��ӡ�ٷֱ�
                {
                    std::cout.width(3);//i�����Ϊ3λ��
                    std::cout << i << "%";
                    Sleep(50);
                    std::cout << "\b\b\b\b";//��ɾ�ַ���ʹ������ԭ�ر仯
                }
                std::cout << "\n\n";
        }
        return 0;
}

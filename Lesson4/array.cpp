#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /* code */
    const int gs=10;
    cout << "������ʮ�����ּ���ͺ�ƽ��������q�˳�"<<endl;
    while (1)
    {
        cin.clear();
        cin.sync();
        int n[10];
        for (int i = 0; i < gs; ++i)
        {
            /* code */
            cout <<"�������"<<i+1<<"������"<<endl;
            if (cin.peek()==('q'|'Q'))
            {
                cout << "�������" <<endl;
                exit(0);
            }
            cin >>n[i];
            if (cin.good()==0)
            {

                cerr << "�����ʽ�������������룡"<<endl;
                break;
            }
        }
        int s=0;
        if (cin.good())
        {
            for (int j= 0; j < 10; ++j)
            {
                /* code */
                s+=n[j];
            }
        cout << "��Ϊ" <<s<<endl;
        cout << "ƽ����Ϊ" << s/10.0<<endl;
        }
        cout << "������ʮ�����ּ���ͺ�ƽ��������q�˳�"<<endl;
    }
    return 0;
}
#include <iostream>

#include <cstdlib>

using namespace std;

int main()

{

    /* code */

    cout << "������ʮ�����ּ���ͺ�ƽ��������q�˳�"<<endl;

    while (1)

    {

        cin.clear();

        cin.sync();

        if (cin.peek()==('q'|'Q'))

        {

            cout << "�������" <<endl;

            exit(0);

        }

        int n[100];

        int i=0;

        int nu;

        while(cin >> nu)

        {

            n[i]=nu;

            i++;

            if (cin.get()=='\n')

            {

                break;

            }

        }

        if (cin.good()==0)

        {



            cerr << "�����ʽ�������������룡"<<endl;

        }

        else

        {

            if (i!=10)

                cerr << "�����ʽ�������������룡"<<endl;

            else

            {

                int s=0;

                for (int j= 0; j < 10; ++j)

                {

                    /* code */

                    s+=n[j];

                }

                cout << "��Ϊ" <<s<<endl;

                cout << "ƽ����Ϊ" << s/10.0<<endl;

            }

        }

        cout << "������ʮ�����ּ���ͺ�ƽ��������q�˳�"<<endl;

    }

    return 0;

}
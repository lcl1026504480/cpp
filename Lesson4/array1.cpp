#include <iostream>

#include <cstdlib>

using namespace std;

int main()

{

    /* code */

    cout << "请输入十个数字计算和和平均数，按q退出"<<endl;

    while (1)

    {

        cin.clear();

        cin.sync();

        if (cin.peek()==('q'|'Q'))

        {

            cout << "程序结束" <<endl;

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



            cerr << "输入格式错误，请重新输入！"<<endl;

        }

        else

        {

            if (i!=10)

                cerr << "输入格式错误，请重新输入！"<<endl;

            else

            {

                int s=0;

                for (int j= 0; j < 10; ++j)

                {

                    /* code */

                    s+=n[j];

                }

                cout << "和为" <<s<<endl;

                cout << "平均数为" << s/10.0<<endl;

            }

        }

        cout << "请输入十个数字计算和和平均数，按q退出"<<endl;

    }

    return 0;

}
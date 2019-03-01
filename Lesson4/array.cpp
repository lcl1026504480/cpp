#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /* code */
    const int gs=10;
    cout << "请输入十个数字计算和和平均数，按q退出"<<endl;
    while (1)
    {
        cin.clear();
        cin.sync();
        int n[10];
        for (int i = 0; i < gs; ++i)
        {
            /* code */
            cout <<"请输入第"<<i+1<<"个整数"<<endl;
            if (cin.peek()==('q'|'Q'))
            {
                cout << "程序结束" <<endl;
                exit(0);
            }
            cin >>n[i];
            if (cin.good()==0)
            {

                cerr << "输入格式错误，请重新输入！"<<endl;
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
        cout << "和为" <<s<<endl;
        cout << "平均数为" << s/10.0<<endl;
        }
        cout << "请输入十个数字计算和和平均数，按q退出"<<endl;
    }
    return 0;
}
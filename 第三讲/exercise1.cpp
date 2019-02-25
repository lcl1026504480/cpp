#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /* code */
    char answer;
    cout << "你是女装大佬吗？请输入y/n回答，q退出游戏。"<< endl;
    cin >> answer;
    while (1)
    {
        switch(answer)
        {
            case('y'):
            case('Y'):
            cout << "那你很厉害哦"<<endl;
            break;
            case('n'):
            case('N'):
            cout << "真没劲"<<endl;
            break;
            case('q'):
            case('Q'):
            cout<<"游戏结束"<<endl;
            exit(0);
            default:
            cerr<<"输入错误，请按照规范输入"<<endl;
            break;
        }
    cout << cin.eof() << endl;
    cout << cin.fail() <<endl;
    cout << cin.bad() <<endl;
    cout << cin.good() <<endl;
    cout << "你是女装大佬吗？请输入y/n回答，q退出游戏。"<< endl;
    cin >> answer;
    }
    return 0;
}
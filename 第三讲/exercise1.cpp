#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    /* code */
    char answer;
    cout << "����Ůװ������������y/n�ش�q�˳���Ϸ��"<< endl;
    cin >> answer;
    while (1)
    {
        switch(answer)
        {
            case('y'):
            case('Y'):
            cout << "���������Ŷ"<<endl;
            break;
            case('n'):
            case('N'):
            cout << "��û��"<<endl;
            break;
            case('q'):
            case('Q'):
            cout<<"��Ϸ����"<<endl;
            exit(0);
            default:
            cerr<<"��������밴�չ淶����"<<endl;
            break;
        }
    cout << cin.eof() << endl;
    cout << cin.fail() <<endl;
    cout << cin.bad() <<endl;
    cout << cin.good() <<endl;
    cout << "����Ůװ������������y/n�ش�q�˳���Ϸ��"<< endl;
    cin >> answer;
    }
    return 0;
}
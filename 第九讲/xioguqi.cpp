#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ofstream p("xigouqi.txt");
class x
{
public:
    x()
    {
        cout <<"���빹����"<<endl;
        if (p.is_open())
{        p<<"����һ��������ʾ��!";
        cout <<"д�ļ��ɹ�!"<<endl;}
    }
    ~x()
    {
        p.close();
        cout <<"�ļ��ѹر�";
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    x x1;
    cout <<"������"<<endl;
    cin.get();
    return 0;
}
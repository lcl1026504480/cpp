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
        cout <<"进入构造器"<<endl;
        if (p.is_open())
{        p<<"这是一个析构器示例!";
        cout <<"写文件成功!"<<endl;}
    }
    ~x()
    {
        p.close();
        cout <<"文件已关闭";
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    x x1;
    cout <<"结束了"<<endl;
    cin.get();
    return 0;
}
#include "iostream"
using namespace std;
int main()
{
const int s=50;
char p[s];
cout << "请输入一段文本：";
cin.read(p,20);
cout << "收集到的字符数为" << cin.gcount() << endl;
cout <<"输入的文本信息为：";
cout.write(p,20);
cout << endl;
}

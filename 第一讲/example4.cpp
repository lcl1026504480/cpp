#include "iostream"
using namespace std;
int main()
{
const int s=50;
char p[s];
int a;
cin >> a;
cin.read(p,20);
cout << "收集到的字符数为" << cin.gcount() << endl;
cout <<"输入的信息为：";
cout.write(p,20);
cout << endl;
}

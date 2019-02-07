#include "iostream"
using namespace std;
int main()
{
char p;
cout << "请输入一段文字：\n";
//while (cin.peek()!='\n')
while ((p=cin.get())!='\n')
{
//cout << (p=cin.get());
cout << p; 
}
cout << endl;
return 0;
}

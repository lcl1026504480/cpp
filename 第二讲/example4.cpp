#include "iostream"
#include "fstream"
using namespace std;
int main()
{
fstream fp("test",ios::in|ios::out);
if (!fp)
{
cerr << "打开文件失败" << endl;
return 0;
}
fp << "这是第四个例子！";
char str[2];
fp.seekg(ios::beg);
fp >> str;
cout << str<<endl;
return 0;
}

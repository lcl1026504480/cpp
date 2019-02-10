#include "fstream"
#include "iostream"
using namespace std;
int main()
{
ifstream in;
in.open("test");
if (!in)
{
cerr << "打开文件失败"<<endl;
return 0;
}
char x;
while((x=in.get())!=EOF)
{
cout <<x;
}
in.close();
return 0;
}

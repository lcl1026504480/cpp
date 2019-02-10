#include "iostream"
#include "fstream"
using namespace std;
int main()
{
//ofstream out;
//out.open("test");
ofstream out("test",ios::app);
if (!out)
{
cerr << "打开文件失败" << endl;
return 0;
}
for (int i=10;i>0;i--)
{
out << i;
}
out <<endl;
out.close();
return 0;
}

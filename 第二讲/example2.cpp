#include "iostream"
#include "fstream"
using namespace std;
int main()
{
//ofstream out;
//out.open("test");
ofstream out("test");
if (!out)
{
cerr << "打开文件失败" << endl;
return 0;
}
for (int i=0;i<20;i++)
{
out << i;
}
out <<endl;
out.close();
return 0;
}

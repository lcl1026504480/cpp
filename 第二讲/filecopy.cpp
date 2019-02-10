#include "iostream"
#include "fstream"
#include "cstdlib"
#include "string"
using namespace std;
int main(int argc,char* argv[])
{
ifstream in(argv[1]);
ofstream out(argv[2]);
if (argc!=3)
{
cerr<<"输入形式为：filecopy src dst"<<endl;
exit(EXIT_FAILURE);
}
if (!in)
{
cerr<<"打不开文件"<<argv[1]<<endl;
exit(EXIT_FAILURE);
}
if (!out)
{
cerr<<"打不开文件"<<argv[2]<<endl;
in.close();
exit(EXIT_FAILURE);
}
char ch;
while ((ch=in.get())!=EOF)
{
out << ch;
}
cout <<"文件复制成功！"<<endl;
in.close();
out.close();
return 0;
}


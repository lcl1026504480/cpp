#include "iostream"
using namespace std;
int main()
{int sum=0;int i;
cout << "请输入任意字母和空格：";
while(cin >>i)
{
sum+=i;
while (cin.peek()==' ')
cin.get();
if (cin.peek()=='\n')
break;

}
cout << "结果是："<< sum << endl;
return 0;
}


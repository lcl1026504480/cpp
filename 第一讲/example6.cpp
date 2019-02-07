#include "iostream"
using namespace std;
int main()
{
    char a[10];
    cin.getline(a,10); //输入"123456789"
    cout << a << endl;  //输出"123456789"
    cout << cin.gcount();  //输出10
return 0;
}


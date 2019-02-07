#include "iostream"
using namespace std;
int main()
{
char buf[20];
cin.ignore(6);
cin.getline(buf,10);
cout << buf <<endl;
return 0;
}

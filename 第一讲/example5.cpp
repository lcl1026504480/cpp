#include "iostream"
using namespace std;
int main()
{
char a[10];
cin.getline(a,6);
cout << cin.gcount() << "\n"<< a << endl;
}

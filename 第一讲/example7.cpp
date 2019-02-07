#include "iostream"
#include "math.h"
using namespace std;
int main()
{
double a=sqrt(3.0)*0.1;
for (int i=0;i<=6;i++)
{
cout.precision(i);
cout << a << endl;
cout << "当前的精度为" << i << endl;
}
}

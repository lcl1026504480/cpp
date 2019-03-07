#include <iostream>
using namespace std;
void b(int *a)
{
    a[0]=0;
}
int main(int argc, char const *argv[])
{
    int a[]={1,2,3};
    b(a);
    cout << a[0];
    for (int i = 0; i < 5; ++i);
    return 0;
}
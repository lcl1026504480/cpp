#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    int b[10];
    int i=0;
    while(cin>>a)
    {
        b[i]=a;
        i++;
    }
    cout << i;
}
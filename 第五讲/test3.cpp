#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string a="12345";
    char b[]="abcde";
    for (int i = 0; i < 5; ++i)
    {
        /* code */
        cout <<&a[i]<<endl;
    }
    for (int i = 0; i < 5; ++i)
    {
        /* code */
        cout <<&b[i]<<endl;
    }
    return 0;
}
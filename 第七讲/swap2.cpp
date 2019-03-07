#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    a^=b;
    b^=a;
    a^=b;
}
int main(int argc, char const *argv[])
{
    int a,b;
    a=2;
    b=3;
    swap(a,b);
    cout <<a<<b;
    switch(a)
    {
        case 1:
        break;
    }
    return 0;
}
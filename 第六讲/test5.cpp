#include <iostream>
using namespace std;
struct s
{
    int a=0;
    int b=1;
    char c[4]="012";
};
s print(int a1,int a2)
{
    s s1;
    s1.a=a1;
    s1.b=a2;
    s1.c[0]='a';
    return s1;
}
int main(int argc, char const *argv[])
{
    /* code */
    s s2;
    s2=print(2,3);
    cout <<s2.a <<endl<<s2.b<<s2.c;
    return 0;
}
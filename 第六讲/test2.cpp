#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3]={2,1,3};
    int *b[3];
    int (*c)[3]=&a;
    for (int i = 0; i < 3; ++i)
    {
        /* code */
        *(b+i)=a+i;
    }
    cout <<a<<"-"<<a+1<<"-"<<a+2<<endl;
    cout << *c<<":"<<**c <<endl;
    cout <<*c+1<<":"<<":"<<*(*c+1) <<endl;
    cout <<*c+2<<":"<<":"<<*(*c+2);
    cout << c+1 << "."<< c+2;
    // cout << b[0] <<":"<<*b[0]<<endl;
    // cout << b[1] <<":"<<*b[1]<<endl;
    // cout << b[2] <<":"<<*b[2]<<endl;
    // cout << c[0] <<"-"<< *c[0] <<endl;
    // cout << c[1] <<"-"<< *c[1] <<endl;
    // cout << c[2] <<"-"<< *c[2] <<endl;
    // cout << c<<"-"<<c+1 << ":"<< *(c+1)<< endl;
    // cout << &b[0]<<"-"<<&b[1]<<"-"<<b<<"-"<<b+1 <<endl;
    // cout << &c;
    return 0;
}
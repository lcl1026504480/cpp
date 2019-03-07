#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    union passwd
    {
        int p1=0;
        int p2;
        char p3;
         char p4;
    }p;
    cout << &p <<endl;
    cout << &p+1<<endl;
    p.p1=1;
    cout << p.p1<<"-"<<p.p2<<"-"<<p.p3<<"-"<<p.p4<<endl;
    p.p2=0;
    cout << p.p1<<"-"<<p.p2<<"-"<<p.p3<<"-"<<p.p4<<endl;
    p.p4='1';
    cout << p.p1<<"-"<<p.p2<<"-"<<p.p3<<"-"<<p.p4<<endl;
    cout <<"p1:"<<&p.p1<<endl;
    cout <<"p2:"<<&p.p2<<endl;
    cout <<"p2:"<<(int *)&p.p3<<endl;
    cout <<"p2:"<<&p.p4<<endl;
    return 0;
}
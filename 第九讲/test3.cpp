#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    A()
     {
        cout <<"����A���๹����!"<<endl;
     }
    ~ A()
    {
        cout <<"����A����������!"<<endl;
    }

};
class B
{
public:
    B()
    {
        cout <<"����B�๹����!"<<endl;
    }
    ~B()
    {
        cout <<"����B��������"<<endl;
    }
};
class C:public B,public A
{
public:
    C():A()
    {
        cout <<"����C�๹����!"<<endl;
    }
    ~C()
    {
        cout <<"����C��������"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    C c;
    cout <<"����"<<endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    string n;
     A(string  s)
     {
        n=s;
        cout <<"������๹����!"<<endl;
     }
    A()
     {
        cout <<"����������ع�����!"<<endl;
     }
    ~ A()
    {
        cout <<"�������������!"<<endl;
    }

};
class B:public A
{
public:
    B(string s)
    {
        n=s;
        cout <<"�������๹����!"<<endl;
    }
    ~B()
    {
        cout <<"��������������"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    // A a("a");
    B b("b");
    // cout <<a.n<<endl;
    cout <<b.n<<endl;
    cout <<"����"<<endl;
    return 0;
}
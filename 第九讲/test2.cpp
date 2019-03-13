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
        cout <<"进入基类构造器!"<<endl;
     }
    A()
     {
        cout <<"进入基类重载构造器!"<<endl;
     }
    ~ A()
    {
        cout <<"进入基类析构器!"<<endl;
    }

};
class B:public A
{
public:
    B(string s)
    {
        n=s;
        cout <<"进入子类构造器!"<<endl;
    }
    ~B()
    {
        cout <<"进入子类析构器"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    // A a("a");
    B b("b");
    // cout <<a.n<<endl;
    cout <<b.n<<endl;
    cout <<"结束"<<endl;
    return 0;
}
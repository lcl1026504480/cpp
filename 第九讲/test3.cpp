#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    A()
     {
        cout <<"进入A基类构造器!"<<endl;
     }
    ~ A()
    {
        cout <<"进入A基类析构器!"<<endl;
    }

};
class B
{
public:
    B()
    {
        cout <<"进入B类构造器!"<<endl;
    }
    ~B()
    {
        cout <<"进入B类析构器"<<endl;
    }
};
class C:public B,public A
{
public:
    C():A()
    {
        cout <<"进入C类构造器!"<<endl;
    }
    ~C()
    {
        cout <<"进入C类析构器"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    C c;
    cout <<"结束"<<endl;
    return 0;
}
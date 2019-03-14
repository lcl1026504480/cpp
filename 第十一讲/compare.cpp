#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout <<"A"<<endl;
    }
    ~A()
    {
        cout <<"~A"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    A a;
        A a1;
        A a2;
    cout <<"end"<<endl;
    return 0;
}
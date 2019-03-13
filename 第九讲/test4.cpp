#include <iostream>
using namespace std;
class A
{
public:
    int n=0;
    A(int n)
    {
        cout <<this->n;
    }
};
int main(int argc, char const *argv[])
{
    A a(1);
    return 0;
}
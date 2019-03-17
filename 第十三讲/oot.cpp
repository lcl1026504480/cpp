#include <iostream>
using namespace std;
class oot
{
private:
    int m;
public:
    oot(int n=0)
    {
        m=n;
    }
    int operator +(int a)
    {
        return m-a;
    }
};
int main(int argc, char const *argv[])
{
    cout <<1+1 <<endl;
    oot a(1);
    cout << a+1;
    return 0;
}
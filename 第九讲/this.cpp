#include <iostream>
using namespace std;
    class Test
    {
    public:
        int n=10;
        Test(int a)
        {
            cout <<this<<endl;
            cout <<"####"<<this+1<<endl;
            n=a;
        }
    };
int main(int argc, char const *argv[])
{
    /* code */

    Test t1(1),t2(2);
    return 0;
}
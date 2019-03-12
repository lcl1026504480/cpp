#include <iostream>
using namespace std;
class Test
{
public:
    static const int math=10;
    double chinese=0;
    double english=0;
    void cheat()
    {
        cout <<"你作弊被发现了!GG"<<endl;
    }
    void rank(int);
} mytest;
void Test::rank (int n)
    {
        cout <<"你考了第"<<n<<"名!NB"<<endl;
    }
int main(int argc, char const *argv[])
{
    // mytest.rank(1);
    cout << mytest.math <<endl;
    // mytest.chinese=10;
    // cout << mytest.chinese <<endl;
    // Test m;
    // m=mytest;
    // cout << m.chinese;
    // // Test::rank(1);
    // cout << Test::math;
    return 0;
}
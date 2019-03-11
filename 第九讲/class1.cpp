#include <iostream>
using namespace std;
    class Test
    {
    public:
        double math=0;
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


    return 0;
}
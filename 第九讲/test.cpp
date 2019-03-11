#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    struct s
    {
        void a()
        {
            cout <<12;
        }
    }s1;
    s1.a();
    return 0;
}
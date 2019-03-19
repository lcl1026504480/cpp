#include <iostream>
using namespace std;
class factorial
{
private:
    int n;
public:
    factorial(int m):n(m)
    {
    }
    long long r()
    {
        if (n==0)
            cout<< 1;
        long long f=1;
        for (int i = 1; i <=n; ++i)
        {
            /* code */
            f*=i;
        }
        cout<<f;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    factorial f(13);
    f.r();
    return 0;
}
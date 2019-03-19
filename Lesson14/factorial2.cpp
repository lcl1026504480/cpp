#include <iostream>
#include <climits>
using namespace std;
class factorial
{
private:
    int n;
public:
    factorial(int m):n(m)
    {
    }
     r()
    {
        if (n==0)
            cout<< 1;
        int f=1;
        int max=INT_MAX;
        for (int i = 1; i <=n; ++i)
        {
            /* code */
            f*=i;
        }
        for (int i = n; i >= 1; --i)
        {
            max/=i;
        }
        if (max<1)
        {
            cerr<<"输入的数字太大了";
        }
        else
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
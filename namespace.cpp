#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
namespace A
    {
        int n=1;
    }
class B
    {
    public:
        const static int n=3;
    };
int main(int argc, char const *argv[])
{
     using namespace A;
    int m=2;
    using  B::n;
    cout <<n<<endl <<A::n <<endl << B::n;
    return 0;
}
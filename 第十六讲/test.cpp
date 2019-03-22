#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;
class test
{
public:
    test(int m)
    {
        n=m;
    }
    int n;
};
int main(int argc, char const *argv[])
{
    std::vector<int> arr(2);
    cout <<sizeof(arr[0]);
    // cout <<&arr[0] << endl << &arr[1] <<endl <<&arr[2] <<endl;
    // arr.push_back(1);
    // cout <<&arr[0] << endl << &arr[1] <<endl <<&arr[2];
    // int i=2;
    // int a[7];
    // cout <<a<<endl<<&i<<endl<<sizeof(a)<<endl;
    // a[7]=3;
    // cout <<i<<endl<<&i<<endl<<sizeof(a);
}
//     vector<int>arr(5,1);
//     cout <<arr.size();
//     arr.push_back(2);
//     cout <<arr.size();
// }
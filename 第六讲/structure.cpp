#include <iostream>
#include <string>
using namespace std;
struct s
{
    int a=2;
// int c()
// {
//     cout <<"666" <<endl;
//     return 0;
// }
} s1;
void test(s &s1)
{
    s1.a=3;
    cout <<s1.a <<endl;
}
int main(int argc, char const *argv[])
{


    test(s1);
    cout <<s1.a;
    // s * ps=&s1;
    // cout << s1.a <<endl<<ps->a<<endl<<(*ps).a<<endl<<ps;
    return 0;
}
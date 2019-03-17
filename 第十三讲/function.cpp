#include <iostream>
using namespace std;
void b();
void a()
{
    cout <<0;
    b();
}
void b()
{
    cout <<1;
}
int main(int argc, char const *argv[])
{
    a();
    return 0;
}
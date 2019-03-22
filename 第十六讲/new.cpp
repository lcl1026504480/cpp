#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int *fun()
{
    int *p=new int(5);
    return p;
}
int main(int argc, char const *argv[])
{
    /* code */
    cout <<*(fun());
    return 0;
}
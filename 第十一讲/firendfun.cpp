#include <iostream>
using namespace std;
class f
{
private:
    int n=10;
    ff()
    {
        cout <<"FFF";
    }
    friend void t(f&);
};
class g:public f
{
private:
    int m=-10;
};
void t(g &a)
{
    cout <<endl <<a.m;
}
int main(int argc, char const *argv[])
{
    g f1;
    t(f1);
    return 0;
}
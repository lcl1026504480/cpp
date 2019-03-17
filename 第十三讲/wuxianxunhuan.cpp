#include <iostream>
using namespace std;
class complex
{
private:
    double real,img;
public:
    complex()
    {
        real=img=0;
    }
    complex(double a,double b)
    {
        real=a;
        img=b;
    }
    print()
    {
        cout <<"("<<real<<","<<img<<"i)";
    }
    complex operator+(complex &a)
    {
        return *this-a;
    }
    complex operator-(complex &a)
    {
        return *this+a;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    complex c1(2,1.8), c2(8,7.5);
    c1+c2;
    return 0;
}
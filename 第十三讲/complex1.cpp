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
    complex operator +(complex &a)
    {
        print();
        cout <<"+";
        a.print();
        return complex(real+a.real,img+a.img);
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    complex c1(2,1.8), c2(8,7.5), c3,c4;
    c3=complex(1,2);
    c4=c1+c2+c3;
    cout <<"=";
    c4.print();
    return 0;
}
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
    complex complex_add(complex a)
    {
        complex r;
        double rr,ri;
        r.real=real+a.real;
        r.img=img+a.img;
        print();
        cout <<"+";
        a.print();
        cout <<"=";
        r.print();
        cout <<endl;
        return r;
    }
};
int main(int argc, char const *argv[])
{
    /* code */
    complex c1(2,1.8), c2(8,7.5), c3(-2,-4);
    c3.complex_add(c1.complex_add(c2));
    return 0;
}
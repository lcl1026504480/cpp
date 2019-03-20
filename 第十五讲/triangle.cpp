#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include<exception>
using namespace std;
double area(double a,double b,double c) throw(invalid_argument)
{
    if(a<=0||b<=0||c<=0)
        throw invalid_argument("三条边长必须为正!");
    if (a+b<=c || a+c<=b || b+c <=a)
        throw invalid_argument("输入边长不符合三角不等式");
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(int argc, char const *argv[])
{
    double a,b,c;
    cout <<"请输入三角形的边长";
    cin >>a>>b>>c;
    try
    {
        double s=area(a,b,c);
        cout <<"面积:"<<s<<endl;
    }
    catch(exception &e)
    {
        cout <<e.what();
    }
    return 0;
}
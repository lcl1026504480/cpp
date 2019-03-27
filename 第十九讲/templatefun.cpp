/*
* @Author: lenovouser
* @Date:   2019-03-26 13:40:52
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-27 16:01:14
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
// template<t T,typename U>
// void swap1(T &a,U &b);
template<typename T>
void swap1(T a,T b)
{
    T temp=a;
    a=b;
    b=temp;
}
void fun(int a)
{
    cout <<"ЗЧжиди";
}
template<typename T>
void fun(T a)
{
    cout <<"жиди";
}
int main(int argc, char const *argv[])
{
    /* code */
    fun<>(1);
    // swap1<int>(1.2,2);
    // // cout << (int *)swap1<int > <<endl;
    // cout << (int *)swap1<int ,int> <<endl;
    // int a=3,b=2;
    // swap1<int>(a,b,b,a);

    // cout << a <<endl <<b<<endl;
    // double c=1.2;
    // swap1(a,c);
    // cout << a <<endl;
    // string s1,s2;
    // s1="123";
    // s2="321";
    // swap1(s1,s2);
    // cout << s1 <<endl <<s2;
    // return 0;
}
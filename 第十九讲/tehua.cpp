/*
* @Author: lcl1026504480
* @Date:   2019-03-27 16:35:53
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-27 20:38:26
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
template<typename T,int size=100>
class A
{
public:
    A()
    {
        cout <<"ģ��"<<endl;
    }
};
template<>
class A<int,32>
{
public:
    A()
    {
        cout <<"�ػ�ģ��"<<endl;
    }
};
template<typename T>
void fun(T a)
{
    cout <<"ģ�庯��"<<endl;
}
template<>
void fun(int a)
{
    cout <<"�ػ�ģ�庯��"<<endl;
}
fun(int a)
{
    cout <<"���غ���"<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    fun(1);
    fun(1.2);
    void (*f)(int );
    f=fun;
    (*f)(2);
    cout << (int *)f<<endl;
    cout <<(int *)fun<int><<endl;
    cout <<(int *)fun<float><<endl;
    // A <double,10> a;
    // A<int,32> a1;
    // A<int,30> a2;
    // cout <<sizeof(bool);
    return 0;
}
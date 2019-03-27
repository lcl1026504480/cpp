/*
* @Author: lcl1026504480
* @Date:   2019-03-26 14:48:20
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-26 14:48:20
*/
#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <exception>
using namespace std;
template<typename T>
class stack
{
public:
    stack(int s=100)
    {
        num=0;
    if (s<0)
    {
        throw "栈的大小必须为自然数";
    }
    size=s;
    p=new T[size];
    }
    ~stack()
    {
        delete  []p;
    }
    int push(T a)
    {
        if (num==size)
        {
            throw "栈溢出!";
        }
        p[num++]=a;
        return num;
    }
    T top()
    {
        if (num==0)
        {
        /* code */
            cerr <<"栈为空"<<endl;
        }
        else
            return p[num-1];
    }
    T pop()
    {
        if (num==0)
        {
            throw "栈为空";
        }
        return p[--num];
    }
   T *sp()
    {
        return p+num;
    }
    stack& operator=(stack &rhs)
    {
        cout <<"重载";
        this->num=rhs.num;
        this->size=rhs.size;
        cout << num<<endl;
        this->p=new T[size];
        for (unsigned int i = 0; i < num; ++i)
        {
            this->p[i]=rhs.p[i];
        }
        return rhs;
    }
    stack(stack &rhs)
    {
        cout <<"复制";
        *this=rhs;
    }
private:
    unsigned int size=100;
    unsigned int num=0;
    T *p;
};
#endif
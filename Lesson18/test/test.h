#include <iostream>
using namespace std;
#ifndef TEST_H
#define TEST_H

namespace
{
    class A
    {
    public:
       int c=3;
    };
static int a=1;
static void f();
void fun();
    static void f()
    {
        cout <<"test.cpp";
    }
    void fun()
    {
        cout  <<a;
    }
}
#endif
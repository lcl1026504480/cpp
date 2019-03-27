#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "test.h"
using namespace std;
template<typename T>
class test
{
public:
    test();
    static int a;
};
template<typename T>
test<T>::test()
{
    cout <<"ok";
}
template<typename T>
int test<T>::a=2;
#endif

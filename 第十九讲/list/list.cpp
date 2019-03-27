/*
* @Author: lenovouser
* @Date:   2019-03-27 09:46:09
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-27 13:06:38
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "list.h"
using namespace std;

int main(int argc, char const *argv[])
{
    List<int> list;
    list.append(5);
    list.append(7);
    list.append(8);
    list.print();
    cout <<"此时链表有"<<list.getsize()<<"个元素。"<<endl;
    list.happend(4);
    list.rprint();
    cout<<list[2]<<endl;
    list.insert(3,9);
    list.print();
    list.remove(2);
    list.rprint();
    list[2]=3;
    list.rprint();
    List<int> list1=list;
    list1.print();
    return 0;
}
/*
* @Author: lcl1026504480
* @Date:   2019-03-28 16:27:37
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 16:46:00
*/

#include <iostream>
#include <memory>

int main() {
    {
        int a = 10;
        std::shared_ptr<int> ptra = std::make_shared<int>(a);
        std::shared_ptr<int> ptra2(ptra); //copy
        std::cout << ptra.use_count() << std::endl;
        std::cout << ptra<<"\n" <<ptra2<<"\n"<<&a<<"\n"<<*ptra<<"\n\n";

        int b = 20;
        int *pb = &a;
        //std::shared_ptr<int> ptrb = pb;  //error
        std::cout << pb<<"\n";
        std::shared_ptr<int> ptrb = std::make_shared<int>(b);
        ptra2 = ptrb; //assign
        pb = ptrb.get(); //获取原始指针
        std::cout << pb<<"\n"<<&b <<"\n"<<ptrb<<"\n";
        std::cout << ptra.use_count() << std::endl;
        std::cout << ptrb.use_count() << std::endl;
    }
}
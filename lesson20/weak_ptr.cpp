/*
* @Author: lcl1026504480
* @Date:   2019-03-28 16:53:32
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 18:16:18
*/

#include <iostream>
#include <memory>

int main()
{
    {
        std::shared_ptr<int> sh_ptr = std::make_shared<int>(10);
        std::cout << sh_ptr.use_count() << std::endl;
        std::weak_ptr<int> wp(sh_ptr);
        std::cout <<wp;
        std::cout << wp.use_count() << std::endl;
        std::cout << sh_ptr<<"\n" << *sh_ptr <<"\n";
        if(!wp.expired()){
            std::shared_ptr<int> sh_ptr2 = wp.lock(); //get another shared_ptr
            std::cout <<sh_ptr2<<"\n"<<*sh_ptr2<<std::endl;
            *sh_ptr = 100;
            std::cout << sh_ptr.use_count() << std::endl;
            std::cout << sh_ptr2.use_count() << std::endl;
            std::cout << wp.use_count() << std::endl;
        }
    }
    //delete memory
}
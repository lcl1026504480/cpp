/*
* @Author: lcl1026504480
* @Date:   2019-03-28 16:44:20
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-28 16:50:42
*/

#include <iostream>
#include <memory>

int main() {
    {
        std::unique_ptr<int> uptr(new int(10));  //绑定动态对象
        // std::unique_ptr<int> uptr2 = uptr;  //不能賦值
        // std::unique_ptr<int> uptr2(uptr);  //不能拷貝
        // std::cout<<(int *)uptr<<"\n";
        std::unique_ptr<int> uptr2 = std::move(uptr); //轉換所有權
        // std::cout<<uptr<<"\n"<<uptr2<<"\n";
        uptr2.release(); //释放所有权
        // std::cout<<uptr<<"\n"<<uptr2<<"\n\n";
    }
    //超過uptr的作用域，內存釋放
    // std::cout<<uptr<<"\n"<<uptr2<<"\n";
}
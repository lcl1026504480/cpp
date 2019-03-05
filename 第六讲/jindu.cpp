#include<iostream>
#include<Windows.h>//Sleep调用
using namespace std;
int main(){



    std::cout << "\n正在输出记录数据...... ";
        for( int i=0; i <= 100; i++ )      // 打印百分比
        {
            std::cout.width(3);//i的输出为3位宽
            std::cout << i << "%";
            Sleep(50);
            std::cout << "\b\b\b\b";//回删三个字符，使数字在原地变化
        }
        std::cout << "\n\n";


    system("pause");
    return 0;
}

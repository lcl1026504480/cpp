#include<iostream>
#include<Windows.h>//Sleep����
using namespace std;
int main(){



    std::cout << "\n���������¼����...... ";
        for( int i=0; i <= 100; i++ )      // ��ӡ�ٷֱ�
        {
            std::cout.width(3);//i�����Ϊ3λ��
            std::cout << i << "%";
            Sleep(50);
            std::cout << "\b\b\b\b";//��ɾ�����ַ���ʹ������ԭ�ر仯
        }
        std::cout << "\n\n";


    system("pause");
    return 0;
}

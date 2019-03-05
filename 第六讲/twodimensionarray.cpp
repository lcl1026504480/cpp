#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int (*p)[4]; //该语句是定义一个数组指针，指向含4个元素的一维数组。
    p=a;        //将该二维数组的首地址赋给p，也就是a[0]或&a[0][0],
    cout << p << ":"<< *p<< endl;
    cout << a[0]<<"-"<< a[1] << endl;
    cout << *p+1 << ":" << *(*p+1)<< endl;
    p++;       //该语句执行过后，也就是p=p+1;p跨过行a[0][]指向了行a[1][]
    cout << p << ":"<< *p<< endl;
    cout << **p<<endl << *(*p+1);
    // int *p[3];
    // for(int i=0;i<3;i++)
    // {
    //     p[i]=a[i];
    //     for (int j = 0; j < 4; ++j)
    //     {
    //         /* code */
    //     cout << *(p[i]+j)<<endl;
    //     cout <<*(*(p+i)+j)<<endl;
    //     cout <<(*(p+i))[j]<<endl;
    //     cout <<p[i][j]<<endl;
    //     }
    // }
    //这里int *p[3] 表示一个一维数组内存放着三个指针变量，分别是p[0]、p[1]、p[2]
    //所以要分别赋值，p[0]，p[1],p[2]分别指向二维数组的每一行。
   //  cout << &a[0][0] <<endl;
   //  cout << &a[0][1] <<endl;
   //  cout << &a[0][2] <<endl;
   //  cout << &a[0][3] <<endl;
   //  cout << &a[1][0] <<endl;
   //  cout << &a[2][0] <<endl;
   // return 0;
}
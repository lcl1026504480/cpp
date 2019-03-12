#include <stdio.h>

int fun(){
    static int count = 10; //在第一次进入这个函数的时候，变量a被初始化为10！并接着自减1，以后每次进入该函数，a
    return count--; //就不会被再次初始化了，仅进行自减1的操作；在static发明前，要达到同样的功能，则只能使用全局变量：

}

int count = 1;

int main(void)
{
     printf("global\t\tlocal static\n");
     for(; count <= 10; ++count)
               printf("%d\t\t%d\n", count, fun());
     return 0;
}
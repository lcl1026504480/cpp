#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[100];
    printf("please input a string:");
    gets(str);
    printf("结果是：%s", str);
    return 0;
}
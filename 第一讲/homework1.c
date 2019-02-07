#include "stdio.h"
int main()
{
int i;int sum=0;char a;
printf("请输入任意正整数和空格:");
while (scanf("%d",&i)==1)
{
sum+=i;
while ((a=getchar())==' ')
;
if (a=='\n')
break;
ungetc(a,stdin);

}
printf("结果是:%d\n",sum);
return 0;
}

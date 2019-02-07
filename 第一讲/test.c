#include"stdio.h"
int addArray(int a[],int n);
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(a)/sizeof(a[0]);
printf("结果�?%d\n",addArray(a,n));
return 0;
}
int addArray(int a[],int n)
{
int sum=0;
int i;
printf("%d\n",sizeof(a));
	for (i=0;i<n;i++)
	{
	sum+=a[i];
	}
return sum;
}

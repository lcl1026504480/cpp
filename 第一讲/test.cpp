#include"iostream"
int addArray(int a[],int n);
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int n=sizeof(a)/sizeof(a[0]);
std::cout << "结果是:" << addArray(a,n) << std::endl;
return 0;
}
int addArray(int a[],int n)
{
int sum=0;
int i;
std::cout << sizeof(a) << std::endl;
	for (i=0;i<n;i++)
	{
	sum+=a[i];
	}
return sum;
}

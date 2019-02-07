#include "stdio.h"
#include "string.h"
#include "math.h"
int main()
{
char str[1000];int l;int n=0;int m=0;int i;
gets(str);
l=strlen(str);
printf("%d\n",l);
for (i=l-1;i>=0;i--)
{
//printf("%s\n",str[i]);
if (str[i]!=' ')
{
printf("%d,%d\n",m,str[i]-'0');
n+=pow(10,m)*(str[i]-'0');
printf("%d\n",n);
m+=1;	
}	
else
m=0;	
}
printf("%d\n",n);
return 0;
}


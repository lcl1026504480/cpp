#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    node *next;
};
int main()
{
    node p;
    printf("%p\n%d",p.next,p.next==NULL);
}
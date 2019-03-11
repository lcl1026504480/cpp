#include <stdlib.h> /*含ma l l o c ( ) 的头文件*/
#include <stdio.h>
 //①定义链表数据结构
struct node
{
    int num;
    node *prev;
    node *next;
};
//函数声明
node creat(node *,node *);
void printp(node *);
void printn(node *,node *);
main( )
{
    node *head,*last;
    head=NULL;    //②建一个空表
    last=NULL;
    node s=creat(head,last);
    head=s.prev;
    last=s.next;
    /*创建单链表*/
    printf("链表长度为%d\n",s.num );
    printp(head);//正向打印
    printn(last,head);//反向打印
    node p0;
    p0.num=0;
    p0.next=head;
    p0.prev=NULL;
    head->prev=&p0;
    head=&p0;
    printf("修改后");
    printp(head);//正向打印
    printn(last,head);//反向打印
}

/******************************************/
 node creat( node *head,node *last)/*返回的是与节点相同类型的指针*/
{
    node*p1,*p2;
    int i=1;
//③利用malloc ( )函数向系统申请分配一个节点
    p1=p2=(node*)malloc(sizeof(node));/*新节点*/
    printf("请输入值，值小于等于0结束，值存放地址为：p1_ADDR= %d\n",p1);
    scanf("%d",&(p1->num));/*输入节点的值*/
    p1->next=NULL;/*将新节点的指针置为空*/
    p1->prev=NULL;
    while(p1->num>0)/*输入节点的数值大于0*/
    {
//④将新节点的指针成员赋值为空。若是空表，将新节点连接到表头；若是非空表，将新节点接到表尾;
        if(head==NULL)
            head=p1;/*空表，接入表头*/
        else
        {
            p2->next=p1;
            p1->prev=p2;;/*非空表，接到表尾*/
        }
        p2=p1;//更新位置，p1准备接受新数据
        p1=(node*)malloc(sizeof( node));/*下一个新节点*/
        i=i+1;
        printf("请输入值，值小于等于0结束，值存放地址为：p%d_ADDR= %d\n",i,p1);
        scanf("%d",&p1->num);/*输入节点的值*/
//⑤判断一下是否有后续节点要接入链表，若有转到3 )，否则结束;
    }
//==============原来程序更正部分：（多谢@daling_datou提醒）================================
    free(p1);  //申请到的没录入，所以释放掉
    p1=NULL;   //使指向空
    p2->next=NULL;
    last=p2;
    node x;
    x.num=i-1;
    x.next=last;
    x.prev=head;
    printf("链表输入结束（END）\n");
//==============================================
    return x;/*返回链表的头指针*/
}
/*******************************************/
void printp(node*head)/*出以head为头的链表各节点的值*/
{
    node *temp;
    temp=head;/*取得链表的头指针*/
    printf("\n\n\n链表存入的值为：\n");
    while(temp!=NULL)/*只要是非空表*/
    {
        printf("%6d\n",temp->num);/*输出链表节点的值*/
        temp=temp->next;/*跟踪链表增长*/
    }
    printf("链表打印结束!!");
}
void printn(node*last,node *head)/*出以head为头的链表各节点的值*/
{
    node *temp;
    temp=last;/*取得链表的头指针*/
    printf("\n\n\n链表存入的值为：\n");
    if (head!=NULL)
    {
        /* code */
        while(temp!=NULL)/*只要是非空表*/
        {
        printf("%6d\n",temp->num);/*输出链表节点的值*/
        temp=temp->prev;/*跟踪链表增长*/
        }
    }
    printf("链表打印结束!!");
}
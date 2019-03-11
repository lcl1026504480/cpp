#include <stdlib.h> /*含ma l l o c ( ) 的头文件*/

#include <stdio.h>

 //①定义链表数据结构

struct node

{

    int num;

    node *next;

};

//函数声明

struct node *creat(node *);

void print(node *);

main( )

{



    node *head;

    head=NULL;    //②建一个空表

    head=creat(head);/*创建单链表*/

    print(head);/*打印单链表*/
    node *p;
    node *p1;
    p=head;
    while(p->next!=NULL)
    {
        p1=p;
        p=p->next;
    }
    p1->next=NULL;
    printf("修改后\n");
    print(head);

}

/******************************************/

struct node*creat( node *head)/*返回的是与节点相同类型的指针*/

{

    struct node*p1,*p2;

    int i=1;

//③利用malloc ( )函数向系统申请分配一个节点

    p1=p2=(struct node*)malloc(sizeof(struct node));/*新节点*/

    printf("请输入值，值小于等于0结束，值存放地址为：p1_ADDR= %d\n",p1);

    scanf("%d",&(p1->num));/*输入节点的值*/

    p1->next=NULL;/*将新节点的指针置为空*/

    while(p1->num>0)/*输入节点的数值大于0*/

    {

//④将新节点的指针成员赋值为空。若是空表，将新节点连接到表头；若是非空表，将新节点接到表尾;

        if(head==NULL)

            head=p1;/*空表，接入表头*/

        else

            p2->next=p1;/*非空表，接到表尾*/

        p2=p1;



        p1=(struct node*)malloc(sizeof(struct node));/*下一个新节点*/

        i=i+1;

        printf("请输入值，值小于等于0结束，值存放地址为：p%d_ADDR= %d\n",i,p2);

        scanf("%d",&p1->num);/*输入节点的值*/

//⑤判断一下是否有后续节点要接入链表，若有转到3 )，否则结束;

    }

//==============原来程序更正部分：（多谢@daling_datou提醒）================================

    free(p1);  //申请到的没录入，所以释放掉

    p1=NULL;   //使指向空

    p2->next = NULL; //到表尾了，指向空

    printf("链表输入结束（END）\n");

//==============================================

    return head;/*返回链表的头指针*/

}

/*******************************************/

void print(struct node*head)/*出以head为头的链表各节点的值*/

{

    struct node *temp;

    temp=head;/*取得链表的头指针*/



    printf("\n\n\n链表存入的值为：\n");

    while(temp!=NULL)/*只要是非空表*/

    {

        printf("%6d\n",temp->num);/*输出链表节点的值*/

        temp=temp->next;/*跟踪链表增长*/

    }

    printf("链表打印结束!!");

}
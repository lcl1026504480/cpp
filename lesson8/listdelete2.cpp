#include <stdlib.h> /*��ma l l o c ( ) ��ͷ�ļ�*/

#include <stdio.h>

 //�ٶ����������ݽṹ

struct node

{

    int num;

    node *next;

};

//��������

struct node *creat(node *);

void print(node *);

main( )

{



    node *head;

    head=NULL;    //�ڽ�һ���ձ�

    head=creat(head);/*����������*/

    print(head);/*��ӡ������*/
    node *p;
    node *p1;
    p=head;
    while(p->next!=NULL)
    {
        p1=p;
        p=p->next;
    }
    p1->next=NULL;
    printf("�޸ĺ�\n");
    print(head);

}

/******************************************/

struct node*creat( node *head)/*���ص�����ڵ���ͬ���͵�ָ��*/

{

    struct node*p1,*p2;

    int i=1;

//������malloc ( )������ϵͳ�������һ���ڵ�

    p1=p2=(struct node*)malloc(sizeof(struct node));/*�½ڵ�*/

    printf("������ֵ��ֵС�ڵ���0������ֵ��ŵ�ַΪ��p1_ADDR= %d\n",p1);

    scanf("%d",&(p1->num));/*����ڵ��ֵ*/

    p1->next=NULL;/*���½ڵ��ָ����Ϊ��*/

    while(p1->num>0)/*����ڵ����ֵ����0*/

    {

//�ܽ��½ڵ��ָ���Ա��ֵΪ�ա����ǿձ����½ڵ����ӵ���ͷ�����Ƿǿձ����½ڵ�ӵ���β;

        if(head==NULL)

            head=p1;/*�ձ������ͷ*/

        else

            p2->next=p1;/*�ǿձ��ӵ���β*/

        p2=p1;



        p1=(struct node*)malloc(sizeof(struct node));/*��һ���½ڵ�*/

        i=i+1;

        printf("������ֵ��ֵС�ڵ���0������ֵ��ŵ�ַΪ��p%d_ADDR= %d\n",i,p2);

        scanf("%d",&p1->num);/*����ڵ��ֵ*/

//���ж�һ���Ƿ��к����ڵ�Ҫ������������ת��3 )���������;

    }

//==============ԭ������������֣�����л@daling_datou���ѣ�================================

    free(p1);  //���뵽��û¼�룬�����ͷŵ�

    p1=NULL;   //ʹָ���

    p2->next = NULL; //����β�ˣ�ָ���

    printf("�������������END��\n");

//==============================================

    return head;/*���������ͷָ��*/

}

/*******************************************/

void print(struct node*head)/*����headΪͷ��������ڵ��ֵ*/

{

    struct node *temp;

    temp=head;/*ȡ�������ͷָ��*/



    printf("\n\n\n��������ֵΪ��\n");

    while(temp!=NULL)/*ֻҪ�Ƿǿձ�*/

    {

        printf("%6d\n",temp->num);/*�������ڵ��ֵ*/

        temp=temp->next;/*������������*/

    }

    printf("�����ӡ����!!");

}
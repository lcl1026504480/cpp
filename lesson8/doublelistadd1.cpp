#include <stdlib.h> /*��ma l l o c ( ) ��ͷ�ļ�*/
#include <stdio.h>
 //�ٶ����������ݽṹ
struct node
{
    int num;
    node *prev;
    node *next;
};
//��������
node creat(node *,node *);
void printp(node *);
void printn(node *,node *);
main( )
{
    node *head,*last;
    head=NULL;    //�ڽ�һ���ձ�
    last=NULL;
    node s=creat(head,last);
    head=s.prev;
    last=s.next;
    /*����������*/
    printf("������Ϊ%d\n",s.num );
    printp(head);//�����ӡ
    printn(last,head);//�����ӡ
    node p0;
    p0.num=0;
    p0.next=head;
    p0.prev=NULL;
    head->prev=&p0;
    head=&p0;
    printf("�޸ĺ�");
    printp(head);//�����ӡ
    printn(last,head);//�����ӡ
}

/******************************************/
 node creat( node *head,node *last)/*���ص�����ڵ���ͬ���͵�ָ��*/
{
    node*p1,*p2;
    int i=1;
//������malloc ( )������ϵͳ�������һ���ڵ�
    p1=p2=(node*)malloc(sizeof(node));/*�½ڵ�*/
    printf("������ֵ��ֵС�ڵ���0������ֵ��ŵ�ַΪ��p1_ADDR= %d\n",p1);
    scanf("%d",&(p1->num));/*����ڵ��ֵ*/
    p1->next=NULL;/*���½ڵ��ָ����Ϊ��*/
    p1->prev=NULL;
    while(p1->num>0)/*����ڵ����ֵ����0*/
    {
//�ܽ��½ڵ��ָ���Ա��ֵΪ�ա����ǿձ����½ڵ����ӵ���ͷ�����Ƿǿձ����½ڵ�ӵ���β;
        if(head==NULL)
            head=p1;/*�ձ������ͷ*/
        else
        {
            p2->next=p1;
            p1->prev=p2;;/*�ǿձ��ӵ���β*/
        }
        p2=p1;//����λ�ã�p1׼������������
        p1=(node*)malloc(sizeof( node));/*��һ���½ڵ�*/
        i=i+1;
        printf("������ֵ��ֵС�ڵ���0������ֵ��ŵ�ַΪ��p%d_ADDR= %d\n",i,p1);
        scanf("%d",&p1->num);/*����ڵ��ֵ*/
//���ж�һ���Ƿ��к����ڵ�Ҫ������������ת��3 )���������;
    }
//==============ԭ������������֣�����л@daling_datou���ѣ�================================
    free(p1);  //���뵽��û¼�룬�����ͷŵ�
    p1=NULL;   //ʹָ���
    p2->next=NULL;
    last=p2;
    node x;
    x.num=i-1;
    x.next=last;
    x.prev=head;
    printf("�������������END��\n");
//==============================================
    return x;/*���������ͷָ��*/
}
/*******************************************/
void printp(node*head)/*����headΪͷ��������ڵ��ֵ*/
{
    node *temp;
    temp=head;/*ȡ�������ͷָ��*/
    printf("\n\n\n��������ֵΪ��\n");
    while(temp!=NULL)/*ֻҪ�Ƿǿձ�*/
    {
        printf("%6d\n",temp->num);/*�������ڵ��ֵ*/
        temp=temp->next;/*������������*/
    }
    printf("�����ӡ����!!");
}
void printn(node*last,node *head)/*����headΪͷ��������ڵ��ֵ*/
{
    node *temp;
    temp=last;/*ȡ�������ͷָ��*/
    printf("\n\n\n��������ֵΪ��\n");
    if (head!=NULL)
    {
        /* code */
        while(temp!=NULL)/*ֻҪ�Ƿǿձ�*/
        {
        printf("%6d\n",temp->num);/*�������ڵ��ֵ*/
        temp=temp->prev;/*������������*/
        }
    }
    printf("�����ӡ����!!");
}
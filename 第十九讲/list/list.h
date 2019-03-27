#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "node.h"
using namespace std;
template<typename T>
class List
{
private:
    Node<T> *head=NULL;
    Node<T> *tail=NULL;
    int size=0;
    Node<T> *current=NULL;
    int index=0;
    bool init=false;
public:
    int getsize()
    {
        return size;
    }
    List()
    {
        head=new Node<T>;
        current=head;
        tail=head;
        head->position=index;
    }
    T& operator[](int n)
    {
        if (n>=size)
        {
            cerr<<"索引超出链表范围";
        }
        else
            {
              Node<T>* temp=head;
              for (unsigned int i = 0; i < n; ++i)
              {
                  temp=temp->next;
              }
              return temp->data;
          }
    }
    ~List()
    {
        Node<T> *temp=head;
        for (int i = 0; i < size; ++i)
        {
            /* code */
            delete temp;
            temp=temp->next;
        }
    }
    append(T a)
    {
        if (init)
        {
            current=new Node<T>;
            current->data=a;
            index++;
            current->position=index;
            size++;
            current->prev=tail;
            tail->next=current;
            tail=current;
        }
        else
        {
            head->data=a;
            index++;
            tail=head;
            size++;
            init=true;
        }
    }
    happend(T a)
    {
        Node<T>* temp=head;
        if (init)
        {
            current=new Node<T>;
            current->data=a;
            temp=head;
            for (int i = 0; i < size; ++i)
            {
                temp->position++;
                temp=temp->next;
            }
            index=0;
            current->position=index;
            size++;
            current->next=head;
            head->prev=current;
            head=current;
        }
        else
        {
            head->data=a;
            index++;
            size++;
            init=true;
        }
    }
    insert( int n,T a)
    {
        Node<T>* temp=head;
        if (n<0 || n>size)
        {
            cerr <<"索引超出链表范围";
        }
        else
        {
            if (n==0)
                happend(a);
            else
                {
                    if (n==size)
                        append(a);
                    else
                    {
                        cout<<"在"<<n<<"位置插入元素"<<a<<"\n";
                        for ( int i = 0; i < n; ++i)
                        {
                            temp=temp->next;
                        }
                        cout<<"原来此位置的元素为"<<temp->data<<"原来的地址为"<<temp<<"\n\n";
                        current=new Node<T>;
                        cout<<"新地址为"<<current<<endl;
                        current->position=n;
                        current->data=a;
                        current->prev=temp->prev;
                        current->next=temp;
                        temp->prev->next=current;
                        temp->prev=current;
                        for (int i = n; i < size; ++i)
                        {
                            temp->position++;
                            temp=temp->next;
                        }
                        size++;
                        index=n;
                    }
                }
        }
    }
    remove(int n)
    {
        Node<T>* temp=head;
        if (n<0 || n>=size)
        {
            cerr<<"索引超出链表范围";
        }
        else
        {
            size--;
            index=0;
            if (n==0)
            {
                head=head->next;
                head->prev=NULL;
                temp=head;
                for (int i = 0; i < size; ++i)
                {
                    /* code */
                    temp->position--;
                    temp=temp->next;
                }
            }
            else
            {
                if (n==size-1)
                {
                    tail=tail->prev;
                    tail->next-NULL;
                }
                else
                {
                    for ( int i = 0; i < n; ++i)
                    {
                        temp=temp->next;
                    }
                    temp->prev->next=temp->next;
                    temp->next->prev=temp->prev;
                    for (int i = n; i < size; ++i)
                    {
                        temp->position--;
                        temp=temp->next;
                    }
                }
                current=head;
            }
        }
    }
    List& operator=(List &rhs)
    {
        size=rhs.size;
        index=rhs.index;
        init=rhs.init;
        Node<T>*prev,*temp;
        head=new Node<T>;
        temp=rhs.head;
        head->position=temp->position;
        head->data=temp->data;
        prev=head;
        temp=temp->next;
        for (int i = 1; i < size; ++i)
        {
            current=new Node<T>;
            prev->next=current;
            current->prev=prev;
            current->position=temp->position;
            current->data=temp->data;
            prev=current;
            temp=temp->next;
        }
        tail=current;
        return rhs;
    }
    List(List &rhs)
    {
        *this=rhs;
    }
    print()
    {
        Node<T>*temp=head;
        for (int i = 0; i < size; ++i)
        {
            cout <<"第"<<i<<"个元素是："<<temp->data<<",地址是"<< temp<<endl;
            temp=temp->next;
        }
        cout <<endl;
    }
    rprint()
    {
        Node<T>*temp=tail;
        for (int i = size-1; i >=0; --i)
        {
            cout <<"第"<<i<<"个元素是："<<temp->data<<",地址是"<<temp<<endl;
            temp=temp->prev;
        }
        cout <<endl;
    }
};
#endif
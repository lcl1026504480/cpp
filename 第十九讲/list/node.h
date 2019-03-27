#ifndef NODE_H
#define NODE_H
template<typename T>
class Node
{
public:
    T data;
    int position;
    Node* prev=NULL;
    Node* next=NULL;
};
#endif



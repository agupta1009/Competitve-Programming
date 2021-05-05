#include<iostream>
using namespace std;
template<typename T>
class node{
    public:
     node<T> *next;
    T data;
    node(T data)
    {
        this->data=data;
        this->next=NULL;
    }
};
template<typename t>
class Stack{
node<t>*head;
int count;
public:
Stack()
{
    head=NULL;
    count=0;
}
void push(t data)                 //////////////HERE WE ARE INSERTING BEFORE HEAD AND SHIFTING HEAD SO THAT DELETEING AKES O(1) TIME //////////
{
    node<t>*temp=new node<t>(data);
    if(head==NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    count++;
}
t pop()
{
    if(head==NULL)
    return 0;
    node<t> *temp=head;
    head=head->next;
    temp->next=NULL;
    t val=temp->data;
    delete temp;
    count--;
    return val;
}
bool isempty()
{
    return head==NULL;
}
int size()
{
    return count;
}
t top()
{
    if(head==NULL)
    return 0;
    return head->data;
}
};
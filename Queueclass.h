#include<iostream>
template<typename t>
class Node{
    public:
    t data;
    Node<t>* next;
    Node(t data)
    {
        this->data=data;
        this->next=NULL;
    }
};
template<typename t>
class Queue{
    Node<t>* head;
    Node<t>* last;
    int size;
    public:
    Queue()
    {
        this->head=NULL;
        this->last=NULL;
        size=0;
    }
    void enqueue(t data)
    {
        Node<t>* temp=new Node<t>(data);
        if(head==NULL)
        {head=temp;
        last=temp;
        }
        else
        {
            last->next=temp;
            last=last->next;
        }
        size++;
    }
    t dequeue()
    {
        Node<t>* temp=head;
        head=head->next;
        temp->next=NULL;
        t data=temp->data;
        delete temp;
        size--;
        return data;
    }
    t front()
    {
        if(head==NULL)
        return 0;
        return head->data;
    }
    int Size()
    {
        return size;
    }
    bool isempty()
    {
        return head==NULL;
    }
};
#include<iostream>
using namespace std;
struct Node
{
    long long num;
    Node *Next;
};
void print_linked_list(Node *head)
{
    if(head==NULL)
    return;
    cout<<head->num<<" ";
    return print_linked_list(head->Next);
}
Node* merge_Node(Node* head,Node* head2,Node* head3,long long mid)
{
    Node* p1=head;
    Node* p2=head2;
    Node* p3=head3;
    while(p2!=NULL)
    {
        Node* sample=p2->Next;
        p2->Next=p1->Next;
        p1->Next=p2;
        p1=p1->Next->Next;
        p2=sample;
    }

    Node* sample=new Node();
    sample->num=mid;
    sample->Next=p1->Next;
    p1->Next=sample;
    p1=p1->Next->Next;

while(p3!=NULL)
    {
        Node* sample1=p3->Next;
        p3->Next=p1->Next;
        p1->Next=p3;
        p1=p1->Next->Next;
        p3=sample1;
    }
    
return head;
}

Node* insertion(Node *head,long long num)
{
    Node *p=new Node();
    Node *sample=head;
    p->Next=NULL;
    p->num=num;
    if(head==NULL)
    {
    head=p;
    return head;    
    }
    else
    {
        while(sample->Next!=NULL)
        {
            sample=sample->Next;
        }
        sample->Next=p;
    }   
    return head;
}
Node* create_Node(Node* head,Node* head1)
{
    Node *p=new Node();
    Node* sample=head;
    while(sample->Next && sample->Next->Next )
    {
    head1=insertion(head1,sample->num+sample->Next->Next->num);
    sample=sample->Next->Next;  
    }
    return head1;
}

int main()
{
    long long n;
    cin>>n;
    n=n*2;
    long long mid;
    Node* head=NULL;
    Node* head2=NULL;
    Node* head3=NULL;
    for(long long i=1;i<=n;i++)
    {
        long long m=0;
        cin>>m;
        head=insertion(head,m);
    }
    head2=create_Node(head,head2);
    head3=create_Node(head->Next,head3);
    print_linked_list(head2);
    cout<<endl;
    print_linked_list(head3);
    cout<<endl;
    Node* sample5=head;
    while(sample5->Next!=NULL)
    {
    sample5=sample5->Next;
    }
    mid=head->num+sample5->num;
    cout<<mid<<endl;
    head=merge_Node(head,head2,head3,mid);
    print_linked_list(head);
    cout<<endl<<2*n-1;
}



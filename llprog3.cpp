#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *next;
};
class linked_list
{
private:
	node *head,*last;
public:
	linked_list()
	{
		head=NULL;
		last=NULL;
	}
	void addnode(int n)
	{
		node *t=new node();
		t->data=n;
		t->next=NULL;
		if(head==NULL)
		{
			head=t;
			last=t;
		}
		else
		{
			last->next=t;
			last=last->next;
		}
	}
	void display()
	{
		node *ptr=head;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
	}
	void insert_begin(int n)
	{
		node *t=new node;
		t->data=n;
		t->next=head;
		head=t;
	}
	void insert_after(int x,int y)
	{
		node *t=new node;
		t->data=x;
		node *ptr=head;
		while(ptr->data!=y)
		{
			ptr=ptr->next;
		}
		t->next=ptr->next;
		ptr->next=t;
	}
	void delete_last()
	{
		node *ptr=head;
		while(ptr->next!=last)
		{
			ptr=ptr->next;
		}
		ptr->next=NULL;
		free(last);
		last=ptr;
	}
	void delete_first()
	{
		node *ptr=head->next;
		head->next=NULL;
		head=NULL;
		free(head);
		head=ptr;
	}
};
int main()
{
	linked_list ll;
	ll.addnode(10);
	ll.addnode(20);
	ll.addnode(30);
	ll.addnode(40);
	ll.addnode(50);
	ll.addnode(60);
	ll.insert_begin(5);
	ll.insert_after(35,30);
	ll.delete_last();
	ll.delete_first();
	ll.display();
}
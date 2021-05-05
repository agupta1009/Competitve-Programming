#include<bits/stdc++.h>
using namespace std;
struct node{
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
		node *temp=new node;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			last=temp;
		}
		else
		{
			last->next=temp;
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
};

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
	void insert_begin(int n)
	{
		node *i=new node;
		i->data=n;
		i->next=head;
		head=i;
	}
	void insert_after(int x,int y)
	{
		node *ptr=head;
		while(ptr->data!=30)
		{
			ptr=ptr->next;
		}
		node *i=new node;
		i->data=x;
		i->next=ptr->next;
		ptr->next=i;
	}
	int search(int n)
	{
		int count=0;
		node *ptr=head;
		while(ptr->data!=n)
		{
			ptr=ptr->next;
			count++;
		}
		return count+1;
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
	ll.display();
	cout<<"position of the given key element is "<<ll.search(50);
}
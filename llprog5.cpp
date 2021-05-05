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
	int count(int n)
	{
		node *ptr=head;
		int c=0;
		while(ptr!=NULL)
		{
			if(ptr->data==n)
			{
				c++;
			}
			ptr=ptr->next;
		}
		return c;
	}
};
int main()
{
	linked_list ll;
	ll.addnode(1);
	ll.addnode(2);
	ll.addnode(1);
	ll.addnode(2);
	ll.addnode(1);
	ll.addnode(3);
	ll.addnode(1);
	ll.display();
	cout<<"enter thr element u want to know about occurunces"<<endl;
	int n;
	cin>>n;
	cout<<n<<" occurs "<<ll.count(n)<<" no of times in this linked list";
}
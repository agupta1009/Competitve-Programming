#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	struct node *head,*t,*t1;
	cout<<"enter the data"<<endl;
	head=(struct node *) malloc(sizeof(struct node));
	cin>>head->data;
	head->prev=NULL;
	head->next=NULL;
	t1=head;
	for(int i=1;i<3;i++)
	{	
		cout<<"enter the data"<<endl;
		t=(struct node *) malloc(sizeof(struct node));
		cin>>t->data;
		t->prev=NULL;
		t->next=NULL;
		t1->next=t;
		t->prev=t1;
		t1=t1->next;
		
	}
	
	struct node *ptr=t1;
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->prev;
	}

}
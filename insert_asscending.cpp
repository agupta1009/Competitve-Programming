#include <bits/stdc++.h>
using namespace std;
void insert(int a[],int n,int pos)
{
	int elem;
	cout<<"Enter the new element\n";
	cin>>elem;
	for(int i=n; i>=pos-1; i--)
	{
		a[i+1] = a[i];
	}
	a [pos-1]= elem;
	for(int i=0; i<=n; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void deletion(int a[],int n,int pos)
{
	for(int i=pos-1; i<n-1; i++)
	{
		a[i] = a[i+1];
	}
	n=n-1;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}

}
int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elemnts of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int pos;
	cout<<"enter the position to be insert and deleted"<<endl;
	cin>>pos;
	insert(arr,n,pos);
	deletion(arr,n,pos);
}
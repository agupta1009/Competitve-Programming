#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int b[],int n, int m)
{
	int c=n+m;
	for(int i=n,j=0;i<c,j<m;i++,j++)
	{
		a[i]=b[j];
	}
	for(int i=0;i<c;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int n,m;
	cout<<"enter the size of array1 and array 2"<<endl;
	cin>>n>>m;
	int a[n],b[m];
	cout<<"enter the elements of array 1"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the elements of array 2"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	merge(a,b,n,m);
}
#include<bits/stdc++.h>
using namespace std;
void linear(int a[],int n,int k)
{
	int pos=-1;
	for(int i=0; i<n; i++)
	{
		if (k==a[i])
		{
			pos=i;
		}
	}
	if(pos==-1)
	{
		cout<<"The element doesn't exist";
	}
	else
	{
		cout<<"Element is present at position "<<pos+1;
	}
}
void bin(int a[],int n,int k)
{
	sort(a, a+n);
	int beg=0, end=n-1;
	int mid=(beg+end)/2;
	while(beg<=end)
	{
		if (k==a[mid])
		{
			cout<<"The element is present at position "<<mid+1;
			break;
		}
		else if (k<a[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(beg>end)
	{
		cout<<"The element doesn't exist";
	}
}
int main()
{
	int n, pos=-1, k;
	cout<<"Enter the size of array\n";
	cin>>n;

	int a[n]={0};

	cout<<"Enter the elements of the array\n";

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		
	}
	cout<<"Enter the element to be searched\n";
	cin>>k;
	cout<<"element searched after linear search"<<endl;
	linear(a,n,k);
	cout<<endl;
	cout<<"element searched after binary search"<<endl;
	bin(a,n,k);
	return 0;
}



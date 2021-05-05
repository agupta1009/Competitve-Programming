#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cout<<"enter the number of elements in an array"<<endl;
	cin>>n;

	int a[n]={0};
	int count=0;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element u want to know about its occurence"<<endl;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(k==a[i])
		{
			count++;
		}
	}
		if(count!=0)
		{
		cout<<k<<" occurs "<<count<<" no. of times"<<endl;
		}

	return 0;
}


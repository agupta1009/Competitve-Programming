#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number of elements in an array"<<endl;
	cin>>n;

	int a[n]={0};
	int count=0;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]!=a[j])
			{
				count++;
			}
		}
		if(count==n-1)
		{
		cout<<a[i]<<" is a unique element at position "<<i<<endl;
		}
 }
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number of elements in an array"<<endl;
	cin>>n;

	int a[n]={0};
	int count=0;
	int pos=0;
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				if(count!=0)
				{
					pos=j;
					for(int k=pos;k<n-1;k++)
					{
						a[k]=a[k+1];
						n=n-1;
					}
				}
			}
		}
		
 	}
 	for(int i=0; i<n; i++)
	{
		cout<<endl<<a[i];
	}
	return 0;
}


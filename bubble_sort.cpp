#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements in an array"<<endl;
	cin>>n;

	int a[n]={0};

	cout<<"Enter the elements of the array\n";

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"sorted array implementing bubble sort:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		cout<<a[i];
	}
	return 0;
}

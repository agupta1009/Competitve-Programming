#include<iostream>
using namespace std;

int main()
{
	int n, pos, elem;
	cout<<"Enter the size of array\n";
	cin>>n;
	
	int a[n+1]={0};
	
	cout<<"Enter the elements of the array\n";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	cout<<"Enter Position of new element\n";
	cin>>pos;
	
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

	return 0;
}



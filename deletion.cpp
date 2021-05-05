#include<iostream>
using namespace std;

int main()
{
	int n, pos, elem;
	cout<<"Enter the size of array\n";
	cin>>n;

	int a[n]={0};

	cout<<"Enter the elements of the array\n";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	cout<<"Enter Position of element to be deleted\n";
	cin>>pos;

	for(int i=pos-1; i<n-1; i++)
	{
		a[i] = a[i+1];
	}
	n=n-1;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}

	return 0;
}



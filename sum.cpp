#include<iostream>
using namespace std;

int main()
{
	int n, pos, elem;
	cout<<"Enter the size of array\n";
	cin>>n;

	int a[n]={0}, sum=0;

	cout<<"Enter the elements of the array\n";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		sum+=a[i];
	}

	cout<<sum;

	return 0;
}



#include<iostream> 
using namespace std;
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
	return 0;
}



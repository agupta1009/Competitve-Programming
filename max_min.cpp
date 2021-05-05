#include<iostream>
using namespace std;

int main()
{
	int n, pos, elem;
	cout<<"Enter the size of array\n";
	cin>>n;

	int a[n]={0}, sum=0;

	cout<<"Enter the elements of the array\n";
	cin>>a[0];
	int max=a[0], min=a[0], pmax=0, pmin=0;
	
	for(int i=1; i<n; i++)
	{
		cin>>a[i];
		if(max<a[i])
		{
			max=a[i];
			pmax=i;
		}
		else if(min>a[i])
		{
			min=a[i];
			pmin=i;
		}
	}

	cout<<"Max element is "<<max<<" at position "<<pmax+1<<endl;
	cout<<"Min element is "<<min<<" at position "<<pmin+1;

	return 0;
}



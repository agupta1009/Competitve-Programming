#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cout<<"Enter the size of array\n";
	cin>>n;
	int a[n]={0};
	cout<<"Enter the elements of the array\n";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a, a+n);
	cout<<"Enter the element to be searched\n";
	cin>>k;
	int beg=0, end=n-1;
	int mid=(beg+end)/2;
	while(beg<=end)
	{
		if (k==a[mid])
		{
			cout<<"The element is present";
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
	return 0;
}



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
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		int count=1;
		
		for(int j=i+1;j<n;j++)
		{

			if(a[i]!=a[j])
			{
				break;
				
			}
			else{
				count++;
			}
		}
		cout<<a[i]<<"\t occurs "<<count<<" no. of times"<<endl;
		i=i+count-1;
	}
	
 
	return 0;
}


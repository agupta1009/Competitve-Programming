#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int size;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		next_permutation(arr,arr+size);
        for(int i=0;i<size;i++)
		{
			cout<<arr[i];
		}
	}
	return 0;
}
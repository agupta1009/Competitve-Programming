#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int kaden(int *arr,int n)
{
    int max_sum=INT_MIN;
    int current_ending_max=0;
    // int sum=0;
    for(int i=0;i<n;i++)
    {
        current_ending_max+=arr[i];
        max_sum=max(max_sum,current_ending_max);
        if(current_ending_max<0)
        {
            current_ending_max=0;
        }

    }
    return max_sum;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    int max_sum=kaden(arr,n);
    cout<<max_sum;
}
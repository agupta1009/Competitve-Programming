#include<bits/stdc++.h>
using namespace std;
int longest_subset(int *arr,int n)
{
    map<int ,int>m;
    int sum=0;
    int max_length=0;
    // key will be sum and value will be index
    int index=0;
    for(int i=0;i<n;i++)
    {
    
       if(arr[0]==0)
            max_length=1;
        sum+=arr[i];
        if(m.count(sum)!=0)
        {
            max_length=max(max_length,(i-m[sum]));
        }
        else
        {
            m[sum]=i;
        }
       
    }
    return max_length;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<longest_subset(arr,n);
}
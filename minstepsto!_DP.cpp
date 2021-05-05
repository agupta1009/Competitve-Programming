// min steps to 1
#include<bits/stdc++.h>
using namespace std;
int minsteps_dp(int n,int*arr)
{
    if(n<=1)
    return arr[n];
    if(arr[n]!=INT_MAX)
    return arr[n];
    // int ans=INT_MAX;
    // ans=min(ans,minsteps_dp(n-1,arr));
    // if(n%2==0)
    // ans=min(ans,minsteps_dp(n/2,arr));
    // if(n%3==0)
    // ans=min(ans,minsteps_dp(n/3,arr));
    // arr[n]=1+ans;           //here 1+ans as we already reduce one step so to overcome that like we have n but we are taking case for n-1,n/2,n/3
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    x=minsteps_dp(n-1,arr);
    if(n%2==0)y=minsteps_dp(n/2,arr);
    if(n%3==0)z=minsteps_dp(n/3,arr);
    arr[n]=1+min(x,min(y,z));
    return arr[n];
}
int minsteps(int n)
{
    int *arr=new int[n+1];
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=n;i++)
    arr[i]=INT_MAX;
    return minsteps_dp(n,arr);
}
int main()
{
    int n;
    cin>>n;
    cout<<minsteps(n);
}
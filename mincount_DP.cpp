#include<bits/stdc++.h>
using namespace std;
int mincount_dp(int n,int *arr)
{
    if(n<0)
    return arr[0];
    if(n==1||n==0)
    return arr[n];
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=(int)(sqrt(i));j++)
        {
            // if(j*j>i)
            // break;
            arr[i]=min(arr[i],1+arr[i-j*j]);}
    }
        return arr[n];
}
int mincount(int n)
{
    int *arr=new int[n+1];
    for(int i=0;i<=n;i++)
    arr[i]=i;
    arr[0]=0;
    arr[1]=1;
    return mincount_dp(n,arr);
}
int main()
{
    int n;
    cin>>n;
    cout<<mincount(n);
}
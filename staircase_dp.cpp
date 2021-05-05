#include<bits/stdc++.h>
using namespace std;
int staircase_dp(int n,int* arr)
{
    if(n<=2)
    return arr[n];
    if(arr[n]!=-1)return arr[n];
    for(int i=3;i<=n;i++)
    arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    return arr[n];
    
}
int staircase(int n)
{
    int *arr=new int[n+1];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++)
    arr[i]=-1;
    return staircase_dp(n,arr);
}
int main()
{
    int n;
    cin>>n;
    cout<<staircase(n);
}
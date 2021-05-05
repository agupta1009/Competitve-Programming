#include<bits/stdc++.h>
using namespace std;
int running_median(int arr[],int n)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    pq.push(arr[i]);
    int ans=0;
    if(n%2!=0)
    {
        n=(n+1)/2;
        while(n--)
        {
            ans=pq.top();
            pq.pop();
        }
    }
    else
    {
       n=(n/2)+1;
       int a=0,b=0;
       for(int i=1;i<=n;i++)
       {
           if(i==n-1)
           {
               a=pq.top();
               pq.pop();
               
           }
           else if(i==n)
           {
               b=pq.top();
               pq.pop();
               
           }
           else
           {
               pq.pop();
           }
           
       }
       ans=(a+b)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<running_median(a,i+1)<<endl;
    }
}
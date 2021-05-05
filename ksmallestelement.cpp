#include<bits/stdc++.h>
using namespace std;
vector<int> ksmallest(int* arr,int n,int k)
{
    priority_queue<int>pq;
    int i=0;
    for(i=0;i<k;i++)
    pq.push(arr[i]);
    for(;i<n;i++)
    {
        if(arr[i]<pq.top())
        {
            pq.push(arr[i]);
            pq.pop();
        }
    }
    vector<int>v;
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    // reverse(v.begin(),v.end());
    return v;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    vector<int>v=ksmallest(arr,n,k);
    for(auto x:v)
    cout<<x<<" ";
}
#include<bits/stdc++.h>
using namespace std;
vector<int> stockspan(int *arr,int n)
{
    stack<pair<int,int>>s;
    vector<int>v;
    int i=0;
    while(n--)
    {
        if(s.empty())
        {
            v.push_back(1);
            s.push(make_pair(arr[i],1));
        }
       else if(arr[i]>s.top().first)
        {
            int ans=0;
            while((!s.empty())&&arr[i]>s.top().first){
            ans+=s.top().second;
            s.pop();}
            s.push(make_pair(arr[i],ans+1));
            v.push_back(ans+1);
        }
       else  if(arr[i]<=s.top().first)
        {
            s.push(make_pair(arr[i],1));
            v.push_back(1);
        }
        i++;
    }
    return v;
}
int main()
{
    int n;
    cin>>n;
    int k=n;
    int *arr=new int[n];
    int i=0;
    while(n--)
    {
        cin>>arr[i];
        i++;
    }
    vector<int>v=stockspan(arr,k);
    // for(auto x:v)
    // cout<<x<<" ";
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
}
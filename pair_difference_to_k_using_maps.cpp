#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    map<int,int>m;
    for(auto x:v)
    {
        if(k!=0){
        if(m.count(x-k)!=0)
        {
            for(int i=0;i<m[x-k];i++)
            cout<<x<<" "<<x-k<<endl;
        }
        if(m.count(x+k)!=0)
        {
            for(int i=0;i<m[x+k];i++)
            cout<<x<<" "<<x+k<<endl;
        }}
        else{
            for(int i=0;i<m[x-k];i++)
            cout<<x<<" "<<x-k<<endl;
        }
        m[x]++;
    }
}
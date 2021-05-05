#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        v.reserve(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        while(1){
            int count=0;
        for(int i=k;i<n;i++)
        {
            if(v[i-k]>v[i])
            {
                swap(v[i-k],v[i]);
                count++;
            }
        }
        if(count==0)
        {
            vector<int>m;
            m=v;
            sort(m.begin(),m.end());
            if(v==m)
            cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
            break;
        }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int z=0;z<test;z++)
    {
        int n,s;
        cin>>n>>s;
        int amount=100-s;
        if(amount<=0)
        continue;
        vector<int>v;
        v.reserve(n);
        vector<int>key;
        key.reserve(n);
        for(int i=0;i<n;i++)
        {
            int price;
            cin>>price;
            v.push_back(price);
        }
         for(int i=0;i<n;i++)
        {
            int l;
            cin>>l;
            key.push_back(l);
           
        }
        int min1=100;
        int min2=100;
        for(int i=0;i<n;i++)
        {
            if(key[i]==0)
            {
                min1=min(min1,v[i]);
            }
            else
            {
                min2=min(min2,v[i]);
            }   
        }
        if(min1+min2<=100-s)
        cout<<"yes"<<endl;
        else
        {
            cout<<"no"<<endl;
        }
        
    }
}
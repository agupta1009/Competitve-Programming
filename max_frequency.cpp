#include<iostream>
#include<map>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
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
        m[x]++;
    }
    int max=INT_MIN;
    int output;
    for(auto it=m.begin();it!=m.end();it++)
    {
       if(max<it->second)
       {
           max=it->second;
           output=it->first;
       }

    }
    cout<<output;
}
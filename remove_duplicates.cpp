#include<iostream>
#include<map>
#include<vector>
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
    vector<int>output;
    map<int,int>m;
    for(auto x:v)
    {
        if(m.count(x)!=0)
        continue;
        else
        {   
            m[x]++;
            output.push_back(x);
        }

    }
    for(auto x:output)
    cout<<x<<" ";
}
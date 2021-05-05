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
    for(auto i:m)
    {
        if(m.count(-i.first)!=0)
        {
            for(int j=0;j<max(m[i.first],m[-i.first]);j++)
            cout<<i.first<<" "<<-i.first<<endl;
            m[i.first]=0;
            m[-i.first]=0;
        }
    }
}
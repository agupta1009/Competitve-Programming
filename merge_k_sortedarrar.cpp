#include<bits/stdc++.h>
using namespace std;
vector<int> mergeksorted(vector<vector<int>>v)
{
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>output;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        pq.push(v[i][j]);
    }
    while(!pq.empty()){
    output.push_back(pq.top());
    pq.pop();}
    return output;

}
int main()
{
    int k;
    cin>>k;
    vector<vector<int>>v(k);
    for(int i=0;i<k;i++)
    {
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    vector<int>output=mergeksorted(v);
    for(auto x:output)
    cout<<x<<" ";
}
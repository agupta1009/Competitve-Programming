#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int x;
    while(1)
    {
        cin>>x;
        if(x==42)
        break;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}

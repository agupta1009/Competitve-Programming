#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // map<char,int>m;
    // for(int i=0;i<s.size();i++)
    // m[s[i]]++;
    // for(auto x:m)
    // {
    //     if(x.second>=1)
    //     cout<<x.first;
    // }
    //                                      BEST APPROACH
    map<char,int>m;
    string output="";
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
        if(m[s[i]]==1)
        output+=s[i];
    }
    cout<<output;
}
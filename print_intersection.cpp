#include<iostream>
#include<map>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void intersect(vector<int>v1,vector<int>v2)
{
    map<int,int>m;
    for(auto x:v1)
    m[x]++;
    for(auto x:v2)
    m[x]++;
    for(auto i:m)
    {
        if(i.second>2)
        cout<<i.first<<" ";
    }
    // map<int,int>m1;
    // map<int,int>m2;
    // for(int i=0;i<size1;i++)
    // m1[input1[i]]++;
    // for(int i=0;i<size2;i++)
    // m2[input2[i]]++;                                           CORRECT ONE
    // for(auto i:m1)
    // {
    //     if(m2.count(i.first)!=0)
    //     {
    //         for(int j=0;j<min(m1[i.first],m2[i.first]);j++)
	// 		 cout<<i.first<<endl;        
    //         }
       
    // }
}
int main()
{
    int n;
    cin>>n;
    vector<int>v1;
    while(n--)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int k;
    cin>>k;
    vector<int> v2;
    while(k--)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    intersect(v1,v2);
}
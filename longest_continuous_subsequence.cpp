#include<bits/stdc++.h>
using namespace std;
vector<int> longest_subseq(int *arr,int n)
{
    map<int,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]=0;
   vector<int>v;
   for(int i=0;i<n;i++)
   {
       if(m.count(arr[i]-1)==0)
       {
           vector<int>temp;
           temp.push_back(arr[i]);
           int j=1;
           while(m.count(arr[i]+j))
           {
               temp.push_back(arr[i]+j);
                j++;
           }
           if(temp.size()>v.size())
       v=temp;
       }
       
   }
   return v;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int>v=longest_subseq(arr,n);
    for(auto x:v)
    cout<<x<<endl;
}
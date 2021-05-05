#include<bits/stdc++.h>
using namespace std;
// #define mod %7;
int main(){
    // write your code
   map<int,char>m;
   for(int i=0;i<26;i++)
   {
       int t;
       cin>>t;
       m[t]=(char)(97+i);
   }
   int cost;
   cin>>cost;
   if(m.begin()->first>cost)
    cout<<"0";
   else if(m.count(cost)!=0)
   cout<<m[cost];
   else
   {
        cout<<"no";   
   }
   
   

}
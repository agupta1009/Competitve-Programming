#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int m=0;m<test;m++)
    {
        int g;
        cin>>g;
        for(int z=0;z<g;z++)
        {
            int i,n,q;
            cin>>i>>n>>q;
            vector<int>v(n,i);
            int x=n;
            for(int j=0;j<n,x>0;j++)
            {
               if(x%2!=1)
               x--;
               else
               {
                   if(v[j]==1)
                   v[j]=2;
                   else
                   {
                       v[j]=1;
                   }
                   x--;
               }
              
            }
            int n1=count(v.begin(),v.end(),q);
            cout<<n1<<endl;
        }
    }
}
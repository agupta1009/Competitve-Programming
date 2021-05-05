#include<bits/stdc++.h>
using namespace std;
double gp(int k)
{
    if(k==0)
    return 1;
    else
    {
        int ans=1/pow(2,k);  
        return ans+1/pow(2,k-1);     
    }
    
}
int main()
{
    int k;
    cin>>k;
    cout<<gp(k);
}
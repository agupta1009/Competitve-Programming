#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int sum=0;
        while(x>0)
        {
            int y=x%10;
            x=x/10;
            sum=sum*10+y;
        }
        cout<<sum<<endl;
    }
}
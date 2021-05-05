#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s="";
        float time=0;
        while(n--)
        {
            string result;
            cin>>result;
            s+=result;
        }
        cout<<s<<endl;
            for(int i=0;i<s.size();i++)
            {
                if(i==0)
                {
                    time+=0.2;
                }
                else if(s[i]-s[i-1]<=2)
                {
                    time+=0.4;
                }
                else
                {
                    time+=0.2;
                }
            }
        cout<<time*10<<endl;
    }
}
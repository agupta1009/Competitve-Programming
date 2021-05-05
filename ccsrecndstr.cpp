#include<bits/stdc++.h>
using namespace std;
list<char>  left(list<char>v)
{
   v.push_back(v.front());
   v.pop_front();
   return v;

}
list<char> right(list<char>v)
{
 v.push_front(v.back());
    v.pop_back();
    return v;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {

       string s;
       cin>>s;
       list<char>v;
        for(int i=0;i<s.size();i++)
        {
            v.push_back(s[i]);
        }
        if(left(v)==right(v))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}
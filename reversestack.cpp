#include<bits/stdc++.h>
using namespace std;
void helper(stack<int>&s1,stack<int>&s2)
{
    if(s1.size()==1)
    {
        s2.push(s1.top());
        s1.pop();
        return ;
    }
    int x=s1.top();
    s1.pop();
    helper(s1,s2);
    s1.push(x);
}
void reverse(stack<int>&s1,stack<int>&s2)
{
    while(!s1.empty())
    {
        helper(s1,s2);
        
    }
    while (!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    
}
int main()
{
    stack<int>s1;
    stack<int>s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    reverse(s1,s2);
    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
}
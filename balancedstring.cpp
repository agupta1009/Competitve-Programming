#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stack<char>s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='['||str[i]=='{'||str[i]=='(')
        {
            s.push(str[i]);
        }
        if(str[i]==']'||str[i]=='}'||str[i]==')')
        {
            if(s.empty())
                break;
            char c=s.top();
            if(c=='[')
            {
                if(str[i]==']')
                    s.pop();
                else
                    break;
            }
           else   if(c=='{')
            {
                if(str[i]=='}')
                    s.pop();
                else
                    break;
            }
           else  if(c=='(')
            {
                if(str[i]==')')
                    s.pop();
                else
                    break;
            }
        }
    }
  
 return s.empty();
    
}
#include<bits/stdc++.h>
using namespace std ;
bool checkredundant(char *str)
{
    stack<char>s;
    int i=0;
    bool flag=false;
    while(str[i]!='\0')
    {
        
        if(str[i]!=')')
        {
            s.push(str[i]);
        }
        else
        {   
            int count=0;
            while(s.top()!='(')
            {
                s.pop();
                count++;
            }
            
                if(count==0)
               {
                   flag=true;
                   break;
               }
               else
               {
                   s.pop();
               }
               
        }
        i++;
    }
    return flag;
}
int main()
{
    char s[100];
cin.getline(s,100);
    cout<<checkredundant(s);
}
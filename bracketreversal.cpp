#include<bits/stdc++.h>
using namespace std;
int bracketreversal(char *str)
{
    stack<char>s;
    int i=0;
    int length=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    if(length%2!=0)
    return -1;
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='{')
        s.push(str[i]);
        if(str[i]=='}')
        {
            if(!s.empty())
            s.pop();
            else
            {
                s.push(str[i]);
            } 
        }
        i++;
    }
    int count=0;
    while(!s.empty())
    {
        char c1=s.top();
        s.pop();
        char c2=s.top();
        s.pop();
        if(c1==c2)              ///c1='{' &&c2='{'  therefore one need  to reverse
        count++;
        else
        {
            count+=2;           ///c1='}' &&c2='{'  therefore both need  to reverse
        }
        
    }
    return count;
}
int main()
{
    char s[100];
    cin.getline(s,100);
    cout<<bracketreversal(s);
}
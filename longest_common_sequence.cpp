#include<bits/stdc++.h>
using namespace std;
int longest_common(string s1,string s2)
{
    if(s1.size()==0||s2.size()==0)
    return 0;
    if(s1[0]==s2[0])
    return 1+longest_common(s1.substr(1),s2.substr(1));
    // 3 case must formed 
    // either take first character of both strings or take frist character of first string or first character of second string
    int a=longest_common(s1.substr(1),s2);
    int b=longest_common(s1,s2.substr(1));
    int c=longest_common(s1.substr(1),s2.substr(1));
    return max(a,max(b,c));
}
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    cout<<"length of longest subsequence:"<<longest_common(s1,s2);
}
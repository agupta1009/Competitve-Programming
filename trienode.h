#include<iostream>
using namespace std;
class trienode{
public:
char data;
bool isterminal;
// vector<trienode*> children;
trienode** children;
// 26 as a-z count is 26
trienode(char data)
{
    this->data=data;
    isterminal=false;
    children=new trienode*[26];
    // by default garbage pointers and they are dangerous
    for(int i=0;i<26;i++)
    children[i]=NULL;
    
}
~trienode()
{
    for(int i=0;i<26;i++)
    delete children[i];   
}
};
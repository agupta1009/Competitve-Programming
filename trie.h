#include<iostream>
#include<string>
#include<vector>
#include"trienode.h"
using namespace std;
class trie{
trienode *root;
public:
trie()
{
    root=new trienode('\0');
}
void insert(string word)
{
    return insertword(root,word);
}
void insertword(trienode* root,string word)
{
    if(word.size()==0)
    {
        root->isterminal=true;
        return;
    }
    int index=word[0]-'a';
    trienode* child;
    if(root->children[index]!=NULL)
    child=root->children[index];
    else
    {
        child=new trienode(word[0]);
        root->children[index]=child;
    }
    return insertword(child,word.substr(1));
}
bool searchword(trienode * root,string word)
{
    if(word.size()==0)
   {
       return root->isterminal; 
   }
   int index=word[0]-'a';
    if(root->children[index]==NULL)
    return false;
    trienode *child=root->children[index];
    return searchword(child,word.substr(1));
}
bool search(string word)
{
    return searchword(root,word);
}
void removeword(trienode* root,string word)
{
    if(word.size()==0)
    {
        root->isterminal=false;
        return;
    }
    int index=word[0]-'a';
    if(root->children[index]==NULL)
    return;
    trienode* child=root->children[index];
    return removeword(child,word.substr(1));
    if(child->isterminal==false)
    {
        for(int i=0;i<26;i++)
        if(child->children[i]!=NULL)
        return;
        root->children[index]=NULL;
        delete child;
    }
}
void remove(string word)
{
    return removeword(root,word);
}
// this search is different i=from above serach bcz here we are not checking if the terminal is false or not
//                                                          SUFFIX TREE(PATTERN MATCHING IS IMPLEMENTED ON THIS)
bool searchpattern(trienode* root,string word)
{
    if(word.size()==0)
    {
        return true;
    }
    int index=word[0]-'a';
    if(root->children[index]==NULL)
        return false;
    trienode* child=root->children[index];
    return searchpattern(child,word.substr(1));
}
bool patternmatching(vector<string>v,string word)
{
    if(word.size()==0)
    return true;
    for(int i=0;i<v.size();i++){
        string s=v[i];
    while(s.size()!=0)
    {
        insert(s);
        s=s.substr(1);
    }
    }
   return searchpattern(root,word);

}
// string make_words(trienode* root,string s)
// {
//     if(root->isterminal==true)
//     {
//         for(int i=0;i<26;i++)
//         {
//             if(root->children[i]==NULL)
//             return s;
//         }
//     }
// }
// bool findpalindrome(vector<string>v)
// {
//     if(v.size()==0)
//     return true;
//     for(int i=0;i<v.size();i++)
//         insert(v[i]);
//     for(int i=0;i<26;i++)
//     string s=make_words(root,"");

// }
vector<string> autocomplete(vector<string>v,string word,trienode* root,string output)
{
    if(root->isterminal==true)
    {
        v.push_back(output);}
        if(word.size()==0){
        for(int i=0;i<26;i++)
        {
            if(root->children[i]==NULL)
            return v;
            trienode *child=root->children[i];
            output+="*(root->children[i])";
            return autocomplete(v,word,child,output);
        }
        }
    output+=word[0];
    int index=word[0]-'a';
    if(root->children[index]==NULL)
    return v;
    trienode *child=root->children[index];
    word=word.substr(1);
    return autocomplete(v,word,child,output);
}
void autocomplete(vector<string>input,string word)
{
     for(int i=0;i<input.size();i++)
            insert(input[i]);

    vector<string>v=autocomplete(v,word,root,"");
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
return;
}
};
#include<iostream>
#include"trie.h"
#include<vector>
using namespace std;
int main()
{
    trie t;
//     t.insert("abc");
//     t.insert("hello");
//     t.insert("abacus");
//     t.insert("jog");
//     t.insert("hell");
//     // t.search("hell");
//     t.remove("jo");
//     cout<<t.search("hell")<<endl;
//     t.remove("hello");
//    cout<< t.search("hell")<<endl;
//     t.remove("hell");
//    cout<< t.search("hell")<<endl;
//     cout<<t.search("jo")<<endl;
int n;
cin>>n;
vector<string>v;
while(n--){
    string s;
    cin>>s;
    v.push_back(s);
}
string str;
cin>>str;
// cout<< t.patternmatching(v,str);
t.autocomplete(v,str);
}
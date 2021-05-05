#include<bits/stdc++.h>
using namespace std;
template<typename t>
class treenode{
    public:
    t data;
    vector<treenode<t>*>children;
    // treenode<t>**children=new treenode<t>*[size];
    treenode(t data)
    {
        this->data=data;
    }
};
#include<iostream>
using namespace std;
template<typename t>
class binarytreenode{
    public:
    t data;
    binarytreenode<t>* left;
    binarytreenode<t>* right;
   
    binarytreenode(t data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
    ~ binarytreenode()
    {
        delete this->left;
        delete this->right;
    }
};
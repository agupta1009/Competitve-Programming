#include"binarytreeclass.h"
class bst{
binarytreenode<int>*root;
public:
bst()
{
    root=NULL;
}
~bst()
{
    delete root;
}
private:
binarytreenode<int>* insert(binarytreenode<int>* root,int data)
{
    if(root==NULL)
    {
        root=new binarytreenode<int>(data);
        return root;
    }
    if(data>=root->data)
    root->right=insert(root->right,data);
    if(data<root->data)
    root->left=insert(root->left,data);
    return root;

}
void print(binarytreenode<int>* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<":";
    if(root->left)
    cout<<root->left->data<<",";
    else
    {
        cout<<"-1,";
    }
    if(root->right)
    cout<<root->right->data<<",";
    else
    {
        cout<<"-1,";
    }
    cout<<endl;
    print(root->left);
    print(root->right);
    
}
bool search(binarytreenode<int>* root,int data)
{
    if(root==NULL)
    return false;
    if(root->data==data)
    return true;
    if(data<root->data)
    return search(root->left,data);
    if(data>=root->data)
    return search(root->right,data);
}
int max(binarytreenode<int>*root)
{
    if(root->right==NULL)
    return root->data;
    return max(root->right);
}
binarytreenode<int>* deletenode(binarytreenode<int>* root,int data)
{
    if(root==NULL)
    return NULL;
    if(data>root->data)
    root->right=deletenode(root->right,data);
    else if(data<root->data)
    root->left=deletenode(root->left,data);
   else{
        if(root->left==NULL&&root->right==NULL)
    { return NULL;}
    else if(root->left==NULL)
    return root->right;
   else  if(root->right==NULL)
    return root->left;
    else if(root->left!=NULL&&root->right!=NULL)
    {
        //aproach left subtree ke max se replace kr denge root ko
        int maximum=max(root->left);
        root->data=maximum;
        root->left= deletenode(root->left,maximum);
        return root;
    }
   }

}
public:
void insert(int data)
{
    this->root= insert(this->root,data);
}
bool search(int data)
{
    return search(this->root,data);
}
void print()
{
   return print(this->root);
}
void deletenode(int data)
{
    this->root=deletenode(this->root,data);
}
};

int main()
{
    bst b;
    b.insert(2);
    b.insert(5);
    b.insert(10);
    b.insert(1);
    b.insert(4);
   cout<< b.search(108)<<endl;
    b.print();
    b.deletenode(2);
    cout<<endl;
    b.print();
}
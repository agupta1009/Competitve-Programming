#include<bits/stdc++.h>
#include"treenodeclass.h"
using namespace std;
treenode<int>* take_input()
{   
    cout<<"enter the data"<<endl;
    int root_data;
    cin>>root_data;
    treenode<int>*root=new treenode<int>(root_data);
    cout<<"eneter the no. of children of"<< root_data<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        treenode<int>* child=take_input();
        root->children.push_back(child);
    }
    return root; 

}
treenode<int>* take_inputlevelwise()
{
    cout<<"eneter the root data"<<endl;
    int root_data;
    cin>>root_data;
    treenode<int>* root=new treenode<int>(root_data);
    queue<treenode<int>*> pendingnode;
    pendingnode.push(root);
    while(!pendingnode.empty())
    {
        treenode<int>* front=pendingnode.front();
        pendingnode.pop();
    cout<<"enter the number of children of "<<front->data<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the data of "<<i<<"th children of"<<front->data;
        int data;
        cin>>data;
        treenode<int>*child=new treenode<int>(data);
        front->children.push_back(child);
        pendingnode.push(child);
        
    }
    }
    return root;
}
void print_levelwise(treenode<int>*root)
{
    queue<treenode<int>*>pendingnode;
    pendingnode.push(root);
    while(!pendingnode.empty())
    {
        treenode<int>*front=pendingnode.front();
        pendingnode.pop();
    cout<<front->data<<":";
    for(int i=0;i<front->children.size();i++)
    {
        cout<<front->children[i]->data<<",";
        pendingnode.push(front->children[i]);
    }
    cout<<endl;
}
}
void print(treenode<int>*root)
{
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}
int numnodes(treenode<int>* root)
{
    int ans=0;
    for(int i=0;i<root->children.size();i++)
    {
         ans+=numnodes(root->children[i]);
    }
    return 1+ans;
}
int sumnodes(treenode<int>*root)
{
    int sum=0;
    for(int i=0;i<root->children.size();i++)
    {
        sum=sum+sumnodes(root->children[i]);
    }
    return sum+root->data;
}
treenode<int>* maxnode(treenode<int>*root)
{
    if(root==NULL)
    return root;
    treenode<int>*max=root;
    for(int i=0;i<root->children.size();i++)
    {
        treenode<int>*temp=maxnode(root->children[i]);
        if(temp->data>max->data)
        max=temp;
    }
    return max;

}
int noofleaf(treenode<int>*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int sum=0;
    if(root->children.size()==0)
    {
        sum=1;
    }
    for(int i=0;i<root->children.size();i++)
    {
        sum=sum+noofleaf(root->children[i]);
        
    }
return sum;
}
vector<treenode<int>*> second_v(treenode<int>* root,vector<treenode<int>*>v)
{
    if(root==NULL)
    return v;   
    for(int i=0;i<root->children.size();i++)
    {
        vector<treenode<int>*>temp=second_v(root->children[i],v);
        v=temp;
    }
    v.push_back(root);
    return v;
}
bool comp(treenode<int>* p1,treenode<int>* p2)
{
    return p1->data<p2->data;
    }
treenode<int>* second(treenode<int>* root)
{
    if(root==NULL)
    return NULL;
    vector<treenode<int>*>v;
    v=second_v(root,v);
    sort(v.begin(),v.end(),comp);
    v.pop_back();
    return v.back();

}
int main()
{
   treenode<int>*root=take_inputlevelwise();
   print_levelwise(root);
   int totalnodes=numnodes(root);
   cout<<"number of nodes="<<totalnodes<<endl;
    int sum=sumnodes(root);
    cout<<"sum of all the nodes="<<sum<<endl;
   /* treenode<int>*max=maxnode(root);
    cout<<"max data npde="<<max->data<<endl;*/
    int leaf=noofleaf(root);
    cout<<"no. of leaf nodes="<<leaf<<endl; 
    treenode<int>* second_max=second(root);
    cout<<"second max element is: "<<second_max->data<<endl;
    
}
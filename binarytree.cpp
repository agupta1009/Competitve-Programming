#include<bits/stdc++.h>
#include"binarytreeclass.h"
using namespace std;
void print(binarytreenode<int>* root)
{
    if(root==NULL)
    return;
    cout<<root->data<<":";
    if(root->left)
    cout<<root->left->data<<",";
    if(root->right)
    cout<<root->right->data;
    cout<<endl;
    print(root->left);
    print(root->right);
    
    
}
binarytreenode<int>* takeinput()
{
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    return NULL;
    binarytreenode<int>*root=new binarytreenode<int>(data);
    binarytreenode<int>*left_child=takeinput();
    binarytreenode<int>*right_child=takeinput();
    root->left=left_child;
    root->right=right_child;
    return root;
}
binarytreenode<int>* takeinput_level()
{
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    return NULL;
    binarytreenode<int>*root=new binarytreenode<int>(data);
    queue<binarytreenode<int>*> pendingnode;
    pendingnode.push(root);
    while(!pendingnode.empty())
    {
        binarytreenode<int> *front=pendingnode.front();
        pendingnode.pop();
        cout<<"enter the data of left node of "<<front->data<<endl;
        int left_data;
        cin>>left_data;
        if(left_data!=-1)
        {
            binarytreenode<int>* left_child=new binarytreenode<int>(left_data);
            pendingnode.push(left_child);
            front->left=left_child;
        }
        cout<<"enter the data of right node of"<<front->data<<endl;
        int right_data;
        cin>>right_data;
        if(right_data!=-1)
        {
            binarytreenode<int>* right_child=new binarytreenode<int>(right_data);
            pendingnode.push(right_child);
            front->right=right_child;
        }
    }
    return root;
}
void print_level(binarytreenode<int>*root)
{
    if(root==NULL)
    return;
    queue<binarytreenode<int>*>pendingnode;
    pendingnode.push(root);
    while (!pendingnode.empty())
    {
        binarytreenode<int>*front=pendingnode.front();
        pendingnode.pop();
        if(front==NULL)
    return;
    cout<<front->data<<":";
    if(front->left)
    {cout<<front->left->data<<",";
    pendingnode.push(front->left);}
    if(front->right)
    {cout<<front->right->data;
    pendingnode.push(front->right);}
    cout<<endl;
    }
    
}
int count(binarytreenode<int>*root)
{
    if(root==NULL)
    return 0;
    int sum=1;
    sum+=count(root->left);
    sum+=count(root->right);
    return sum;
    
}
bool check(binarytreenode<int>*root,int k)
{
    if(root==NULL)
    return false;
    if(root->data==k)
    return true;
    bool ans1=check(root->left,k);
    bool ans2=check(root->right,k);
    if(ans1==true||ans2==true)
    return true;
    else
    {
        return false;
    }
    
}
int height(binarytreenode<int>*root)
{
    if(root==NULL)
    return 0;
    int height1=height(root->left);
    int height2=height(root->right);
    if(height1>=height2)
    return height1+1;
    else
    {
        return height2+1;
    }
    
}
void mirror(binarytreenode<int>*root)
{
    if(root==NULL)
    return;
    mirror(root->left);
    mirror(root->right);
    binarytreenode<int>*temp=root->left;
    root->left=root->right;
    root->right=temp;
    //                                                      IF U DELETE TEMP HERE IT WOULD GIVE WRONG ANSWER
    //  BinaryTreeNode<int>*temp=root->left;                NINJAS SOLUTION
    
    // BinaryTreeNode<int>*temp2=root->right;
    // root->left=root->right;
    // root->right=temp;
    // mirrorBinaryTree(temp);
    // mirrorBinaryTree(temp2);
}
binarytreenode<int>*construct_tree(int *inorder,int *preorder,int inorder_start,int inorder_end,int preorder_start,int preorder_end)
{
    if(inorder_start>inorder_end)
    return NULL;
    // if(preorder_start>preorder_end)
    // return NULL;
 binarytreenode<int>*root=new binarytreenode<int>(preorder[preorder_start]);
 int left_inorder_start=inorder_start;
 int count=inorder_start;
 for(int i=inorder_start;i<=inorder_end;i++)
 {
    if(inorder[i]!=root->data)
    count++;
    else
    {
        break;
    }
 }
 int left_inorder_end=count-1;
 int left_preorder_start=preorder_start+1;
int left_preorder_end=left_inorder_end-left_inorder_start+left_preorder_start;
int right_inorder_start=count+1;
int right_inorder_end=inorder_end;
int right_preorder_start=left_preorder_end+1;
int right_preorder_end=preorder_end;
root->left=construct_tree(inorder,preorder,left_inorder_start,left_inorder_end,left_preorder_start,left_preorder_end);
root->right=construct_tree(inorder,preorder,right_inorder_start,right_inorder_end,right_preorder_start,right_preorder_end);
return root;
}
int max(int a,int b,int c)
{
    
    if(a>b&&a>c)
    return a;
    else if(b>a&&b>c)
    return b;
    else return c;
}
int min(int a,int b,int c)
{
    
    if(a<b&&a<c)
    return a;
    else if(b<a&&b<c)
    return b;
    else return c;
}
pair<int,int> max_min(binarytreenode<int>* root)
{
    if(root==NULL)
    return make_pair(NULL,INT_MAX);
    pair<int,int>ans=make_pair(root->data,root->data);
    pair<int,int>temp1=max_min(root->left);
    pair<int,int>temp2=max_min(root->right);
    ans=make_pair(max(ans.first,temp1.first,temp2.first),min(ans.second,temp1.second,temp2.second));
    return ans;
}
int sum(binarytreenode<int>*root)
{
    if(root==NULL)
    return 0;
    int sum1=sum(root->left);
    int sum2=sum(root->right);
    return root->data+sum1+sum2;
}
void level_traversal(binarytreenode<int>*root)
{
    if(root==NULL)
   return;
    cout<<root->data<<endl<<root->left<<" "<<root->right;
   level_traversal(root->left);
   level_traversal(root->right);
}
binarytreenode<int>* remove_leaf(binarytreenode<int>*root)
{
    if(root==NULL)
    return NULL;
    if(root->left==NULL&&root->right==NULL)
    {root=NULL;
    return root;}
    root->left=remove_leaf(root->left);
    root->right=remove_leaf(root->right);
    return root;

}
void print_inrange(binarytreenode<int>* root,int l,int r)
{
    if(root==NULL)
    return;
    if(root->data>=l&&root->data<=r)
    {cout<<root->data<<" ";
    if(root->data==l)
   print_inrange(root->right,l,r);
   if(root->data==r) 
print_inrange(root->left,l,r);
else{
print_inrange(root->left,l,r);
print_inrange(root->right,l,r);
    }
    }
   else if(root->data<=l)
   print_inrange(root->right,l,r);
   else if(root->data>=r)
   print_inrange(root->left,l,r);


}
binarytreenode<int>* construct(int *arr,int start,int end)
{
    if(start>end)
    return NULL;
    int mid=start+(end-start)/2;
    binarytreenode<int>*root=new binarytreenode<int>(arr[mid]);
    root->left=construct(arr,start,mid-1);
    root->right=construct(arr,mid+1,end);
    return root;
}
int sumoflargenodes(binarytreenode<int>* root,int sum)
{
if(root==NULL)
return 0;
if(root->right==NULL)
return root->data;
sum+=sumoflargenodes(root->right,0);
root->data+=sum;
return sum;



}
void replacewithgreaternodes(binarytreenode<int>*root){
if(root==NULL)
return;
int rsum=sumoflargenodes(root->right,0);
root->data+=rsum;
root->left->data+=root->data;
}
int main()
{
    // binarytreenode<int>* root=takeinput();
    // print(root);
    binarytreenode<int>* root=takeinput_level();
    print_level(root);
    // int nofnodes=count(root);
    // cout<<"no. of nodes:"<<nofnodes<<endl;
    // cout<<"enter te data to be checked"<<endl;
    // int x;
    // cin>>x;
    // cout<<"presence of:"<<x<<check(root,x);
    // cout<<"height of binary tree:"<<height(root)<<endl;
    //cout<<"mirror of the given tree"<<endl;
 //   mirror(root);
//     int n=12;
//     int preorder[]={1, 2 ,3 ,4 ,15 ,5 ,6 ,7 ,8 ,10 ,9 ,12};
//     int inorder[]={4, 15, 3 ,2 ,5 ,1 ,6 ,10 ,8 ,7 ,9 ,12};
    
//     binarytreenode<int>* temp=construct_tree(inorder,preorder,0,n-1,0,n-1);
// print_level(temp);
// pair<int,int>ans=max_min(root);
// cout<<"max in tree:"<<ans.first<<endl;
// cout<<"min in tree:"<<ans.second<<endl;
// cout<<"sum of all the nodes:"<<sum(root)<<endl;
// level_traversal(root);
// binarytreenode<int>*temp=remove_leaf(root);
// cout<<"tree after removal of leaf nodes"<<endl;
// print_level(temp);
/////////////////////////////////////////////////////BINARY SERACH TREE//////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////BINARY SERACH TREE//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////BINARY SERACH TREE//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////BINARY SERACH TREE//////////////////////////////////////////////////////////////
// int a,b;
// cin>>a>>b;
// cout<<"the elements in the range"<< a<< b<< " are given as below:"<<endl;
// print_inrange(root,a,b);
// int arr[7]={1,2,3,4,5,6,7};
// binarytreenode<int>* bst=construct(arr,0,6);
// print_level(bst);
replacewithgreaternodes(root);


}
#include<bits/stdc++.h>
using namespace std;
int balanced_tree_dp(int h,int *arr)
{
    if(h==0||h==1)
    return arr[h];
    if(arr[h]!=-1)
    return arr[h];
    for(int i=2;i<=h;i++)
    arr[i]=arr[i-1]*arr[i-1]+arr[i-1]*arr[i-2]+arr[i-2]*arr[i-1];
    return arr[h];
}
int balanced_tree(int h)
{
    int *arr=new int[h+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<h+1;i++)arr[i]=-1;
    return balanced_tree_dp(h,arr);
}
int main()
{
    int height;
    cin>>height;
    cout<<balanced_tree(height);
}
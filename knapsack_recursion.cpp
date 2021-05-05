#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int *values,int *weight,int max_weight)
{
    // either put weight in knapsack or not
    if(n==0||max_weight==0)
    return 0;
    if(n==1&&weight[0]>max_weight)
    return 0;
    // calculate the values with or with first item
    int x=knapsack(n-1,values+1,weight+1,max_weight);
    // didnt put the first item in kanapsack
    int y=knapsack(n-1,values+1,weight+1,max_weight-weight[0])+values[0];
    // put the forst item in knapsack
    return max(x,y);
}
int main()
{
    int n;
    cin>>n;
    int *values=new int[n];
    int *weight=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
        for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }
    int max_weight;
    cin>>max_weight;
    cout<<"max value in knapsack ="<<knapsack(n,values,weight,max_weight);
}
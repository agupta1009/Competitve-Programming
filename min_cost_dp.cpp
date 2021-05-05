#include<bits/stdc++.h>
using namespace std;
int min_cost(int **arr,int n)
{
    int **dp=new int*[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        dp[i][j]=INT_MAX;
    }
    dp[n-1][n-1]=arr[n-1][n-1];
    for(int j=n-2;j>=0;j--)
    dp[n-1][j]=dp[n-1][j+1]+arr[n-1][j];
    for(int i=n-2;i>=0;i--)
    dp[i][n-1]=dp[i+1][n-1]+arr[i][n-1];
    for(int i=n-2;i>=0;i--)
    {
        for(int j=n-2;j>=0;j--)
        {
            dp[i][j]=arr[i][j]+min((dp[i][j+1]),min(dp[i+1][j+1],dp[i+1][j]));
        }
    }
    return dp[0][0];

}
int main()
{
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;i++)
    arr[i]=new int[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    cout<<min_cost(arr,n);
}
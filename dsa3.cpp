#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int **v=new int*[n];
    for(int i=0;i<n;i++)
    {
        v[i]=new int[n];
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
int i=0;
int counter=0;
        while(i<n)
        {
            for(int j=0;j<n;j++)
            {
            int temp=v[i][j];
            int x=INT_MIN;
            int y=INT_MIN;
                for(int k=i+1;k<n;k++)
                {
                if(v[k][j]<temp)
                {
                    temp=v[k][j];
                    x=k;
                    y=j;   
                }   
                }
                if(x!=INT_MIN&&y!=INT_MIN)
            {
                swap(v[i][j],v[x][y]);
                counter++;
            }
            }

        for(int j=0;j<n;j++)
            {
            int temp=v[j][i];
            int x=INT_MIN;
            int y=INT_MIN;
                for(int k=i+1;k<n;k++)
                {
                if(v[j][k]<temp)
                {
                    temp=v[j][k];
                    x=j;
                    y=k;   
                }   
                }
                if(x!=INT_MIN && y!=INT_MIN)
            {
                swap(v[j][i],v[x][y]);
                counter++;
            }
        }
        i++;
    }
    cout<<counter<<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<' ';
        }
    }
}




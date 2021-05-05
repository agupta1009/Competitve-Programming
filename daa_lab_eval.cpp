#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int size;
    cin>>size;
    int *arr=new int[size];
    cout<<"input array"<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<size;i++)
    p.push(arr[i]);
    cout<<"output array"<<endl;
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}
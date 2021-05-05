#include<bits/stdc++.h>
using namespace std;
class sample{
    public:
    int data;
    int index;
    sample(int a,int b)
    {
        data=a;
        index=b;
    }
};
class fun{
public:
bool operator()(sample s1,sample s2)
{
    return s2.data>s1.data;
}
};
int time(int *arr,int n,int k)
{
    priority_queue<sample,vector<sample>,fun>pq;
    queue<sample>q;
    for(int i=0;i<n;i++)
    {pq.push(sample(arr[i],i));
    q.push(sample(arr[i],i));}
    int ans=0;
    while(1)
    {
        if(pq.top().index==k)
        {
            ans++;
            break;
        }
        else
        {
            
        }

    }
return ans;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k;
    cin>>k;
    cout<<time(arr,n,k);
}
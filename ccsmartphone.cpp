#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long customers;
    cin>>customers;
    vector<long long>revenue;
    for(long long i=0;i<customers;i++)
    {
        long long budget;
        cin>>budget;
        revenue.push_back(budget);
    }
    sort(revenue.begin(),revenue.end());
    for(long long i=0;i<revenue.size();i++)
    {
        revenue[i]*=revenue.size()-i;
    }
    sort(revenue.begin(),revenue.end());
    cout<<revenue.back()<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    	while(t--){
		int n,s;cin>>n>>s;
		vector<int> v(n),p(n);
		for(int i=0;i<n;i++)cin>>v[i];
		for(int i=0;i<n;i++)cin>>p[i];
		int min1=100,min2=100;
		
		for(int i=0;i<n;i++){
			if(p[i]==1){
				min1=min(min1,v[i]);
			}
			else{
				min2=min(min2,v[i]);
			}
		}
		if(min1+min2<=100-s)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
        
    }
}
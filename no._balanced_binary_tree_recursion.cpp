#include<bits/stdc++.h>
// #define mode 10^9+7;
using namespace std;
// int balanced_tree(int height)
// {
//     if(height<=1)
//     return 1;
//     int x=balanced_tree(height-1);
//     int y=balanced_tree(height-2);
//     int mode=(int)(pow(10,9))+7;
//     int temp=(int)(((long)(x)*x) % mode);//x*x can be out of buffer there fore we have to store it in long buffer and typecast to int
//     int temp2=(int)((2*(long)(x)*y) % mode);
//     return ((temp+temp2)%mode);
//     // return x*x+x*y+y*x;
// }
int balancedBTs(int h) {
	if(h <= 1) {
		return 1;
	}

	int mod = (int) (pow(10, 9)) + 7;
	int x = balancedBTs(h - 1);
	int y = balancedBTs(h - 2);

	int temp1 = (int)(((long)(x)*x) % mod);
	int temp2 = (int)((2* (long)(x) * y) % mod);
	int ans = (temp1 + temp2) % mod;


	//int ans = (x*x + 2*x*y) % mod;
	return ans;
}
int main()
{
    int height;
    cin>>height;
    // cout<<balanced_tree(height);
    cout<<balancedBTs(height);
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         int x,y,l,r;
//         cin>>x>>y>>l>>r;
//         int ans=INT_MAX;
//         int max=0;
//         for(int i=l;i<=r;i++)
//         {
//             if((x^i)*(i^y)==max)
//             {ans=min(ans,i);
//             }
//             if((x^i)*(i^y)>max)
//             {
//                 ans=i;
//                 max=(x^i)*(i^y);
//             }
//         }
//           cout<<ans<<endl;
//     }
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     char a[]={'A','B','C','D'};
// //     char *p=&a[0];
// //     p++;
// //     // cout<<a[1]<<endl;
// //     cout<<*++p<<" "<<--*p;
// // }
// // // #include <iostream> 
// // // using namespace std; 
// // // #include <stdio.h> 
// // // int main() 
// // // { 
// // //     char* str[] = { "AAAAA", "BBBBB", "CCCCC", "DDDDD" }; 
// // //     char** sptr[] = { str + 3, str + 2, str + 1, str }; 
// // //     char*** pp; 
  
// // //     pp = sptr; 
// // //     ++pp; 
// // //     printf("%s", **pp++ + 2); 
// // //     return 0; 
// // // } 
// #include<bits/stdc++.h>
// using namespace std;
// int digits(int n)
// {
//     if(n>=0&&n<=9)
//     return 1;
//     else
//     {
//         return 1+digits(n%10);
//     }
    
// }
// int main()
// {
//     for(int i=0;i<10;i++)
//     {
//     int n=rand()%15;
//     cout<<n<<" "<<digits(n)<<endl;
// }
// }

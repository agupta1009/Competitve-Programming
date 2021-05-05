#include<iostream>
using namespace std;

int main()
{
int a[10];
for(int i=0;i<5;i++)
{
cout<<"enter the element";
cin>>a[i];
}
int n,el;
cout<<"enter the place where you want the element and which element";
cin>>n>>el;
for(int i=6;i>=n;i--)
{
a[i]=a[i-1];
}
a[n-1]=el;
for(int i=0;i<6;i++)
{

cout<<a[i];
}


return 0;
}

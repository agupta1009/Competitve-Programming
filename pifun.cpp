#include<iostream>
using namespace std;
class fun
{
public:
int a[10];
void insert(int p,int q)
{
for(int i=6;i>=p;i--)
{
a[i]=a[i-1];
}
a[p-1]=q;
};
void del(int r)
{
for(int i=r-1;i<6;i++)
{
a[i]=a[i+1];
}
};
void search(int t)
{
for(int i=0;i<5;i++)
{
if(t==a[i])
{
cout<<"the place is"<<i+1<<endl;
break;
}
}
};
int b_search(int j,int k,int l)
{
int mid=(j+k)/2;
if (l==a[mid])
return mid;
else if(l>a[mid])
return b_search(mid+1,k,l);
else 
return b_search(j,mid-1,l);
};
void display()
{
for(int i=0;i<5;i++)
{
cout<<a[i]<<endl;
}
};
};
int main()
{fun o;
for(int i=0;i<5;i++)
{
cout<<"enter the element";
cin>>o.a[i];
}
int n,el;
cout<<"enter the place where you want the element and which element";
cin>>n>>el;
o.insert(n,el);
int d;
cout<<"enter the place where you want to delete the element";
cin>>d;
o.del(d);
o.display();
int fd;
cout<<"enter the element which you want to search";
cin>>fd;
o.search(fd);
cout<<"enter the element which you want to search";
cin>>fd;
int bs=o.b_search(0,5,fd);
cout<<bs+1<<endl;


return 0;
}


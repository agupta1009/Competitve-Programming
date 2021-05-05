#include<iostream>
#include<algorithm>
using namespace std;
void maxheapify(int *arr,int start,int end)
{
    if(start==end)return;
    int parentindex=start;
    int swapindex=parentindex;
    while(parentindex<=end){
    int childindex1=2*parentindex+1;
    int childindex2=2*parentindex+2;
    if(childindex1<=end&&arr[parentindex]<arr[childindex1]){
    swap(arr[parentindex],arr[childindex1]);
    swapindex=childindex1;}
    if(childindex2<=end&&arr[parentindex]<arr[childindex2]){
    swap(arr[parentindex],arr[childindex2]);
    swapindex=childindex2;}
    if(swapindex==parentindex)
        break;
    parentindex=swapindex;}

}
void up_heapify(int*arr,int start,int end)
{
    int childindex=end;
    while(childindex>start)
    {
        int parentindex=(childindex-1)/2;
        if(parentindex>=start&&arr[parentindex]<arr[childindex])
        {swap(arr[parentindex],arr[childindex]);
        swap(parentindex,childindex);}
    else
    {
        break;
    }
}
}
void inplaceHeapSort(int *arr,int n)
{
    int start=0;
    int end=start;
    for(;end<n;end++)
    // maxheapify(arr,n,start,end);
    up_heapify(arr,start,end);
    for(int i=0;i<n;i++)
    {
        swap(arr[i],arr[n-1-i]);
        maxheapify(arr,0,n-1-i);
        
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    inplaceHeapSort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
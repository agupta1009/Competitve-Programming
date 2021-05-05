#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    int size1=mid-start+1;
    int size2=end-mid;
    int  *left=new int[size1];
    int *right=new int[size2];
    for(int i=start;i<=mid;i++)
    {
        left[i-start]=arr[i];
    }
    for(int i=mid+1;i<=end;i++)
    {
        right[i-mid-1]=arr[i];
    }
    int i=0;
    int j=0;
    int m=start;
    while(i<size1&&j<size2)
    {
        if(left[i]>=right[j])
        {
            arr[m]=right[j];
            m++;
            j++;
        }
        else
        {
            arr[m]=left[i];
            i++;
            m++;
        }
    }
    while(i<size1)
    {
        arr[m]=left[i];
        i++;
        m++;
    }
    while(j<size2)
    {
        arr[m]=right[j];
        j++;
        m++;
    }
    delete[] left;
    delete[] right;
    return;
}
void mergesort(int arr[],int start,int end)
{
    if(start>=end)
    return;
    else
    {
        int mid=(start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);    
    }
}
int main()
{
    int size;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>*(arr+i);
    }
    int start=0;
    int end=size-1;
    mergesort(arr,start,end);
    for(int i=0;i<size;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    delete [] arr;

}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int pivot(int arr[],int low,int high)
{
    int pivot=low;
    int count=0;
    for(int i=low+1;i<=high;i++)
    {
        if(arr[i]<=arr[pivot])
        count++;
    }
    swap(arr[pivot],arr[count+pivot]);
    pivot=count+pivot;
    int i=low;
    int j=high;
    while(i<pivot&&j>pivot)
    {
        while(arr[i]<=arr[pivot])
        i++;
        while(arr[j]>arr[pivot])
        j--;
        if(i==j-1)
        break;
       swap(arr[i],arr[j]);
       i++;
       j--;
    }
return pivot;
//  int pivot = arr[high];    // pivot 
//     int i = low-1;  // Index of smaller element 
  
//     for (int j = low; j <= high- 1; j++) 
//     { 
//         // If current element is smaller than or 
//         // equal to pivot 
//         if (arr[j] <= pivot) 
//         { 
//             i++;    // increment index of smaller element 
//             swap(arr[i], arr[j]); 
//         } 
//     } 
//     swap(arr[i + 1], arr[high]); 
//     return (i + 1); 
}
void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    return;
    int index=pivot(arr,start,end);
    quicksort(arr,start,index-1);
    quicksort(arr,index+1,end);
}
int main()
{
    int size;
    cin>>size;
    int *arr=new int[size];
    for(int i=0;i<size;i++)
    {
        arr[i]=rand()%100;
    }
    cout<<"input arry: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,size-1);
    cout<<"output arry: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
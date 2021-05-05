#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class priorityqueue{       //////////////MAx priority queue  || MAx heap
vector<int> data;
public:
int getSize()
{
    return data.size();
}
bool isEmpty()
{
    return data.size()==0;
}
int getMax()
{
    if(data.size()!=0)
    return *data.begin();  ////data[0];
    else
    {
        return -1;
    }
    
}
void up_heapify()
{
    int child_index=data.size()-1;
    while(child_index>0)
    {
        int parent_index=(child_index-1)/2;
        if(data[parent_index]<data[child_index])
        swap(data[parent_index],data[child_index]);
        else
        break;
        child_index=parent_index;
    }
}
void insert(int element)
{
    data.push_back(element);
    up_heapify();
}
void down_heapify()
{
    if(data.size()==0)
    return;
    int parent_index=0;
    while(parent_index<data.size())
    {
        int left_child=2*parent_index+1;
        int right_child=2*parent_index+2;
        int swap_index=parent_index;
        if(left_child<data.size()&&data[parent_index]<data[left_child])
        {
            swap(data[parent_index],data[left_child]);
            swap_index=left_child;
        }
        if(right_child<data.size()&&data[parent_index]<data[right_child])
        {
            swap(data[parent_index],data[right_child]);
            swap_index=right_child;
        }
        if(swap_index==parent_index)
        break;
        parent_index=swap_index;
    }
}
int removeMax()
{
    int element=*(data.begin());
    ///replace the first element with the leaf or last node and then call down heapify
    swap(data.front(),data.back());
    // data.erase(data.end());
    data.pop_back();
    down_heapify();
    return element;
}
};
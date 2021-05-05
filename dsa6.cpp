// #include<bits/stdc++.h>
// using namespace std;
// // struct node{
// //     int data;
// //     node *next;
// // };
// // class circular_linked_list{
// // public:
// // node *head,*last;
// // circular_linked_list()
// // {
// //     head=NULL;
// //     last=NULL;
// // }
// // node* add_node(int data)
// // {
// //     if(head==NULL)
// //     {
// //         node *temp=new node();
// //         temp->data=data;
// //         temp->next=NULL;
// //         head=temp;
// //         last=temp;
// //     }
// //     else
// //     {
// //      node *temp=new node();
// //         temp->data=data;
// //         temp->next=NULL;
// //         last->next=temp;
// //         last=last->next;   
// //     }
// //     last->next=head;
// // }



// // };
// bool comp(pair<int,pair<int,int>>p1,pair<int,pair<int,int>>p2)
// {
//     return p1.second.first<p2.second.first;
// }
// int main()
// {
//     int t=1;
//     int n;
//     cin>>n;
//     vector<pair<int,pair<int,int>>>v;
//     while(n--)
//     {
//         int process;
//         int burst;
//         int end;
//         cin>>process>>burst>>end;
//         v.push_back(make_pair(process,make_pair(burst,end)));
//     }
//     sort(v.begin(),v.end(),comp);
//     vector<int>output;
//     int time=v[0].second.first;
//     for(int i=0;;i++)
//     {
//         if(v.size()==0)
//         break;
//         int k=i%v.size();
        
//          if(time>=v[k].second.first)
//         {
//             v[k].second.second--;
//             output.push_back(v[k].first);
//             time++;
//             if(v[k].second.second==0)
//         {
//             v.erase(v.begin()+k);
//             i--;
//         }
//         }
//         else
//         {
        
//             i=-1;
//         }
        
//     }
//     for(auto x:output)
//     cout<<x<<" ";

// }
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,pair<int,int>>p1,pair<int,pair<int,int>>p2)
{
    return p1.second.first<p2.second.first;
}
class Node
{
    private:
    int xyz=0;
    int lmnop=100;
    public:
    int p;
    int at;
    int bt;
    Node *Next;
    Node(int p1,int at1,int bt1)
    {
        p=p1;
        at=at1;
        bt=bt1;
        Next=NULL;
    }
};
Node *headl1=NULL;
Node *last1=NULL;
Node* joy(Node* SCLL,Node* LL,float pop)
{
    int TQ=SCLL->at;
    Node* bun = SCLL;
    int flag=0;
    while(1)
    {
        cout<<bun->p<<" ";
        bun->bt--;
        if(bun->bt==0) 
        {
            if(SCLL->Next==SCLL)
            break;
            if(SCLL->Next==bun)
            {
                flag=1;
                SCLL->Next=bun->Next;
                bun=bun->Next;  
            }
            else if(SCLL==bun)
            {
                if(SCLL->Next==SCLL)
                    break;
                else
                {
                    Node*ptr=bun;
                    while(ptr->Next!=bun)
                    ptr=ptr->Next;
                    ptr->Next=bun->Next;
                    bun=ptr;
                    SCLL=ptr;
                }
            }
            else
            {
            if(SCLL->Next==SCLL)
            break;
            
            Node*ptr=bun;
            while(ptr->Next!=bun)
            {
                ptr=ptr->Next;
            }
            ptr->Next=bun->Next;
            bun=ptr;
        }
        }
        TQ++;
        if(LL!=NULL)
        {                 
            Node*ptr=LL;
            Node*prev=NULL;
            while(1)
            {
                if(ptr==NULL)
                break;
                if(TQ>=ptr->at)
                {
                prev=ptr;
                ptr=ptr->Next;
                LL=ptr;
                Node*temp=SCLL->Next;
                SCLL->Next=prev;
                prev->Next=temp;
                SCLL=prev;
                }
                else
                break;
                
            }       
        }
        if(flag==0)
        bun=bun->Next;
        else
        flag=0;

    }
    return LL;
}
Node* takeinput(int p, int at, int bt,int vv,int mm){
        Node *newNode=new Node(p,at,bt);
        if(headl1==NULL)                  {
            headl1=newNode;
            last1=newNode;
        }
        else{
            last1->Next=newNode;
            last1=newNode;
        }    
    return headl1;
}

int main()
{
    Node* LL;
     int t=1;
    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>>v;
    while(n--)
    {
        int process;
        int burst;
        int end;
        cin>>process>>burst>>end;
        v.push_back(make_pair(process,make_pair(burst,end)));
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++)
    {
        LL=takeinput(v[i].first,v[i].second.first,v[i].second.second,05,50);
    }
    while(LL!=NULL)
    {
    Node *SCLL;
    Node* ptr=LL;
    LL=LL->Next;
    SCLL=ptr;
    SCLL->Next=SCLL;
    LL=joy(SCLL,LL,95.0);
    }
}


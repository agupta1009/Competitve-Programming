#include<iostream>
#include<string>
using namespace std;
template<typename t>
class node{
public:
// here we are assummin datatype of key to be string
string key;
node *next;
t value;
node(string key,t value){
    next=NULL;
    this->value=value;
    this->key=key;
}
~node(){
    delete next;
}
};
template<typename t>
class map{
public:
int size;
int array_size;
node<t>** arr;
map()
{
    size=0;
    array_size=5;
    arr=new node<t>*[array_size];
    // WRITE NOW O=IT IS STORING GARBAGE ADDRESS SO WE HAVE TO MAKE ALL THE ENTRIES NULL  BCZ GARBAGE ADDRESS ARE DANGEROUS!!!
    for(int i=0;i<array_size;i++)
    arr[i]=NULL;
}
~map(){
    for(int i=0;i<size;i++)
    delete arr[i];
    delete arr;
}
double load_factor()
{
    return (double)size/array_size;
}
int get_size()
{
    return size;
}
int hash(string key)
{
    int hashcode=0;
    for(int i=key.size()-1;i>0;i--)
    {
        hashcode+=key[i]*1;
        hashcode*=11;
        hashcode=hashcode%array_size;
    }
    hashcode+=key[0]*1;
    hashcode=hashcode%array_size;
    return hashcode;
}
void rehash()
{
    node<t>** temp=arr;
    int j=array_size;
    array_size*=2;
    arr=new node<t>*[array_size];
    for(int i=0;i<array_size;i++)
    arr[i]=NULL;
    for(int i=0;i<j;i++)
    {
        node<t>*head=temp[i];
        while(head!=NULL)
        {
            insert(head->key,head->value);
            head=head->next;
        }
        delete temp[i];
    }
    delete []temp;
}
void insert(string key,t value)
{
    int index=hash(key);
    node<t> *head=arr[index];
    while(head!=NULL)
    {
        if(head->key==key)
        {head->value=value;
        return;}
        head=head->next;
        
    }
      head=arr[index];
    node<t>* newnode=new node<t>(key,value);
        newnode->next=head;
        size++;
        int load=load_factor();
        if(load>0.7)
        rehash();
        return;
}
t get_value(string key)
{
 int index=hash(key);
    node<t> *head=arr[index];
    while(head!=NULL)
    {
        if(head->key==key)
        return head->value;
        head=head->next;
       
    }  
     return 0;    
}
void remove(string key)
{
    int index=hash(key);
    node<t> *head=arr[index];
    node<t> *prev=NULL;
    while(head!=NULL)
    {
        if(head->key==key)
        {
            if(prev==NULL)
            {
                prev=head;
                head=head->next;
                prev->next=NULL;
                delete prev;
                return;
            }
            prev->next=head->next;
            head->next=NULL;
            delete head;
            return;
        }
        prev=head;
        head=head->next;
    }  
}
};
#include<iostream>
using namespace std;
#include"stackclass.h"
int main()
{
    Stack<int>s;
    s.push(10);
    s.push(20);
    cout<<s.top()<<endl;
    s.push(50);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;

}
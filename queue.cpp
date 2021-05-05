#include"Queueclass.h"
using namespace std;
int main()
{
    Queue<int>q;
    cout<<q.Size()<<endl;
    q.enqueue(10);
    q.enqueue(30);
    q.enqueue(20);
    q.enqueue(40);
    cout<<q.Size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.isempty()<<endl;
}
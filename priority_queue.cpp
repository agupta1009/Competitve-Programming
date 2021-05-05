#include"priority_queue.h"
using namespace std;
int main()
{
    priorityqueue pq;
    pq.insert(10);
    pq.insert(20);
    pq.insert(30);
    pq.insert(50);
    pq.insert(70);pq.insert(100);
    cout<<pq.getMax()<<endl;
   cout<< pq.removeMax();
   cout<<pq.getMax()<<endl;
}
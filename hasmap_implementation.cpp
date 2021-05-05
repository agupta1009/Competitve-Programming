#include"hashmap_implementation.h"
using namespace std;
int main()
{
    map<int>m;
    cout<<m.get_size()<<endl;
    for(int i=0;i<10;i++)
    {
        char c='0'+i;
        string key="hello";
        key+=c;
        m.insert(key,i);
        cout<<m.load_factor()<<endl;
    }
    m.remove("hello4");
    cout<<m.get_size()<<endl<<m.load_factor()<<endl;


}
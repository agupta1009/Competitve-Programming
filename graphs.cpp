#include"graphs.h"
int main()
{
    int vertices,no_of_edges;
    cin>>vertices>>no_of_edges;
    graphs g(vertices,no_of_edges);
    for(int i=0;i<no_of_edges;i++)
    {
        int a,b;
        cin>>a>>b;
        g.insert(make_pair(a,b));
    }
    // g.bfs(2);
    // cout<<endl;
    // g.dfs(0);
    // g.bfs_disconnected();
    // HASS PATH                => whether a path exist between the two vertices
    cout<<"enter the vertices between which u want to check the hass path"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<g.Hass(a,b)<<endl;
}
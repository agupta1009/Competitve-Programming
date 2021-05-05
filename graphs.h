#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
class graphs{
    public:
    int vertices;
    int no_of_edges;
    int **edges;
    unordered_map<int,int>visited;//for visited vertices
    graphs(int vertices,int no_of_edges)
    {
        this->vertices=vertices;
        this->no_of_edges=no_of_edges;
        edges=new int*[vertices];
        for(int i=0;i<vertices;i++)
        {
            edges[i]=new int[vertices];
            for(int j=0;j<vertices;j++)
            {
                edges[i][j]=0;
            }
        }
    }
    void insert(pair<int,int>p)
    {
        edges[p.first][p.second]=1;
        edges[p.second][p.first]=1;
    }
    void dfs(int start_vertex)              //depth first search
    {                 
        cout<<start_vertex<<" ";
        visited[start_vertex]=1;
        for(int i=0;i<vertices;i++)
        {
            // if(i==start_vertex)             //if the edge is there between the same vertex 
            // continue;
            if(edges[start_vertex][i]==1)
            {
                if(visited.count(i)==0)
                dfs(i);
            }
        }
    }
    void dfs_disconnected()              //depth first search for disconnected graph
    {                                                    // approach: we will cal dfs for each bertex which has not been visited
        for(int i=0;i<vertices;i++)
        {
            if(visited[i]==0)
            {dfs(i);
            cout<<endl;}
        }
    }
    void bfs(int start_vertex)
    {
        // cout<<start_vertex<<endl;
        queue<int>q;
        q.push(start_vertex);
        visited[q.front()]=1;
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            for(int i=0;i<vertices;i++)
            {
                if(edges[q.front()][i]==1)
                {
                    if(visited.count(i)==0)
                    {q.push(i);
                    visited[i]=1;}
                }
            }
            q.pop();
        }
        
    }
    void bfs_disconnected()
    {
        for(int i=0;i<vertices;i++)
        {
            if(visited[i]==0)
            {
                bfs(i);
                cout<<endl;
            }
        }
    }
    bool Hass(int a,int b)
    {
        if(a==b)
        return true;
        visited[a]=1;
        for(int i=0;i<vertices;i++)
        {
            if(edges[a][i]==1)
            {
                if(visited[i]==0)
                {
                    bool ans=Hass(i,b);
                    if(ans)return ans;
                }
            }
        }
       
        return false;
    }
};
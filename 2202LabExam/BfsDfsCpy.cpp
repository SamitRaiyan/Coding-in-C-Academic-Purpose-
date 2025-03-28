#include<bits/stdc++.h>
using namespace std;
int node,edge;
int visited_array[1000];
vector<int>a[1000];
void BFS(int src)
{    queue<int>b;
    b.push(src);
    visited_array[src]=1;
    while(!b.empty())
    {        int head=b.front();
        cout<<head<<" ";
        b.pop();
        for(int child:a[head])
        {            if(visited_array[child]==0)
            {                visited_array[child]=1;
                b.push(child);
            }       }    }
    cout<<"\n";}
void DFS(int node)
{
    cout<<node<<" ";
    visited_array[node]=1;
    for(int child:a[node])
    {        if(visited_array[child]==0)
        {            DFS(child);        }    }}
int main()
{    cout<<"How many node and edge: ";
    cin>>node>>edge;    cout<<"Enter all the edge connection: ";
    for(int i=0; i<edge; i++)
    {        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);    }
    int s;
    cout<<"Source node for BFS & DFS: ";
    cin>>s;
    cout<<"BFS: ";
    BFS(s);    cout<<"\n";
    memset(visited_array,0,sizeof(visited_array));    cout<<"DFS: ";
    DFS(s);
    return 0;
}

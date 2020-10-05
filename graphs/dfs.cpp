#include<bits/stdc++.h>
using namespace std;

vector<bool>vis(1001,false);


void dfs_util(vector<int>G[],int src)
{
    vis[src] = true;
    cout<<src<<" ";

    for(int i:G[src])
    {
        if(!vis[i])
        {
            dfs_util(G,i);
        }
    }
}



void dfs(vector<int>G[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs_util(G,i);
        }
    }
}


int main()
{
    int n,e;
    cout<<"enter the number of vertices and edges\n";
    cin>>n>>e;
    vector<int>G[n];
    int x,y;
    cout<<"enter the two nodes for all "<<e<<" edges\n";
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    cout<<"DFS\n";
    dfs(G,n);
    return 0;


}
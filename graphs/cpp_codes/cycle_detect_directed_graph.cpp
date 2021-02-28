/*
    video link : https://www.youtube.com/watch?v=0dJmTuMrUZM&t=350s
*/

#include<bits/stdc++.h>
using namespace std;

vector<bool>vis(1001,false);


bool dfs(vector<int>G[],int node)
{
    if(vis[node]==true)
    {
        return true;
    }

    vis[node]=true;
    for(int i:G[node])
    {
        if(dfs(G,i))
        {
            return true;
        }
    }
    return false;
}



bool is_cycle(vector<int>G[],int n)
{
    for(int i=0;i<n;i++)
    {
        vis[i] = true;
        for(int child:G[i])
        {
            if(dfs(G,child))
            {
                return true;
            }
        }
        
        vis[i] = false;
    }
    return false;
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
    }

    if(is_cycle(G,n))
    {
        cout<<"cycle exists in the given graph\n";
    }
    else
    {
        cout<<"cycle does not exists in the given graph\n";
    }
    
    return 0;


}
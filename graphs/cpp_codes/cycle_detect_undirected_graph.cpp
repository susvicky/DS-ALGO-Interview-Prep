/*
video link : https://www.youtube.com/watch?v=eCG3T1m7rFY
*/


#include<bits/stdc++.h>
using namespace std;

vector<bool>vis(1001,false);

bool is_cycle(vector<int>G[],int node,int par)
{
    vis[node] = true;
    for(int child:G[node])
    {
        if(!vis[child])
        {
            if(is_cycle(G,child,node))
            {
                return true;
            }
        }
        else if(child!=par)
        {
            return true;
        }
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
        G[y].push_back(x);
    }

    if(is_cycle(G,0,-1))
    {
        cout<<"cycle exists in the given graph\n";
    }
    else
    {
        cout<<"cycle does not exists in the given graph\n";
    }
    
    return 0;


}
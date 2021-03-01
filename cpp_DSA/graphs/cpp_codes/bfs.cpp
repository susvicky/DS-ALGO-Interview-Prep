#include<bits/stdc++.h>
using namespace std;

vector<bool>vis(1001,false);
void bfs(vector<int>G[],int n)
{
    queue<int>Q;
    Q.push(0);
    vis[0] = true;

    while(!Q.empty())
    {
        int curr = Q.front();
        cout<<curr<<" ";
        Q.pop();

        for(int i:G[curr])
        {
            if(!vis[i])
            {
                vis[i] = true;
                Q.push(i);
            }
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

    cout<<"BFS\n";
    bfs(G,n);
    return 0;


}
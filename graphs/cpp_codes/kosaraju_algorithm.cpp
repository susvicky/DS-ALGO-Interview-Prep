#include<bits/stdc++.h>
using namespace std;
vector<bool>visited(16,false);

vector<int>rev[16];
int cnt = 0;

void func(vector<int>G[],int node,stack<int>&stck)
{
    visited[node] = true;
    for(int i:G[node])
    {
        if(!visited[i])
        {
            func(G,i,stck);
        }
        
    }
    stck.push(node);
}
void rev_graph(vector<int>G[],int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int child:G[i])
        {
            rev[child].push_back(i);
        }
    }
}
void dfs(int node)
{
    visited[node] = true;
    for(int i:rev[node])
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }
}
int kosaraju(vector<int>G[],int n)
{
    stack<int>stck;
    /*
      Do a DFS on the original graph, keeping track of the finish times of each node. This can be done with a stack, when some DFS finishes put the source vertex on the stack. This way node with highest finishing time will be on top of the stack.
     */
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            func(G,i,stck);
        }
        
    }
    for(int i=1;i<=16;i++)
    {
        visited[i] = false;
    }
    
    // Reverse the original graph, it can be done efficiently if data structure used to store the graph is an adjacency list.
    rev_graph(G,n);
 
    /*
      Do  on the reversed graph, with the source vertex as the vertex on top of the stack. When  finishes, all nodes visited will form one Strongly Connected Component. If any more nodes remain unvisited, this means there are more Strongly Connected Component's, so pop vertices from top of the stack until a valid unvisited node is found. This will have the highest finishing time of all currently unvisited nodes. This step is repeated until all nodes are visited.
     */
    while(!stck.empty())
    {
        int node = stck.top();
      
        stck.pop();
        if(!visited[node])
        {
            dfs(node);
            cnt++;
        }
 
    }
    return cnt;
}



int main()
{
    int n,e;
    cout<<"enter the number of vertices and edges\n";
    cin>>n>>e;
    vector<int>G[n+1];
    
    
    int a,b;
    while(e--)
    {
        cout<<"enter a and b points\n";
        cin>>a>>b;
        G[a].push_back(b);
    }
    
    int ans = kosaraju(G,n);
    cout<<"Number of Strongly Connected components = "<<ans;
    
    return 0;
}

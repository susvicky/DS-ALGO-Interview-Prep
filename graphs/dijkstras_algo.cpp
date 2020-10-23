#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<pair<int,int> >adj[],int n,int src)
{
    vector<int>dist(1001,INT_MAX);
    dist[src] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >Q;
    Q.push(make_pair(src,0));

    while(!Q.empty())
    {
        pair<int,int>curr = Q.top();
        int node = curr.first;
        int d = curr.second;
        Q.pop();

        for(auto child:adj[node])
        {
            int c_node = child.first;
            int c_distance = child.second;

            if(c_distance+d<dist[c_node])
            {
                dist[c_node] = d+c_distance;
                Q.push(make_pair(c_node,dist[c_node]));
            }
        }

    }

    cout<<"distance of source node to other node:\n";
    for(int i=2;i<=n;i++)
	{
		cout<<dist[i]<<" ";
	}
}





int main()
{
    
    vector<pair<int,int> >adj[1001];
    int n,e;
    cout<<"enter the number of vertices and edges\n";
    cin>>n>>e;
    int x,y,w;
    cout<<"enter two vertices and their weights for "<<e<<" edges\n";
	while(e--)
	{
		cin>>x>>y>>w;
		adj[x].push_back(make_pair(y,w));
	}
	
	dijkstra(adj,n,1);
	
return 0;

}
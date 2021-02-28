/*
 video link : https://www.youtube.com/watch?v=XRH1fqAQZrE&t=225s
*/

#include<bits/stdc++.h>
using namespace std;

struct edges{
    int a,b,w;
};

edges arr[1001];
int parent[1001];
bool comp(edges x,edges y)
{
    if(x.w<y.w)
    {
        return true;
    }
    return false;
}

int find(int a)
{
    if(parent[a]==-1)
    {
        return a;
    }
    else
    {
        return parent[a] = find(parent[a]);
    }
    
}
void merge(int a,int b)
{
    parent[a] = b;
}
int main()
{
    int n,e;
    cout<<"enter the number of vertices and edges\n";
    cin>>n>>e;
    cout<<"enter the two nodes and their weights for "<<e<<" edges\n";
    for(int i=0;i<=n;i++)
    {
        parent[i] = -1;
    }
    for(int i=0;i<e;i++)
    {
        cin>>arr[i].a>>arr[i].b>>arr[i].w;
    }
    sort(arr,arr+e,comp);

    int sum = 0;
    
    for(int i=0;i<e;i++)
    {
        int x = find(arr[i].a);
        int y = find(arr[i].b);
        if(x!=y)
        {
            sum+=arr[i].w;
            merge(x,y);
        }
    }

    cout<<"cost of MST is "<<sum;
    return 0;

}
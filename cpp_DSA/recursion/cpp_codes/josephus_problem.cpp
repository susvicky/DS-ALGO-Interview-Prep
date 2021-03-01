#include<bits/stdc++.h>
using namespace std;


void solve(vector<int>&v,int k,int index,int &ans)
{
    if(v.size()==1)
    {
        ans = v[0];
        return;
    }


    index = (index+k)%v.size();

    v.erase(v.begin()+index);
    solve(v,k,index,ans);
}
int main()
{
    int n,k;
    cout<<"enter the value of the number of people\n";
    cin>>n;
    cout<<"enter the value of k\n";
    cin>>k;
    int ans;
    k--;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
    }
    int index = 0;
    solve(v,k,index,ans);
    cout<<"person standing at "<<ans<<" position will survive\n";
    return 0;
}
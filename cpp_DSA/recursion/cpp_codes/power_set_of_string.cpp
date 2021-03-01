#include<bits/stdc++.h>
using namespace std;
void solve(vector<string>&v,string ip,string op)
{
    if(ip.size()==0)
    {
        v.push_back(op);
        return;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    solve(v,ip,op1);
    solve(v,ip,op2);
    return ;
}


int main()
{
    string s;
    cout<<"enter the string \n";
    cin>>s;
    vector<string>ans;
    string op = "";
    solve(ans,s,op);
    sort(ans.begin(),ans.end());
    cout<<"Power set of the given string is\n";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
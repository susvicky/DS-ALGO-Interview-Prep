#include<bits/stdc++.h>
using namespace std;


void solve(vector<string>&v,int o,int c,string op)
{
    if(o==0 && c==0)
    {
        v.push_back(op);
        return;
    }

    if(o!=0)
    {
        string op1 = op;
        op1.push_back('(');
        solve(v,o-1,c,op1);
    }
    if(c>o)
    {
        string op2 = op;
        op2.push_back(')');
        solve(v,o,c-1,op2);
    }
    return;
}


int main()
{
    int n;
    cout<<"enter the number n\n";
    cin>>n;
    int open = n;
    int close = n;

    string op = "";

    vector<string>ans;
    solve(ans,open,close,op);
    cout<<"Balanced parentheses:\n";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;


void solve(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<"\n";
        return;
    }

    for(int i=l;i<=r;i++)
    {
        swap(s[i],s[l]);
        solve(s,l+1,r);
        swap(s[l],s[i]);
    }
    return;
}


int main()
{
    string s;
    cout<<"enter the string \n";
    cin>>s;
    cout<<"All the permutations are:\n";
    solve(s,0,s.size()-1);
    return 0;
}
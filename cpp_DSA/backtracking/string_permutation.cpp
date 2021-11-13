// question link : https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1
 
//pseudocode

void solve(string s,int l,int r,vector<string>&v)
    {
        if(l>=r)
        {
            v.push_back(s);
            return;
        }
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            solve(s,l+1,r,v);
            swap(s[l],s[i]);
        }
        return;
    }
    
    
    
    
vector<string> permutation(string S)
{
        //Your code here
    vector<string>v;
    solve(S,0,S.size()-1,v);
    sort(v.begin(),v.end());
    return v;
}

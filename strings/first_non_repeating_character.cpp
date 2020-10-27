// link : https://practice.geeksforgeeks.org/problems/non-repeating-character/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    vector<int>v(26,0);
	    
	    for(int i=0;i<n;i++)
	    {
	        v[s[i]-'a']++;
	    }
	    
	    int flag = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(v[s[i]-'a']==1)
	        {
	            flag = 1;
	            cout<<s[i]<<"\n";
	            break;
	        }
	    }
	    
	    if(flag==0)
	    {
	        cout<<"-1\n";
	    }
	    
	    
	}
	return 0;
}
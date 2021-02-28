// link : https://practice.geeksforgeeks.org/problems/find-first-repeated-character/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    
	    vector<int>v(26,0);
	    
	    int flag = 0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(v[s[i]-'a']!=0)
	        {
	            flag = 1;
	            cout<<s[i]<<"\n";
	            break;
	        }
	        else
	        {
	            v[s[i]-'a']++;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"-1\n";
	    }
	    
	}
	return 0;
}
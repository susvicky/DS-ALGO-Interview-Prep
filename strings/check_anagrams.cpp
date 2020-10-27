// link : https://practice.geeksforgeeks.org/problems/anagram/0

#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    
	    vector<int>v(26,0);
	
	    for(int i=0;i<a.size();i++)
	    {
	        v[a[i]-'a']++;
	    }
	    
	    for(int i=0;i<b.size();i++)
	    {
	        v[b[i]-'a']--;
	    }
	    int flag = 1;
	    for(int i=0;i<26;i++)
	    {
	        if(v[i]!=0)
	        {
	            flag = 0;
	            cout<<"NO\n";
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"YES\n";
	    }
	}
	
	
	
	
	return 0;
}


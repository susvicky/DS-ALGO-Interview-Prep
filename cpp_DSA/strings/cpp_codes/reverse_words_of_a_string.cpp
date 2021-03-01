// link : https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0

#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void reverse(string &s,int beg,int end)
    {
        while(beg<end)
        {
            swap(s[beg],s[end]);
            beg++;
            end--;
        }
    }

    
string solve(string s) {
        
        
        //reverse the string
        reverse(s,0,s.size()-1);
        
        
        
        //reversing individual word
        int beg =0;
        int end;
        for(end = 0;end<s.size();end++)
        {
            
            if(s[end]==' ')
            {
                reverse(s,beg,end-1);
                beg = end+1;
            }
        }
 
        //reverse the last word
        end = s.size() -1;
        while(s[end]!=' ')
        {
            end--;
        }
        end++;
        reverse(s,end,s.size()-1);
        
        return s;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	     string s;
	     getline(cin,s);
	     string ans = solve(s);
	     for(int i=0;i<ans.size();i++)
	     {
	         cout<<ans[i]<<" ";
	     }
	     cout<<"\n";
	}
	return 0;
}
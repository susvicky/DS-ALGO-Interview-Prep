//question link:https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1#

//pseudocode

class Solution{
    public:
    
    
    void solve(int *A,vector<string>phone,vector<string>&ans,string op,int pos,int n)
    {
        //base case
        if(pos==n)
        {
            ans.push_back(op);
            return;
        }
        
        //recursive case
        for(char ch:phone[A[pos]])
        {
            op+=ch;
            solve(A,phone,ans,op,pos+1,n);
            op.pop_back();
        }
        return;
    }
    
    
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>phone;
        phone.push_back("0");
        phone.push_back("1");
        phone.push_back("abc");
        phone.push_back("def");
        phone.push_back("ghi");
        phone.push_back("jkl");
        phone.push_back("mno");
        phone.push_back("pqrs");
        phone.push_back("tuv");
        phone.push_back("wxyz");
        vector<string>ans;
        string op = "";
        solve(a,phone,ans,op,0,N);
        return ans;
    }
};


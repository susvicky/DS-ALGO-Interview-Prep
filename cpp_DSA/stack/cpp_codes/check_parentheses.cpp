// link : https://leetcode.com/problems/valid-parentheses/submissions/

//pseudocode


    bool isValid(string s) {
        stack<char>stck;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stck.push(s[i]);
            }
            else
            {
                if(stck.empty())
                {
                    return false;
                }
                if(s[i]==')')
                {
                    if(stck.top()=='(')
                    {
                        stck.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(s[i]=='}')
                {
                    if(stck.top()=='{')
                    {
                        stck.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(s[i]==']')
                {
                    if(stck.top()=='[')
                    {
                        stck.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
                
        }
        
        if(stck.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
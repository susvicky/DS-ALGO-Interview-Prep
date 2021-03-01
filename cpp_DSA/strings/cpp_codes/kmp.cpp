#include<bits/stdc++.h>
using namespace std;

int reset[100001];

void set_reset_table(string p)
{
    int i =0;
   int  j = -1;
    reset[0] = -1;

    while(i<=p.size())
    {
        while(j>=0 && p[i]!=p[j])
        {
            j = reset[j];
        }
        i++;
        j++;
        reset[i] = j;
    }
}




void kmp(string s,string p)
{
    set_reset_table(p);
    int i = 0,j = 0;

    while(i<s.size())
    {
        while(j>=0 && s[i]!=p[j])
        {
            j = reset[j];
        }
        i++;j++;
        if(j==p.size())
        {
            cout<<"pattern found at position "<<i-j;
            cout<<"\n";
            j = reset[j];
        }
    }
}



int main()
{
    string s,p;
    cout<<"enter the string and the pattern\n";
    cin>>s>>p;
    
    kmp(s,p);
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int>v,int n)
{
    long int msf = INT_MIN, meh = INT_MIN;

    for(int i=0;i<n;i++)
    {
        meh+=v[i];
        if(meh<v[i])
        {
            meh = v[i];
        }
        if(meh>msf)
        {
            msf = meh;
        }
    }
    return msf;
}


int main()
{
    int n;
    cout<<"enter the number of elements\n";
    cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans = kadane(v,n);
    cout<<"Maximum subarray sum = "<<ans<<'\n';
return 0;
}
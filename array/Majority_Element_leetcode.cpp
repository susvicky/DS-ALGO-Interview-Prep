/*
    https://leetcode.com/problems/majority-element/
*/



#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int>& nums) 
{
    map<int, int>mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }    
    for(auto i:mp)
    {
        if(i.second>floor(nums.size()/2))
        {
            return i.first;
        }
    }
    return 0;

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
    int ans = majority_element(v);
    cout<<"Majority element= "<<ans<<'\n';
return 0;
}
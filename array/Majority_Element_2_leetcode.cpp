/*
   https://leetcode.com/problems/majority-element-ii/
*/



#include<bits/stdc++.h>
using namespace std;

vector<int>majority_element(vector<int>& nums) 
{
    vector<int>ans;
    int ele1 = -1,ele2 = -1,cnt1 = 0,cnt2 = 0;
    int n = nums.size();

    for(int i=0;i<n;i++)
    {
        if(nums[i]==ele1)
        {
            cnt1++;
        }
        else if(nums[i]==ele2)
        {
            cnt2++;
        }
        else if(cnt1==0)
        {
            ele1 = nums[i];
            cnt1++;
        }
        else if(cnt2==0)
        {
            ele2 = nums[i];
            cnt2++;
        }
        else 
        {
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0;
    cnt2 = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==ele1)
        {
            cnt1++;
        }
        else if(nums[i]==ele2)
        {
            cnt2++;
        }

    }
        if(cnt1>floor(nums.size()/3))
        {
            ans.push_back(ele1);
        }
        if(cnt2>floor(nums.size()/3))
        {
            ans.push_back(ele2);
        }

return ans;


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
    vector<int>ans = majority_element(v);
    cout<<"Majority elements are = "<<'\n';
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;


void bubble_sort(vector<int>&v,int n)
{
    int flag =0;
    for(int i=1;i<n;i++)
    {
        flag = 0;
        for(int j = 0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag = 1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int n,x;
    cout<<"enter the size of array\n";
    cin>>n;
    vector<int>v;
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"sorted array is:\n";
    bubble_sort(v,n);
    return 0;
}
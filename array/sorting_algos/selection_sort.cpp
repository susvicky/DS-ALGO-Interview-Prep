#include<bits/stdc++.h>
using namespace std;


void selection_sort(vector<int>&v,int n)
{
    
    int min_index;
    for(int i=0;i<n;i++)
    {
        min_index = i;
        for(int j = i+1;j<n;j++)
        {
            if(v[j]<v[min_index])
            {
                min_index = j;
            }
        }
        swap(v[i],v[min_index]);
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
    selection_sort(v,n);
    return 0;
}
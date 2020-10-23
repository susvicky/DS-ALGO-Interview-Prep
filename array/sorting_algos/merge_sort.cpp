#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&A,vector<int>&left,vector<int>&right)
{
    int nl =left.size(),nr = right.size();
    int i = 0,j = 0,k = 0;
    while(i<nl && j<nr)
    {
        if(left[i]<right[j])
        {
            A[k] = left[i];
            i++;
            k++;
        }
        else
        {
            A[k] = right[j];
            j++;
            k++;
        }
        
    }
    while(i<nl)
    {
        A[k] = left[i];
        i++;
        k++;
    }
    while(j<nr)
    {
        A[k] = right[j];
        j++;
        k++;
    }


}

void merge_sort(vector<int>&v,int n)
{
    if(n<2)
    {
        return;
    }
    vector<int>left,right;
    int mid = n/2;
    for(int i=0;i<mid;i++)
    {
        left.push_back(v[i]);
    }
    for(int i=mid;i<n;i++)
    {
        right.push_back(v[i]);
    }

    merge_sort(left,left.size());
    merge_sort(right,right.size());
    merge(v,left,right);
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
    merge_sort(v,n);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
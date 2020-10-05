#include<bits/stdc++.h>
using namespace std;


void insertion_sort(vector<int>&v,int n)
{
    int hole,val;

    for(int i=1;i<n;i++)
    {
        hole = i;
        val = v[i];
        while(hole>0 && v[hole-1]>val)
        {
            v[hole] = v[hole-1];
            hole--;
        }
        v[hole] = val;
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
    insertion_sort(v,n);
    return 0;
}
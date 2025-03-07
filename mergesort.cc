#include<iostream>
#include<vector>
using namespace std;

void mergesort(vector<int>&vec,int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(vec,l,mid);
        mergesort(vec,mid+1,r);
        merge(vec,l,mid,r);
    }
}
void merge(vector<int>&vec,int l,int mid,int r)
{
    int n1=mid-l+1,n2=r-mid;
    int l[n1],r[n2];
    int k=0;
    for(int i=l;i<=mid;i++)
    {
        l[k++]=vec[i];
    }
}
int main()
{
    int n,x;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    int l=0,r=n-1;
    mergesort(vec,n);
    for(const int &a:vec)
    {
        cout<<a;
    }
}
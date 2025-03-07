#include<iostream>
#include<vector>
using namespace std;
int bsearch(vector<int>vec,int l,int h,int target)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(vec[mid]==target)
        return mid;
        else if(vec[mid]>target)
        return bsearch(vec,l,mid-1,target);
        else if(vec[mid]<target)
        return bsearch(vec,mid+1,h,target);
    }
}
int main()
{
    int n,x,target,l,h;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    l=0;
    h=n-1;
    cin>>target;
    cout<<bsearch(vec,l,h,target);
}
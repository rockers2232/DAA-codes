#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>&vec,int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(vec[j]<vec[min])
            {
                min=j;
            }
        }
        if(i!=min) 
        swap(vec[min],vec[i]);
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
    selectionsort(vec,n);
    for(const int &a:vec)
    {
        cout<<a;
    }
}
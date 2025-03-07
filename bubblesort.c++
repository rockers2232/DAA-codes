#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>&vec,int n)
{
    int swapcount=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(vec[j]>vec[j+1])
            {
                swap(vec[j],vec[j+1]);
                swapcount++;
            }
        }
        if(swapcount==0) break;
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
    bubblesort(vec,n);
    for(const int &a:vec)
    {
        cout<<a;
    }
}
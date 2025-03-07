#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&vec,int n)
{
    int j=0;
    for(int i=1;i<n;i++)
    {
        int temp=vec[i];
        j=i-1;
        while(j>=0)
        {
            if(vec[j]>temp)
            {
                vec[j+1]=vec[j];
                j--;
            }
            else
            break;
        }
        vec[j + 1] = temp;
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
    insertionsort(vec,n);
    for(const int &a:vec)
    {
        cout<<a;
    }
}
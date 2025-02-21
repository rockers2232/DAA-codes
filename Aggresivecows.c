#include<stdio.h>
#include<stdbool.h>
bool isPossible(int arr[],int midist,int k,int n)
{
    int cow=1;
    int sindex=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-sindex>=midist)
        {
            cow++;
            sindex=arr[i];
            if(cow>=k) return true;
        }
    }
    return false;
}
int main()
{
    int arr[100],n,k;
    printf("Enter size of the array:- ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the no. of cows: ");
    scanf("%d",&k);
    if (k > n) 
    { 
        printf("Invalid input: More cows than stalls!"); 
        return 0; 
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int low=1;
    int high=arr[n-1]-arr[0];
    int mid,res;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(isPossible(arr,mid,k,n))
        {
            res=mid;
            low=mid+1;
        }
        else
        high=mid-1;
    }
    printf("result = %d",res);
    return 0;
}
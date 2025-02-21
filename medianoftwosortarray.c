#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],n1,n2;
    printf("Enter size of array1 and array2: ");
    scanf("%d %d",&n1,&n2);
    printf("Enter the sorted elements in array1: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the sorted elements in array2: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i <n2; i++)
    {
        arr1[n1+i]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++)
    {
        for(int j=i+1;j<n1+n2;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    if((n1+n2)%2==0)
    {
        int median=(arr1[(n1+n2)/2]+arr1[((n1+n2)/2)-1])/2;
        printf("%d",median);
    }
    else
    {
        int median=arr1[(n1+n2)/2];
        printf("%d",median);
    }
    return 0;
}
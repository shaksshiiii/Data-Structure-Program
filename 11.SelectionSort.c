#include<stdio.h>
void main()
{
    int n,min;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        min=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {   
                arr[i]=arr[j];
                arr[j]=min;
                min=arr[i];
            }

        }
    }
    printf("sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
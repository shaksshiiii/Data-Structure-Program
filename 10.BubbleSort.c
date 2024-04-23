#include<stdio.h>
void main()
{
    int n,temp;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
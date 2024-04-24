#include<stdio.h>
int num;
void main()
{
    int n,choice;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("select how you want to enter data\n1.ascending\n2.descending\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        int temp;
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
        printf("sorted array:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        } 
    }
    else if(choice==2)
    {
        int temp;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        printf("sorted array:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    else
        printf("invalid input.");
}

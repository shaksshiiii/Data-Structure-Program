#include<stdio.h>
void main()
{
    int n,choice;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("select how you want to sort the array\n1.ascending\n2.descending\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        for(int i=0;i<n-1;i++)
        {
            int min=arr[i];
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
    else if(choice==2)
    {
        for(int i=0;i<n-1;i++)
        {
            int max=arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>max)
                {
                    arr[i]=arr[j];
                    arr[j]=max;
                    max=arr[i];
                }

            }
        }
        printf("sorted array:");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
}

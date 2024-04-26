//implementation of insertion sort
#include <stdio.h>
void main() {
    int n,temp,choice; 
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("1.Ascending\n2.Descending\nSelect how you want to Sort the Array:");
    scanf("%d",&choice);
    if(choice==1)
    {
        for(int i=0;i<n-1;i++)
        {   
            int start=arr[i+1];
            for(int j=i;j>=0;j--)
            {
                if(start<arr[j])
                {   
                    //swaping
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                    //pointing start to swaped position
                    start=arr[j];
                }
                
            }
        }
    }
    else if(choice==2)
    {
        for(int i=0;i<n-1;i++)
        {   
            int start=arr[i+1];
            for(int j=i;j>=0;j--)
            {
                if(start>arr[j])
                {   
                    //swaping
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                    //pointing start to swaped position
                    start=arr[j];
                }
                
            }
        }
    }
    else
        printf("wrong input");
    printf("Sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
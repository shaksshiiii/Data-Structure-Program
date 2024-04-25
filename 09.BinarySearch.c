#include<stdio.h>
void main()
{
    int n,s,lb,ub,mid,flag=0,temp;
    char ch;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
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
    //printing sorted array
    printf("Sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    do{
        flag=0;
        printf("Enter the search element:");
        scanf("%d",&s);
        lb=0;
        ub=n-1;
        while(lb<=ub)
        {   mid=(lb+ub)/2;
            if(arr[mid]==s)
            {
                flag=1;

                printf("search element found at %d position in the sorted array\n\n",mid+1);
                break;
            }
            else if(arr[mid]<s)
            {
                lb=mid+1;
            }
            else if(arr[mid]>s)
            {
                ub=mid-1;
            }
        }
    if(flag==0)
    printf("search element not found\n\n");
    printf("do you want to continue searching(y/n):");
    scanf(" %c",&ch);
    }while(ch=='y'|| ch=='Y');
    printf("************EXITED*************");
}

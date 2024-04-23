#include<stdio.h>
void main()
{
    int n,s,lb,ub,mid,flag=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array. NOTE:the array should be sorted");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the search element");
    scanf("%d",&s);
    lb=0;
    ub=n-1;
    while(lb<=ub)
    {   mid=(lb+ub)/2;
        if(arr[mid]==s)
        {
            flag=1;
            printf("serch element found at %d position",mid+1);
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
        printf("search element not found");
}
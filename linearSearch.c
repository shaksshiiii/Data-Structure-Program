#include<stdio.h>
void main()
{
    int n,s,flag=0;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elemnt you want to search");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
       if(arr[i]==s)
       {
          flag=1;
          printf("search element found at %d pos",i+1);
          break;
       }
    }
    if(flag==0)
      printf("search element not found ");
}
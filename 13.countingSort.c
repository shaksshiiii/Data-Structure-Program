//implementing counting algorithm: counting sort algorithm is used for sorting small and positive integers
// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int size,count=0;
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size],outputArray[size];
    printf("enter the elements of array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int countingArray[max+1];
    for(int i=0;i<size;i++)
    {
        countingArray[i]=0;
    }
    int c=0;
    for(int j=0;j<=max;j++)
    {
        count=0;
        for(int i=0;i<size;i++)
        {
           if(arr[i]==c)
           {
               count++;
           }
        }
        countingArray[c]=count;
        c++;
    }
    printf("\n");
    for(int i=1;i<size;i++)
    {
        countingArray[i]=countingArray[i]+countingArray[i-1];
    }
    int x1,x2,x3;
    for(int i=size-1;i>=0;i--)
    {
        x1=arr[i];
        x2=countingArray[x1];
        x3=x2-1;
        outputArray[x3]=x1;
        countingArray[x1]=countingArray[x1]-1;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",outputArray[i]);
    }
}


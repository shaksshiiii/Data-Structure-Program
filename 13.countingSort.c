//implementing counting algorithm: counting sort algorithm is used for sorting small and positive integers
#include <stdio.h>
int main() {
    int size,count=0;
    printf("enter the size of array");
    scanf("%d",&size);
    int arr[size],outputArray[size]; //output array will be used to later to store sorted elements
    printf("enter the elements of array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }  
    //finding maximum number in the given array
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    //initializing all values in countingArray to zero
    int countingArray[max+1];
    for(int i=0;i<size;i++)
    {
        countingArray[i]=0;
    }
    int c=0;
    //writing the frequency of each element in the given array in thier respecitve index
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
    // doing prefix sum or cummulative sum
    for(int i=1;i<size;i++)
    {
        countingArray[i]=countingArray[i]+countingArray[i-1];
    }
    int x1,x2,x3;
    //storing value in outputArray
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

// this algorithm has time complexity of O(M+N), where M is size of given array and N is size of countingArray

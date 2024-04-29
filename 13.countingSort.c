//implementing counting algorithm: counting sort algorithm is used for sorting small and positive integers
#include <stdio.h>
int main() {
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    
    int arr[size],outputArray[size];
    //output array will be used to later to store sorted elements
    
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
    for(int i=0;i<max+1;i++)
    {
        countingArray[i]=0;
    }
    
    //writing the frequency of each element in the given array in thier respecitve index
    for(int j=0;j<size;j++)
    {
         countingArray[arr[j]]++;
    }
    
    // doing prefix sum or cummulative sum
    for(int i=1;i<=max;i++)
    {
        countingArray[i]=countingArray[i]+countingArray[i-1];
    }
   
    //storing value in outputArray
    for(int i=size-1;i>=0;i--)
    {
       outputArray[--countingArray[arr[i]]]=arr[i];
    }
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",outputArray[i]);
    }
}

// this algorithm has time complexity of O(M+N), where M is size of given array and N is size of countingArray

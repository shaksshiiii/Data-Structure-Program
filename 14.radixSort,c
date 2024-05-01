#include<stdio.h>
int Fmax(int a[],int size)
{
    int max=a[0];
    for(int i=1;i<size;i++)
    {
         if(max<a[i])
         max=a[i];
    }
    return max;
}

void count(int a[], int size,int pos)
{  
    int outputArray[size];
    int countArray[10]={0};
    for(int i=0;i<size;i++) {
        countArray[(a[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++) {
        countArray[i]=countArray[i]+countArray[i-1];
    }
    for(int i=size-1;i>=0;i--){
        outputArray[--countArray[(a[i]/pos)%10]]=a[i];
    }
    for(int i=0;i<size;i++){
        a[i]=outputArray[i];
    }
}

void radixSort(int a[],int size)
{
    int m=Fmax(a,size);
    int pos=1;
    while(m/pos!=0)
    {
        count(a,size,pos);
        pos*=10;
    }
    for(int i=0;i<size;i++)
    {
         printf("%d ",a[i]);
    }
}

void main()
{
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int a[size];
    printf("enter the elements of the array");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    radixSort(a,size);
}
//to find the frequency of even numbers in a ,trix
#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the number of rows and columns in a matirx");
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    printf("enter the elements in the matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int frequency_even=0,frequency_odd=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]%2==0)
               frequency_even++;
            else
               frequency_odd++;
        }
    }
    printf("the frequency of even number and odd number in the matrix is %d and %d",frequency_even,frequency_odd);
}
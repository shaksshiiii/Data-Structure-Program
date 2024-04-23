//to find the sum of elements of each row of a matrix
#include<stdio.h>
void main()
{
    int n,m;
    printf("enter rows and columns of a matrix");
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    printf("enter elemnts of a matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=sum+matrix[i][j];
        }
        printf("sum of elemnts in %d row is %d\n",i+1,sum);  //i+1 will give the right row as i starts from 0
        sum=0;
    }
}
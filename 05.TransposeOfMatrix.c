//to find th transpose of a matrix
#include<stdio.h>
void main()
{
    int m,n;
    printf("enter the rows and column of a matrix");
    scanf("%d%d",&m,&n);
    int matrix[m][n],mtrans[m][n];
    printf("enter elements in  matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mtrans[i][j]=matrix[j][i];
        }
    }
    printf("transpose of the given matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\n",mtrans[i][j]);
        }
        printf("\n");
    }

}
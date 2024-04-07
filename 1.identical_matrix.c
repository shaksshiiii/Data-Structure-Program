//to check whether two matrix are identical or not
#include<stdio.h>
void main()
{
    int m,n,p,q,c=0;
    printf("enter rows and columns of the first matrix");
    scanf("%d%d",&m,&n);
    printf("enter rows and columns of the second matrix");
    scanf("%d%d",&p,&q);
    if(m==p && n==q)
    {
    int matrix1[m][n],matrix2[m][n];
    printf("enter the elements in first matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the elements in second matrix");
    for(int i=0;i<m;i++)
    {<
        for(int j=0;j<n;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix1[i][j]!=matrix2[i][j])
            {
                c++;
            }
        }
    }
    if(c==0)
        printf("matrix are identical");
    else 
        printf("matrix are not identical");
    }
    else{
        printf("matrix can not be identical as the order is not same");
    }
}

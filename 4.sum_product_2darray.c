//To implement addition and multiplication of two 2D arrays.
#include<stdio.h>
void main()
{
    int m,n;
    printf("enter rows and columns of the first matrix");
    scanf("%d%d",&m,&n);
    int p,q;
    printf("enter rows and columns of the second matrix");
    scanf("%d%d",&p,&q); 
    int matrix1[m][n],matrix2[p][q],sum[m][n],multi[m][q]; 
    printf("enter the elements in the first matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the elements in the second matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    int choice;
    printf("enter \n1 for sum\n2 for multiplication");
    scanf("%d",&choice);
    if(choice==1)
    {   
        if(m==p && n==q)
        {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }
        printf("sum of both matrix is :\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",sum[i][j]);
            }
            printf("\n");
        }
        }
        else
          printf("sum is not possible as the order of the matrix is not same");
    }
    else if(choice==2)
    {
        if(n==p)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                     multi[i][j]=0;
                     for(int k=0;k<q;k++ )
                     {
                      multi[i][j]=multi[i][j]+matrix1[i][k]*matrix2[k][j];
                     }
                
                }
            }
        printf("product of both matrix is :\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",multi[i][j]);
            }
            printf("\n");
        }
        }
        else{
            printf("product is not possible");
        }
            
        }
        
    }


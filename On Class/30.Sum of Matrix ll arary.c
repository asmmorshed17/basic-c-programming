// Sum of Matrix :
#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],Sum[10][10],row,col,i,j ;
    printf("Enter the row and column of these matrix: ");
    scanf("%d%d",&row,&col);

    // input first matrix:
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    // input second matrix:
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    // processing:

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Summation Matrix:
    printf("Summation Matrix is here: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",Sum[i][j]);
        }
        printf("\n");
    }

}


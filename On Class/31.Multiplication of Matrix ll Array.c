#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],Mul[10][10],row1,col1,row2,col2,i,j ;
    printf("Enter the row and column of first matrix: ");
    scanf("%d %d",&row1,&col1);

    printf("Enter the row and column of second matrix: ");
    scanf("%d %d",&row2,&col2);

    while(col1!=row2)
    {
        printf("Hello Sir! for multiplication, the column of first matrix and row of second matrix must be equal.\n");
        printf("Enter the row and column of first matrix: ");
        scanf("%d %d",&row1,&col1);
        printf("Enter the row and column of second matrix: ");
        scanf("%d %d",&row2,&col2);
    }

    // input first matrix:
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    // input second matrix:
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][     rrrrj]);
        }
    }

    // processing of multiplication :




    // Showing Multiplications Matrix :
    printf("The Resultant Matrix: \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
           printf("%d\t",Mul[i][j]);
        }
        printf("\n");
    }
}

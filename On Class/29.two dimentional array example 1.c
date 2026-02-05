// two dimentional array input and output :
#include<stdio.h>
int main()
{
    int A[10][10],row,col,i,j ;
    printf("Enter the row and column of these matrix: ");
    scanf("%d%d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            printf("%d",A[i][j]);
        }
    }
}

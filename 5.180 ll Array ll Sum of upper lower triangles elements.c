#include<stdio.h>
int main()
{
    int A[4][4] ,i,j,row,col,upperSum=0,lowerSum=0 ;
    printf("Enter the row and col for this matrix: ");
    scanf("%d %d",&row,&col);
    while(row!=col)
    {
        printf("Error! this must be a square Matrix such that the row and col are must be equal\n");
         printf("Enter the row and col for this matrix: ");
        scanf("%d %d",&row,&col);
    }

    // Scanning the Matrix:
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          printf("A[%d][%d] = ",i,j);
          scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // printing the matrix:
    printf("\nA = ");
     for(i=0;i<row;i++)
    { printf("\t");
        for(j=0;j<col;j++)
        {
          printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // Mechanism of Upper and lower triangles elements Summation :
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }
            if(i>j)
            {
                lowerSum = lowerSum + A[i][j] ;
            }

        }
    }

    printf("\nSum of Upper Triangle Elements Sum = %d\n",upperSum);
     printf("Sum of Lower Triangle Elements Sum = %d\n",lowerSum);
}

/* Enter the row and col for this matrix: 3 2
Error! this must be a square Matrix such that the row and col are must be equal
Enter the row and col for this matrix: 3 3
A[0][0] = 1
A[0][1] = 2
A[0][2] = 3

A[1][0] = 4
A[1][1] = 5
A[1][2] = 6

A[2][0] = 7
A[2][1] = 8
A[2][2] = 9


A =     1 2 3
        4 5 6
        7 8 9

Sum of Upper Triangle Elements Sum = 11
Sum of Lower Triangle Elements Sum = 19  */

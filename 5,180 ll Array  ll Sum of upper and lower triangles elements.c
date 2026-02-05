#include<stdio.h>
int main()
{
    int A[3][3],i,j,upperSum=0,lowerSum=0 ;

    // getting the elements for the matrix
    printf("\nenter the elements for the matrix \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]=  ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("\nEntered Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //Sum of upper and lower triangle elements :
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }

            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }

    printf("\nSum of Upper Triangle elements = %d \n",upperSum);
    printf("\nSum of Lower Triangle elements = %d \n",lowerSum);
}


/*
enter the elements for the matrix
A[0][0]=  1
A[0][1]=  2
A[0][2]=  3

A[1][0]=  4
A[1][1]=  5
A[1][2]=  6

A[2][0]=  7
A[2][1]=  8
A[2][2]=  9


Entered Matrix
1 2 3
4 5 6
7 8 9

Sum of Upper Triangle elements = 11

Sum of Lower Triangle elements = 19
*/

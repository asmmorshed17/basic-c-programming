#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0;

    // getting the elements for the matrix
    printf("\nEnter the element for the matrix: \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    // Printing the matrix -
    printf("Entered Matrix:  \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    // Sum of Diagonal elements
    printf("diagonal elements : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
              sum = sum + A[i][j];
            }
        }

    }


    printf("\nSum of diagonal elements = %d \n\n",sum);
}

/*
Enter the element for the matrix:

A[0][0]= 1
A[0][1]= 2
A[0][2]= 3

A[1][0]= 4
A[1][1]= 5
A[1][2]= 6

A[2][0]= 7
A[2][1]= 8
A[2][2]= 9

Entered Matrix:

1 2 3
4 5 6
7 8 9
diagonal elements : 1 5 9
Sum of diagonal elements = 15
*/

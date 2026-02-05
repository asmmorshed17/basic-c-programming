#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfCols ;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    //Scanning A matrix

    printf("Enter elements of A matrix :\n");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Scanning B matrix

    printf("\n\nEnter elements of B matrix :\n");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

   // Printing A matrix
   printf("\nA = ");

   for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
         printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    // Printing B matrix
   printf("\nB = ");

   for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
         printf("%d ",B[i][j]);
        }
        printf("\n");
    }

 // Adding the matrix :
 for(i=0;i<numberOfRows;i++)
 {
     for(j=0;j<numberOfCols;j++)
     {
        C[i][j] = A[i][j] + B[i][j] ; // For Substraction just replace by - this line
     }
 }

 // Printing C matrix :
 printf("\nA+B= ");      // For Substraction the change here : A-B=
 for(i=0;i<numberOfRows;i++)
 {
     printf("\t");
     for(j=0;j<numberOfCols;j++)
     {
         printf("%d  ",C[i][j]);
     }
    printf("\n");

 }


    return 0;
}


/* output :
Enter the number of rows and cols : 2
2
Enter elements of A matrix :
A[0][0]= 3
A[0][1]= 4

A[1][0]= 2
A[1][1]= 1



Enter elements of B matrix :
B[0][0]= 5
B[0][1]= 3

B[1][0]= 1
B[1][1]= 4

A =     3 4
        2 1

B =     5 3
        1 4

 A + B =        8 7
                3 5     */

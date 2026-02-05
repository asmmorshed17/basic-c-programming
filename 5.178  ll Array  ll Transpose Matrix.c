#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10] ,i,j,row,col;

    printf("Enter number of rows and columns for the matrix : ");
    scanf("%d %d", &row,&col);

    //getting the elements for the matrix :
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // transpose matrix :
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]= A[i][j];
        }
    }



  // Printing the matrix :
  printf("\nEntered Matrix \n");
  for(i=0;i<row;i++)
  {
      for(j=0;j<col;j++)
      {
          printf("%d ",A[i][j]);
      }
      printf("\n");
  }


  //printing transpose Matrix

  printf("\nTranspose matrix :\n\n");
  for(i=0;i<col;i++)
  {
      for(j=0;j<row;j++)
      {
          printf("%d ",transpose[i][j]);
      }
     printf("\n");
  }


}


/*
Enter number of rows and columns for the matrix : 3 2
A[0][0]= 1
A[0][1]= 2

A[1][0]= 3
A[1][1]= 4

A[2][0]= 5
A[2][1]= 6


Entered Matrix
1 2
3 4
5 6

Transpose matrix :

1 3 5
2 4 6
*/

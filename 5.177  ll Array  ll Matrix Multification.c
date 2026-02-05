#include<stdio.h>
int main()
{
    int first[10][10], second[10][10],result[10][10],r1,r2,c1,c2,i,j,k, sum=0 ;

    printf("Enter rows and column for first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for Second matrix :");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!! Column of first matrix not equal to row of second matrix \n");

        printf("Enter rows and column for first matrix : ");
        scanf("%d %d",&r1,c1);

        printf("Enter rows and column for Second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    // taking input for first matrix :
    printf("Enter elements of first matrix : \n");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
       {
           printf("first[%d][%d]=",i,j);
           scanf("%d",&first[i][j]);
       }
       printf("\n");
    }

      // taking input for second matrix :
    printf("Enter elements of second matrix : \n");
    for(i=0;i<r2;i++)
    {
       for(j=0;j<c2;j++)
       {
           printf("second[%d][%d]=",i,j);
           scanf("%d",&second[i][j]);
       }
       printf("\n");
    }

                                      // m x n ---  p x q ==>m x q
    // Multiplying Matrix :            // r1 x c1 --- r2 x c2 ==> r1 x c2
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)           // col1 = row2
            {
                sum = sum + first[i][k]*second[k][j];
            }
            result[i][j] = sum ;
            sum = 0 ;
        }
    }



  // printing first matrix :
  printf("\nFirst Matrix: \n");
  for(i=0;i<r1;i++)
  {
      printf("\t");
      for(j=0;j<c1;j++)
      {
          printf("%d ",first[i][j]);
      }
      printf("\n");
  }

// printing second matrix :
  printf("\nSecond Matrix: \n");
  for(i=0;i<r2;i++)
  {
      printf("\t");
      for(j=0;j<c2;j++)
      {
          printf("%d ",second[i][j]);
      }
      printf("\n");
  }

  // printing Result(multiplying matrix) matrix

printf("\nResult Matrix = \n");
for(i=0;i<r1;i++)
{  printf("\t");
    for(j=0;j<c2;j++)
    {
        printf("%d ",result[i][j]);
    }
    printf("\n");
}


}


/*
Enter rows and column for first matrix :3
2
Enter rows and column for Second matrix :2
3
Enter elements of first matrix :
first[0][0]=
1
first[0][1]=2

first[1][0]=3
first[1][1]=4

first[2][0]=5
first[2][1]=6

Enter elements of second matrix :
second[0][0]=1
second[0][1]=2
second[0][2]=3

second[1][0]=4
second[1][1]=5
second[1][2]=6


First Matrix:
        1 2
        3 4
        5 6

Second Matrix:
        1 2 3
        4 5 6

Result Matrix =
        9 12 15
        19 26 33
        29 40 51

Process returned 0 (0x0)   execution time : 30.738 s
Press any key to continue.
*/

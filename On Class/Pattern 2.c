#include<stdio.h>
int main()
{
    int row,col,i,j ;
    printf("Enter row & col : ");
    scanf("%d %d",&row,&col);

    for(i=1;i<=row;i++)
    {
     for(j=1;j<=col;j++)
     {
         printf("*");
     }
     printf("\n");
    }
}
/* Enter row & col : 3 6
******
******
******     */

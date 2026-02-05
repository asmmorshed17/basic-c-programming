//5.149 ll Pattern ll Type 5 ll code 1
#include<stdio.h>
int main()
{
    int n,row,col ;
    printf("Enter N: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
    for(col=1;col<=row;col++)
    {
        printf(" %d",col);

    }
    printf("\n");
    }
}

/* Enter N: 5
 1 2 3 4 5
   1 2 3 4
     1 2 3
       1 2
         1   */


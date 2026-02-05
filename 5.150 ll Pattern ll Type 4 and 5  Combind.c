#include<stdio.h>
int main()
{
    int n,col,row ;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            printf(" %c",col+64);
        }
        printf("\n");
    }

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            printf(" %c",col+64);
        }
        printf("\n");

    }
    return 0 ;
}

/*  Enter N : 5
         A
       A B
     A B C
   A B C D
 A B C D E
 A B C D E
   A B C D
     A B C
       A B
         A       */


#include<stdio.h>
int main()
{
    int row,col,n ;
    printf("Enter n : ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }
}
/* Enter n : 6

F F F F F F
E E E E E
D D D D
C C C
B B
A              */

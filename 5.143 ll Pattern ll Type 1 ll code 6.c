#include<stdio.h>
int main()
{
    int n,row,col ;
    printf("Enter n = ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }
}
/* Enter n = 7
A
B B
C C C
D D D D
E E E E E
F F F F F F
G G G G G G G
*/

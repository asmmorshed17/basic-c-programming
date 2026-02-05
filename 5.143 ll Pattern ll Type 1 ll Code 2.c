#include<stdio.h>
int main()
{
    int n,row,col ;
    printf("Enter the N = ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
}
/* Enter the N = 4
1
2 2
3 3 3
4 4 4 4   */

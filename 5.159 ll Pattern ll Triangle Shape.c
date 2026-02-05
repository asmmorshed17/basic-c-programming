#include<stdio.h>
int main()
{
    int n,row,col ;
    printf("Enter N:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col==1 || row==n || row==col)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0 ;
}
/*Enter N:5

*
**
* *
*  *
*****

*/

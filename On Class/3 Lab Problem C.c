//A.S.M.MORSHED
//MUH2425001M
#include<stdio.h>
int main()
{
    int n,j,i ;
    scanf("%d",&n);
int row ;
    for( i=0;i<n;i++)
    {
        row =1 ;
        for( j=0;j<=i;j++)
        {
          printf("%d ",row);
          row = row*(i-j)/(j+1);
        }

        printf("\n");
    }

    return 0;
}

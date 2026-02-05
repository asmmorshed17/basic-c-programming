// Series: 1
#include<stdio.h>
int main()
{
    int n,i,sum=0 ;
    printf("Enter the last number of the Series:  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {  printf("%d + ",i);
        sum = sum  + i ;
    }
    printf("=%d\n",sum);
    getch() ;
}

#include<stdio.h>
int main()
{
    int n,sum = 0 ;
    printf("n=?");
    scanf("%d",&n);

    for(int i=1;i<=n;i+=2)
    {
        sum = sum + i;
        printf("%d + ",i);
    }
    printf(" = %d",sum);
}

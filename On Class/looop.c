#include<stdio.h>
int main()
{
    int n ,sum =0;
    printf("enter any number: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
        sum = sum + i ;

    }
    printf("\narindom jokfol holo = %d",sum);
}

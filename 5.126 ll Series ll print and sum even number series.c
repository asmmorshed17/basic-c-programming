#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("How much Number do you want to see: ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        sum = sum + i ;
        if(i==n || i+2>n)
            printf("%d",i);
        else
            printf("%d + ",i);
    }
    printf(" = %d\n",sum);
    getch();
}


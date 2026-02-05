#include<stdio.h>
int main()
{
    int n ,mul=1;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    { mul = n * i ;
        printf("%d * %d = %d\n",n,i,mul);

    }
}

#include<stdio.h>
int main()
{
    int n,i,mul = 1;
    printf("Enter n = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       mul = mul * i*i ;

    }
   printf("Multification = %d\n",mul);
   return 0 ;

}

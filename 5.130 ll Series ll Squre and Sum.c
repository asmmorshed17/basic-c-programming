// 1^2 + 2^2 + 3 ^2 + 4 ^ 2 + .............n^2
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("How much number do you want to see:  ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + i*i;
      if(i==n || i+1>n)
      {
          printf("%d",i*i);
      }

      else
        printf("%d + ",i*i);
    }
    printf(" = %d\n",sum);
    return 0;
}

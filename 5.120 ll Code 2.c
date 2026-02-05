#include<stdio.h>
int main()
{
    int n,i,sum=0 ;
    printf("Enter the last number of this Series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        sum = sum + i ;
        if(i==n || i+1>n)
           {
               printf("%d",i);
           }
        else
          {
               printf("%d + ",i);
          }
    }
    printf(" = %d",sum);

    return 0 ;
}

// Output :Enter the last number of this Series: 12
//  1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 = 78

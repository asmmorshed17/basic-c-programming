//  1 X 2 X 3  X 4 X ..............X n
#include<stdio.h>
int main()
{
    int n,i,result = 1 ;

    printf("Enter n = ? ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result = result * i ;
        if(i==n || i+1>n)
            printf("%d",i);
        else
        printf("%d X ",i);

    }
   printf(" = %d \n",result );
}

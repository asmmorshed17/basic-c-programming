#include<stdio.h>
int main()
{
    int N ,x;
    scanf("%d",&N);
    int temp = N;

    if(N%2==0)
    {
        N = N+1 ;
    }
    else
    {
         x = N+2 ;

    }
     printf("%d %d",x,N-x);
}

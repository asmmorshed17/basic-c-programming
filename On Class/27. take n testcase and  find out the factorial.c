#include<stdio.h>
unsigned long long int fact(int n)
{
    if(n== 0 || n==1)
        return 1 ;
    else
    return n*fact(n-1) ;
}

int main()
{
    int T,i ;
    scanf("%d",&T);
    int X[T];
    for(i=0;i<T;i++)
    {
        scanf("%d",&X[i]);
    }
    for(i=0;i<T;i++)
    {
        X[i]= fact(X[i]);
    }
    for(i=0;i<T;i++)
    {
        printf("%d\n",X[i]);
    }
}
/* 6

2
3
4
5
6
15
.
.
2
6
24
120
720
2004310016
*/

// Print integer 1 to n
#include<stdio.h>
int main()
{
    int i,n ;
    printf("How far do you want to see: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}

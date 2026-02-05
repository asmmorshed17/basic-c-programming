// Print Ever Number
#include<stdio.h>
int main()
{
    int n,i;
    printf("Hello Sir! How far Odd Number do you want to See : ");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
     printf("%d ",i);
    }
}


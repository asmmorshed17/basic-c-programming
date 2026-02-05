// Print Ever Number
#include<stdio.h>
int main()
{
    int n,i;
    printf("Hello Sir! How far Even Number do you want to See : ");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
     printf("%d ",i);
    }
}

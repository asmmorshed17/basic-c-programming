#include<stdio.h>
int main()
{
    float i,n,Sum=0;
    printf("How much number do you want to see: ");
    scanf("%f",&n);

    for(i=1.5 ;i<=n;i++)
    {
        Sum = Sum + i ;
        if(i==n || i+1>n)
            {printf("%.1f",i);}
        else
            {printf("%.1f + ",i);}

    }
    printf(" = %.2f\n",Sum);
    return 0 ;
}

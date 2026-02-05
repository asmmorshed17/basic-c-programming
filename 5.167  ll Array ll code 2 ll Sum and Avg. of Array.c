#include<stdio.h>
int main()
{
    int A[10],sum=0,i ;
    printf("Enter 10 Numbers: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<10;i++)
    {
        sum = sum + A[i];
    }

    printf("The Sum is: %d\n",sum);
    printf("The Average is : %.2f\n",(float)sum/10);
    return 0 ;

}

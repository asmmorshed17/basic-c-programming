#include<stdio.h>
int main()
{
    double base,exp,result ;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter exponent: ");
    scanf("%lf",&exp);

    result = pow(base,exp);
    printf("%.2lf\n",result);
}

/*
another approach :
result = 1;
for(int i=1;i<=exp; i++
{
    result = result * base ;
}
printf("%.2lf\n",result);
*/

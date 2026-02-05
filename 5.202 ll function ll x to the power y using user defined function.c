#include<stdio.h>

void calculate_power(double base,double exp)
{
    double result=1,i ;
    for(i=1;i<=exp;i++)
    {
        result = result * base ;
    }

    printf("%.2lf\n",result);
}
int main()
{
    double base,exp ;

    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter exponent: ");
    scanf("%lf",&exp);
    calculate_power(base,exp);
}

//Enter base: 5
// Enter exponent: 3
// 125.00







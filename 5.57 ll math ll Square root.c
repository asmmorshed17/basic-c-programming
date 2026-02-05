// Square root --- library function = sqrt
#include<stdio.h>
int main()
{
    double num ,result ;
    printf(" enter a number : ");
    scanf("%lf",&num);

    result = sqrt(num);
    printf("The square root of this number = %.2lf\n",result);

}

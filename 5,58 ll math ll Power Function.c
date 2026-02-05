// x raised to the power y (x^y)
// power === library function : pow

#include<stdio.h>
int main()
{
    double  x,y,result ;

    printf("Enter base X = ");
    scanf("%lf",&x);

    printf("Enter power Y = ");
    scanf("%lf",&y);

    result= pow(x,y);
    printf("The Powered Value of this number = %.2lf\n",result);

}

//math : exponential = exp()
#include<stdio.h>
#include<math.h>
int main()
{
    double x ,result ;
    printf(" enter a value : ");
    scanf("%lf",&x);

    result = exp(x);
    printf("exp(%.2lf) = %.4lf\n",x,result);

}
// x = 10.50 ---> Output :  enter a value : 1  ==> exp(1.00) = 2.7183

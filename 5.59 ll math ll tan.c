//math : tan function  = tan()
#include<stdio.h>
#include<math.h>
int main()
{
    double x ,result ;
    printf(" enter a value : ");
    scanf("%lf",&x);

    result = tan(x);
    printf("tan(%.2lf) = %.4lf\n",x,result);

}
// x = 10.50 ---> Output :  enter a value : 1   ==> tan(1.00) = 1.5574



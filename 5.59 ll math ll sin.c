//math : Sin function  = sin()
#include<stdio.h>
#include<math.h>
int main()
{
    double x ,result ;
    printf(" enter a value : ");
    scanf("%lf",&x);

    result = sin(x);
    printf("sin(%.2lf) = %.4lf\n",x,result);

}
// x = 10.50 ---> Output :  enter a value : .35  ==> sin(0.35) = 0.3429


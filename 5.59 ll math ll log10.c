//math : log10()

#include<stdio.h>
#include<math.h>
int main()
{
    double x ,result ;
    printf(" enter a value : ");
    scanf("%lf",&x);

    result = log10(x);
    printf("log10(%.2lf) = %.4lf\n",x,result);

}
// x = 10.50 ---> Output : enter a value : 10  ==> log10(10.00) = 1.0000


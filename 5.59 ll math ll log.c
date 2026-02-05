//math : log()

#include<stdio.h>
#include<math.h>
int main()
{
    double x ,result ;
    printf(" enter a value : ");
    scanf("%lf",&x);

    result = log(x);
    printf("log(%.2lf) = %.4lf\n",x,result);

}
// x = 10.50 ---> Output : enter a value : 10.50 ===> log(10.50) = 2.3514

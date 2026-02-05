// math : ceiling function --> ceil()
#include<stdio.h>
#include<math.h>
int main()
{
    double num,result ;

    printf("Enter the number : ");
    scanf("%lf",&num);

    result = ceil(num);
    printf("ceil(%.3lf)= %.2lf\n",num,result);
}
// Output :Enter the number : 5.433 ---> ceil(5.433)= 6.00
// Output :Enter the number : 5.943 ---> ceil(5.943)= 6.00
// Output : Enter the number : -1.8 ---> ceil(-1.800)= -1.00

// math : floor()
#include<stdio.h>
#include<math.h>
int main()
{
    double num,result ;

    printf("Enter the number : ");
    scanf("%lf",&num);

    result = floor(num);
    printf("floor(%.3lf)= %.2lf\n",num,result);
}
// Output :Enter the number : 5.433 ---> floor(5.433)= 5.00
// Output : Enter the number : 5.943 --- > floor(5.943)= 5.00
// Output : Enter the number : -1.8  ---> floor(-1.800)= -2.00

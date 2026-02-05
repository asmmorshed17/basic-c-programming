// math : trunc()
#include<stdio.h>
#include<math.h>
int main()
{
    double num,result ;

    printf("Enter the number : ");
    scanf("%lf",&num);

    result = trunc(num);
    printf("trunc(%.2lf)= %.2lf\n",num,result);
}
// Output :Enter the number : 5.36  ---> trunc(5.36)= 5.00
// Output :Enter the number : 5.93  ---> trunc(5.93)= 5.00

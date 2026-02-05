// math : round
#include<stdio.h>
#include<math.h>
int main()
{
    double num,result ; 

    printf("Enter the number : ");
    scanf("%lf",&num);

    result = round(num);
    printf("round(%.2lf)= %.2lf\n",num,result);
}
// Output : Enter the number : 5.36  ---> round(5.36)= 5.00
// Output :Enter the number : 7.59   ---> round(7.59)= 8.00

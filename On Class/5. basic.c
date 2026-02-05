#include<stdio.h>
int main()
{
    float number1,number2 ;

    printf("Enter two numbers: ");
    scanf("%f %f",&number1,&number2);

    printf("Sum of two Number: %.2f",number1+number2);
    printf("Substraction of two Number: %.2f\n",number1-number2);
    printf("Multification of two number: %.2f\n",number1*number2);
    printf("Division of two number: %.2f\n",number1/number2);
    printf("Reminder of two number: %2f\n",number1%number2);
}

#include<stdio.h>
int main()
{
    float num1,num2 ;
    char op ;

    printf("Enter an Operator :");
    scanf("%c",&op);

    printf("Enter first number :");
    scanf("%f",&num1);

    printf("Enter second number :");
    scanf("%f",&num2);

    switch(op)
    {
    case '+':
    {
        printf("%f + %f = %.2f\n",num1,num2,num1+num2);
        break;
    }

    case '-':
    {
        printf("%f - %f = %.2f\n",num1,num2,num1-num2);
        break;
    }

    case '*':
    {
        printf("%f * %f = %.2f\n",num1,num2,num1*num2);
        break;
    }

    case '/':
    {
        printf("%f/ %f = %.2f\n",num1,num2,num1/num2);
        break;
    }

    default :
        printf("Invalid Operator\n");


    }

    return 0;
}





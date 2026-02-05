#include<stdio.h>
int main()
{
    int num1,num2 ;
    printf("Enter firsrt number : ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);


    num1 = num1 + num2 ;
    num2 = num1 - num2 ;
    num1 = num1 - num2 ;

    printf("%d\n",num1);
    printf("%d\n",num2);
}

/* num1 = num1 - num2 ;
num2 = num1 + num2 ;
num1 = num2 - num1 ; */
#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,gcd , lcm ,reminder;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter Second number: ");
    scanf("%d",&num2);

    n1=num1 ;
    n2 = num2 ;

    while(num2!=0)
    {
        reminder= n1%n2 ;
        n1=n2 ;
        n2=reminder ;

    }
    gcd= n1 ;
    lcm = (num1*num2)/gcd ;
    printf("GCD = %d\n",gcd);
    printf("LCM = %d\n",lcm);
}






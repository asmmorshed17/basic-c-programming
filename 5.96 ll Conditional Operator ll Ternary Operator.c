#include<stdio.h>
int main()
{
    int num1,num2,large ;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    large = (num1>num2)? num1:num2 ;
    printf("Large Number = %d\n",large);
    return 0;

}

// condition? True Ans. : False Ans.







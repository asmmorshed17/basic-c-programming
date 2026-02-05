// takes three numbers and compare among them in largest number: 
#include<stdio.h>
int main()
{
    int num1,num2,num3 ;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("\n");

    if(num1>num2 && num1>num3)
        printf("%d is Largest Number",num1);
    else if(num2>num1 && num2>num3)
        printf("%d is Largest Number\n",num2);
    else if(num3>num1 && num3>num2)
        printf("%d is Largest Number\n",num3);
    else
        printf("Numbers are Equal\n");

    getch();
}

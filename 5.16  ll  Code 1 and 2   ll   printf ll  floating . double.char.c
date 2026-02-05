/* Write a program that prints an integer ,
a floating point,  double number and character   */
#include<stdio.h>
int main()
{
    int num1=22 , num2= 44;
    float num3=55.7;
    double num4=32.123456789;
    char ch='a';

printf("Number1 is %d \n",num1);
printf("Number2 is %d \n",num2);
printf("Number3 is %.1f \n",num3);
printf("Number4 is %lf \n",num4);
printf("Character is %c",ch);
getch();
}

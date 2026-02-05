// Sum & Average between two integer
#include<stdio.h>
int main()
{
    int num1,num2, num3, sum;
    float avg;
    printf("Enter two integers: ");
    scanf(" %d %d",&num1,&num2);
    sum=num1+ num2;
    printf(" The Sum is= %d \n",sum);
    avg= (float) sum/2 ;   // type casting
    printf("The Average is= %.2f",avg);
    return 0;
}

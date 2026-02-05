// Write a program that calculates the Area of Tri-Angle

#include<stdio.h>
int main()
{
    float base, height , area;

    printf(" Base= ");
    scanf("%f",&base);

    printf("Height= ");
    scanf("%f",&height);

    area= (float)1/2 *base*height ;
    printf("Area of Tri angle = %.2f  \n ",area);
    return 0;
}

/* Area = 0.5 * base * height  ------ Right
  Area = 1/2 * base * height  ------ Wrong
  Area = (float)1/2 * base * height  ------ Right */


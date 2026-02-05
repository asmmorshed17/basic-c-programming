// Area of Rectangle

#include<stdio.h>
int main()
{
    float length, width,area;
    printf("Enter Length : ");
    scanf("%f",&length);
    printf("Enter Width : ");
    scanf("%f",&width);

    area = length * width ;

    printf("Area of Rectangle = %.2f\n",area);

}

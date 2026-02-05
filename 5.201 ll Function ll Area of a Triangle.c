// Function: Area of a triangle
#include<stdio.h>
double area(double b,double h)
{
    return .5*b*h;
}

int main()
{
    double base,height;
    printf("Enter base: ");
    scanf("%lf",&base);
    printf("Enter height: ");
    scanf("%lf",&height);

    printf("The area of this triangle is : %.2lf\n",area(base,height));
}
// Enter base: 5
// Enter height: 4
// The area of this triangle is : 10.00

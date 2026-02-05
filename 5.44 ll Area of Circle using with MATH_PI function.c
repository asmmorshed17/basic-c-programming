// Area of a Circle using with MATH_PI function
#include<stdio.h>
#include<math.h>
int main()
{
    float radious ,area ;

    printf("Enter the radious :");
    scanf("%f",&radious);

    area = M_PI * pow(radious,2);
    printf("Area of Circle = %.2f\n",area);
}

/* float radious , area , PI= 3.1416 ;
   ---------
   ----------
   area =PI * radious * radious ;
   poridi of Circle = 2 * PI * radious */

// C/5 = (F-32)/9  => 9/5 * C = F -32 => (1.8 * C )+ 32 = F
// F = (C*1.8)+32
#include<stdio.h>
int main()
{
    float C,F;

    printf("Enter Centigrade Tempareture : ");
    scanf("%f",&C);

    F = (1.8*C)+32 ;
    printf("Fahrenheit Temperature = %.2f\n",F);
}

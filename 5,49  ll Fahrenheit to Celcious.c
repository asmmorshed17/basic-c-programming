// C/5 = (F-32)/9  => 9/5 * C = F -32 => (1.8 * C ) = F -32
// C = (F-32)/ 1.8

#include<stdio.h>
int main()
{
    float C,F;

    printf("Enter Fahrenheit Tempareture : ");
    scanf("%f",&F);

    C = (F-32)/1.8 ;
    printf(" Centigrade Temperature = %.2f\n",C);
}

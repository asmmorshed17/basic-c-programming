#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);
    printf("The uppercase letter : %c",lower-32);

}
/* A=65 , a=97 --- gap=32 || B=66 , b=98 --- gap=32 ;
  Uppercase + 32 = Lowercase
  .Upper = Lower-32
  .Lower=Upper+32    */

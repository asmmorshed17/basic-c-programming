#include<stdio.h>
int main()
{
    char upper;
    printf("Enter any uppercase letter: ");
    scanf("%c",upper);
    printf("The lowercase letter is : %c",upper+32);
}
/* A=65 , a=97 --- gap=32 || B=66 , b=98 --- gap=32 ;
  Uppercase + 32 = Lowercase
  .Upper = Lower-32
  .Lower=Upper+32    */

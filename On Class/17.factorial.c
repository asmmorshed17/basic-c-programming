// Simple fact :
#include<stdio.h>
int main()
{
    int number,fact =1 ;
    printf("Enter any number: ");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
        fact = fact * i ;
    }
    printf("The factorial of this number = %d\n",fact);
}
// 5! = 5*4*3*2*1
// 5! = 1*2*3*4*5

/* #include<stdio.h>
int main()
{
    int number,fact = 1 ;
    printf("Enter any Number: ");
    scanf("%d",&number);

    for(int i=number ;i>=1;i--)
    {
        fact = fact * i ;
    }
    printf("The factorial of this number is = %d\n",fact);
}
*/
// The factorial of a negative number does not exist.

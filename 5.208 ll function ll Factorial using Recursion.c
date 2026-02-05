// factorial using recursion :
#include<stdio.h>

int factorial(int n)
{
    if(n==1 || n==0)
        return 1 ;
    else
        return n*factorial(n-1);
}

int main()
{
  int num ;
  printf("Enter any integer number : ");
  scanf("%d",&num);

  printf("The factorial of %d is = %d\n",num,factorial(num));
}
// Enter any integer number : 6
// The factorial of 6 is = 720

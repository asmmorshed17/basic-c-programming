//Code 1 : check a number is prime or not
#include<stdio.h>
int main()
{
    int number,count=0 ,i ;
    printf("Enter any number: ");
    scanf("%d",&number);
    if(number<=1)     // reason: 0 and 1 not a Prime Number
    {
        count ++ ;
    }
    for(i=2 ; i<=(number/2); i++)
    {
        if(number%i==0)
        {
            count++ ;
            break ;
        }
    }
    if(count==0)
        printf("The Number %d is a Prime Number\n",number);

    else
        printf("The Number %d is a Not Prime Number\n",number);

}






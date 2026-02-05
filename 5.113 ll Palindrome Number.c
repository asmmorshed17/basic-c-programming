// Palindrome Number :
#include<stdio.h>
int main()
{
    int number,temp,reminder,sum=0,reverseNumber ;

    printf("Enter any Number: ");
    scanf("%d",&number);

    temp = number ;
    while(temp!=0)
    {
       reminder = temp % 10 ;
        sum = sum * 10 + reminder ;
        temp = temp / 10 ;
    }

    reverseNumber = sum ;

    if(number == reverseNumber)
        printf("This is a Palindrome Number \n");

    else
        printf("This is not a Palindrome Number\n");
}

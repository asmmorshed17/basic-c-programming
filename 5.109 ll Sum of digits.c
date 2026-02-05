// Sum of digits :
#include<stdio.h>
int main()
{
    int number,temp ,reminder,sum = 0 ;
    printf("Enter any Number : ");
    scanf("%d",&number);

    temp = number ;

    while(temp!=0)
    {
        reminder = temp % 10 ;
        sum = sum + reminder ;
        temp = temp / 10 ;
    }

    printf("The Sum of digits = %d\n",sum);
    return 0 ;
}

// number : 123  --->. Sum of digits = 1+2+3 = 6

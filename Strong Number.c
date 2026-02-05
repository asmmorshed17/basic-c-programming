#include<stdio.h>
int main()
{
    int number,temp,reminder,i,sum = 0 , fact;
    printf("Enter any integer: ");
    scanf("%d",&number);

    temp = number ;
    while(temp!=0)
    {
        reminder = temp % 10 ;
        fact = 1 ;

        for(i=1;i<=reminder; i++)
        {
            fact = fact * i ;
        }
        sum = sum + fact ;
        temp = temp / 10 ;
    }
    if(sum == number)
        printf("This is a Strong Number\n");

    else
        printf("This is not a Strong Number");
}

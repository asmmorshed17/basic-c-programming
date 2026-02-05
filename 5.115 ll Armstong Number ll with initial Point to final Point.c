// Armstong Number (with initial point to final point )
#include<stdio.h>
int main()
{
    int initialNumber,finalNumber,temp,reminder,sum=0 ,i ;

    printf("Enter the Starting Number: ");
    scanf("%d",&initialNumber);
    printf("Enter the Ending number: ");
    scanf("%d",&finalNumber);

 printf("Armstong Number from %d to %d :  ",initialNumber,finalNumber);

    for(i= initialNumber; i<=finalNumber; i++)
    {
        temp = i ;
        sum = 0 ;
        while(temp!= 0 )
        {
            reminder = temp % 10  ;
            sum = sum + pow(reminder,3);
            temp = temp / 10 ;
        }

        if (sum == i)

            printf("%d  ",i);
    }

}

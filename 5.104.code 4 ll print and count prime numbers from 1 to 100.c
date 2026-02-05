//Code-4 : Print and count prime numbers from 1 to 100
#include<stdio.h>
int main()
{
    int number,count=0,i,totalPrimeNumber=0 ;

    for(number=1; number<=100; number++)
    {
        count = 0 ;
        if(number<=1)
        {
            count ++ ;
        }

        else
        {
            for(i=2; i<=sqrt(number); i++)
            {
                if(number%i == 0)
                {
                    count++ ;
                    break ;
                }
            }

        }

        if(count == 0)
        {
            printf("%d ",number);
            totalPrimeNumber++  ;

        }
    }

    printf("\n\nTotal Prime number = %d ",totalPrimeNumber);

}

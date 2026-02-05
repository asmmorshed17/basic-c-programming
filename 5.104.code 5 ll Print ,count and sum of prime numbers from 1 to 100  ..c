// code - 5 : Print ,count and sum of prime numbers from 1 to 100
#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int number,i,count , TotalPrimeNumber= 0,SumOfPrimeNumber = 0  ;

    for(number= 1 ; number<=100 ; number++)
    {
        count = 0 ;
        if(number<=1)
        {
            count++ ;
        }
        else
        {
            for(i=2; i<=sqrt(number); i++)
            {
                if(number%i==0)
                {
                    count++ ;
                    break  ;
                }
            }
        }
        if(count==0)
            {
                printf("%d ",number);
                TotalPrimeNumber++ ;
                SumOfPrimeNumber = SumOfPrimeNumber + number ;
            }
    }

    printf("\n\nTotal Prime number from 1 to 100 : %d",TotalPrimeNumber);
    printf("\nSum of Total Prime Numbers from 1 to 100 : %d\n",SumOfPrimeNumber);
}

//code 6 : Print ,count and sum of prime numbers from m to n . user friendly

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
  int number,i,count , TotalPrimeNumber= 0,SumOfPrimeNumber = 0 ,startingNumber,endingNumber ;

  printf("Enter Starting Number: ");
  scanf("%d",&startingNumber);

  printf("Enter Ending Number: ");
  scanf("%d",&endingNumber);

  printf("\n");


    for(number=startingNumber ; number<=endingNumber ; number++)
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

    printf("\n\nTotal Prime number from 1 to 100 : %d\n",TotalPrimeNumber);
    printf("\nSum of Total Prime Numbers from 1 to 100 : %d\n",SumOfPrimeNumber);

}

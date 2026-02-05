#include<stdio.h>
#include<math.h>
int main()
{
    int number,count=0,i ;
    printf("Enter any Number: ");s
    scanf("%d",&number);

    if(number<=1)
    {
        count++ ;
    }

    for(i=2 ; i<= sqrt(number); i++)
    {
        if(number%i==0)
        {
            count++ ;
            break ;
        }
    }
    if(count==0)
        printf("%d is a Prime Number \n",number);

    else
        printf("%d is Not a Prime Number\n",number);

}

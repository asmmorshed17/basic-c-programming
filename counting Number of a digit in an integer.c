#include<stdio.h>
int main()
{
    int number,count = 0;

    printf("Enter any integer : ");
    scanf("%d",&number);

    while(number!=0)
    {
        number = number/10 ;
        count++ ;
    }
    printf("Total number of digits : %d\n",count);
}

#include<stdio.h>
int main()
{
    int year ;
    printf("Enter a Year : ");
    scanf("%d",&year);

            if(year%400==0 || (year%100!=0 && year%4==0))
        printf("%d is a Leap Year",year);
    else
        printf("%d is Not a Leap Year\n",year);

}

// Prime Number :
#include<stdio.h>
int main()
{
    int num,i,count =0 ;
    printf("Enter any Positive integer: ");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++ ;
            break ;
        }

    }
    if(count==0)
        printf("Prime Number\n");

    else
        printf("Not Prime Number\n");
}





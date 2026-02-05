// Even / Odd numbers
#include<stdio.h>
int main()
{
    int num ;
    printf("enter any number: ");
    scanf("%d",&num);

    if(num%2==0)
        printf("The Number %d is Even Number\n",num);

    else
        printf("The Number %d is Odd Number\n",num);

    getch();
}

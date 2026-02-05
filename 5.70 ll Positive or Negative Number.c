#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num>0)
        printf("The Number %d is Positive Number\n",num);

    else if(num<0)
        printf("The Number %d is Negative Number\n",num);

    else
       printf("The Number %d is Zero\n",num);

}

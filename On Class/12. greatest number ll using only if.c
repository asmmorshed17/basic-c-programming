  #include<stdio.h>
int main()
{
    int num1,num2,num3 ;
    printf("Enter three Numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("%d is the Largest Number\n",num1);
    }
    if(num2>num1 && num2>num3)
    {
        printf("%d is the Largest Number\n",num2);
    }
    if(num3>num1 && num3>num2)
    {
        printf("%d is the Largest Number\n",num3);
    }
    if(num1==num2 && num2==num3 && num1==num3)
    {
        printf("Numbers are Equal\n");
    }
}

#include<stdio.h>
void sum(int a,int b,int c )
{
    printf("The sum is : %d\n",a+b+c);
}

void sub(int a,int b)
{
    printf("The substraction is : %d\n",a-b);
}

int main()
{
    sum(10,20,30);
    sum(15,25,35);
    sub(100,79);
}

/*
The sum is : 60
The sum is : 75
The substraction is : 21  */

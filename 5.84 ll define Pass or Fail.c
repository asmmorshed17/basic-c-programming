#include<stdio.h>
int main()
{
    int marks ;
    printf("Enter Marks:  ");
    scanf("%d",&marks);

    if(marks>=1 && marks<=100)
    {
        if(marks>=33)
            printf("Pass");
       else
           printf("Fail");
    }
  else
        printf("Invalid Marks");
}

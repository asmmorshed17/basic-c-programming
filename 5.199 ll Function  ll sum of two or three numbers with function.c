// Function || Sum of two or three numbers with function

// Basic:
// Function Syntax :
// return_type function_name (parameter )
// {

// }

// Method-1:
#include<stdio.h>
int sum(int a,int b)
{
    return a+b ;
}

int main()
{
    int num1,num2 ;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    printf("The sum is: %d\n",sum(num1,num2));
}
// Enter two numbers: 25 27
// The sum is: 52



// Method-2:
/*

#include<stdio.h>
int sum(int a,int b)
{
    return a+b ;
}

int main()
{
    int num1,num2 ;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    int result = sum(num1,num2) ;
    printf("The sum is: %d\n",result);
}
// Enter two numbers: 54 21
// The sum is: 75

*/



/*
  // Method-3:

#include<stdio.h>
int sum(int a,int b)
{
    return a+b ;
}

int main()
{
    int result = sum(5,7) ;
    printf("The sum is: %d\n",result);

    result = sum(9,11) ;
    printf("The sum is: %d\n",result);
}
// Output:
// The sum is: 12
// The sum is: 20

*/



/*
  // Method-4:
  #include<stdio.h>
int sum(int a,int b)
{
    return a+b ;
}

int main()
{
    printf("The sum is: %d\n",sum(12,3));
    printf("The sum is: %d\n",sum(120,30));
}
// Output:
// The sum is: 15
// The sum is: 150

*/


/*
// Method-5:

#include<stdio.h>
int sum(int a,int b,int c)
{
 printf("The sum is: %d\n",a+b+c);
}

int main()
{
  sum(12,13,25);
}
// Output:
//The sum is: 50


*/


/*

#include<stdio.h>
void sum(int a,int b,int c)
{
 printf("The sum is: %d\n",a+b+c);
}

int main()
{
  sum(12,13,25);
}
// Output:
//The sum is: 50






*/

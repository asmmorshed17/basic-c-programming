// Structure is a collection of variables of different types under a single name
// A Structure is a user defined data type in C/C++
#include<stdio.h>
// global structure
struct Person
{
    int age ;
    float salary ;
};
int main()
{
    struct Person person1,person2;
    person1.age = 27 ;
    person1.salary = 12750.50;

    printf("Person1: \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    person2.age = 30 ;
    person2.salary = 15000.50 ;

    printf("\nPerson2: \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    getch();
}
/*
Person1:
Age = 27
Salary = 12750.50

Person2:
Age = 30
Salary = 15000.50
*/








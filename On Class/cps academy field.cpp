//Introduction to Structure:
#include<stdio.h>
//global Structure
struct Person{
int age ;
float salary ;
};

int main(){

struct Person person1,person2 ;

person1.age = 27 ;
person1.salary = 12750.50 ;

person2.age = 20 ;
person2.salary = 14350.50 ;

printf("Person-1 Details: \n");
printf("Age: %d\n",person1.age);
printf("Salary: %.2f\n",person1.salary);


printf("\n\nPerson-2 Details: \n");
printf("Age: %d\n",person2.age);
printf("Salary: %.2f\n",person2.salary);

getch();
}
/*
Person-1 Details:
Age: 27
Salary: 12750.50


Person-2 Details:
Age: 20
Salary: 14350.50
*/

/*
A pointer is a variable that stores the memory address of another variable. Instead of
holding a direct value, it holds the address where the value is stored in memory.
There are 2 important operators that we will use in pointers concepts i.e.

Dereferencing operator(*) used to declare pointer variable and access
the value stored in the address.
Address operator(&) used to returns the address of a variable or
to access the address of a variable to a pointer.   */

#include <stdio.h>

int main()
{

    // taking an integer variable
    int m = 100;

    // pointer variable ptr that stores the address of variable m
    int *ptr = &m;

    // printing the value of variable m
    printf("The Value of Variable m is: %d\n", m);

    // printing the memory address of variable m  in hexadecimal format
    printf("The Memory Address of Variable m is: %p\n", &m);

    // printing the value of ptr i.e.
    // printing the memory address of variable m in hexadecimal format using pointer variable
    printf("The Memory Address of Variable m is using ptr: %p\n", ptr);

    return 0;
}

// The Value of Variable m is: 100
// The Memory Address of Variable m is: 000000000061FE14
// The Memory Address of Variable m is using ptr: 000000000061FE14


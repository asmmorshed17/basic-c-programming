/*
Codeforwin:
Array-1: C program to declare, initialize, input and print array elements

Write a C program to declare, initialize, input elements in array and print array.
How to input and display elements in an array using for loop in C programming.
C program to input and print array elements using loop.

Example

Input

Input size: 10
Input elements: 1
2
3
4
5
6
7
8
9
10
Output

Output: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
*/
#include<stdio.h>
#define Max_size 100
int main()
{
    int arr[Max_size],array_size ;
    printf("Enter array Size: ");
    scanf("%d",&array_size);
    int i ;
    printf("Enter Array Element: ");
    for(i=0;i<array_size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Output: ");
    for(i=0;i<array_size;i++)
    {   if(array_size-i==1)
         printf("%d",arr[i]);
         else
        printf("%d, ",arr[i]);
    }
}


/*
Enter array Size: 10
Enter Array Element: 10 20 30 40 50 60 70 80 90 100
Output: 10, 20, 30, 40, 50, 60, 70, 80, 90, 100      */










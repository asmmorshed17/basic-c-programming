// function: Passing String to a function
#include<stdio.h>

void display (char s1[])
{
    int i=0;
    while (s1[i]!='\0')
    {
        printf("%c\n",s1[i]);
        i++ ;
    }
}

int main()
{
    char str[] = "Amelia Rahman";
    display(str);
}

/*
A
m
e
l
i
a

R
a
h
m
a
n

*/



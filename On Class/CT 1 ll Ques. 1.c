#include<stdio.h>
int main()
{
    int a = 5 ;
    int b,c ;
    b = a++  ;
    printf("Postfix increment: a = %d,b = %d\n",a,b);
    c = --a ;
    printf("Prefix decrement : a = %d, c=%d\n",a,c);
    b = ++a ;
    printf("Prefix increment : a = %d , b = %d\n",a,b);
    c = a-- ;
    printf("Postfix decrement : a = %d , c = %d\n",a,c);
}
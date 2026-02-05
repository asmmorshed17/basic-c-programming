#include<stdio.h>
int  main()
{
    int a=10;int*p;int **p ;
    p=&a ;
    pp= &p ;

    printf("Address of a :%x\n",p);
    printf("Address of p: %x\n",pp);
}

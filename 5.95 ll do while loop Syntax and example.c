#include<stdio.h>
int main()
{
    int i,n ;
    printf("How many number do you want to display here: ");
    scanf("%d",&n);

    i = 1 ;
    do
    {
        printf("%d  ",i);
        i++ ;
    }
    while(i<=n);
}
/* Syntax - while loop:
    declaratioin ;
    intialization ;

    do
   {
       ---------   -------
       ------- body ------
       -------   -------

       Update ;
   }
   while (Condition)

*/





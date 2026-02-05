#include<stdio.h>
int main()
{
    int i,n ;


    printf("How many number do you want to display here: ");
    scanf("%d",&n);

    i = 1 ;
    while(i<=n)
    {
        printf("%d  ",i);
        i++ ;
    }
}
 /* Syntax - while loop:
     declaratioin ;
     intialization ;

     while(condition)

    {
        ---------   -------
        ------- while ------
        ------- body -------

        Update ;                 // update means - increment or decrement
    }

*/




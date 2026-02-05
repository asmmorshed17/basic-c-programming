#include<stdio.h>
int main()
{
    int i,n ;
    printf("How many number do you want to display here: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d  ",i);
    }

}
 /* Syntax - for loop:

    counter declaration ;
    for(initialization; condition ; update)
    {
        ---------   -------
        ------- loop ------
        ------- body -------
    }

*/


